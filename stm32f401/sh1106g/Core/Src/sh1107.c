#include "sh1107.h"
//#include "bmp.h"
#include "codetab.h"


void sh1107_init(void)
{
	WriteCmd(0xAE);	/*display off*/

	WriteCmd(0x00);	/*set lower column address*/
	WriteCmd(0x10); /*set higher column address*/

	WriteCmd(0xB0); /*set page address*/

	WriteCmd(0xDC); /*set display start line*/
	WriteCmd(0x00);

	WriteCmd(0x81); /*contract control*/
	WriteCmd(0xAF);

	WriteCmd(0x20); /* Set Memory addressing mode (0x20/0x21) */
	WriteCmd(0xA0); /*set segment remap*/

	WriteCmd(0xC0); /*Com scan direction*/

	WriteCmd(0xA4); /*Disable Entire Display On (0xA4/0xA5)*/
	WriteCmd(0xA6); /*normal / reverse*/

	WriteCmd(0xA8); /*multiplex ratio*/
	WriteCmd(0x3F); /*duty = 1/64*/

	WriteCmd(0xD3); /*set display offset*/
	WriteCmd(0x60);

	WriteCmd(0xDA); /*set osc division*/
	WriteCmd(0x51);
	WriteCmd(0xD0); /*set pre-charge period*/
	WriteCmd(0x22);

	WriteCmd(0xDB); /*set vcomh*/
	WriteCmd(0x35);

	WriteCmd(0xAD); /*set charge pump enable*/
	WriteCmd(0x80); /*Set DC-DC enable (a=0:disable; a=1:enable) */

	sh1107_clear();

	WriteCmd(0xAF); /*display ON*/

	sh1107_setpos(0,0);

}


void sh1107_setpos(unsigned char x,unsigned char y)
{
	WriteCmd(0xB0+y);
	WriteCmd(((x&0xf0)>>4)|0x10);
	WriteCmd(x&0x0F);
}

void sh1107_clear()
{
	unsigned char i,n;
	for(i=0;i<16;i++)
	{
		WriteCmd(0xb0+i);
		WriteCmd(0x00);
		WriteCmd(0x10);
		for(n=0;n<64;n++)
		{
			WriteDat(0);
		}
	}
}

void sh1107_showchar(unsigned char x,unsigned char y,unsigned chr)
{
	unsigned char c=0,i=0;
	c=chr-' ';//得到偏移后的值
	if(x>Max_Column-1){x=0;y=y+2;}
	if(SIZE ==16)
	{
		sh1107_setpos(x,y);
		for(i=0;i<8;i++)
		{
			WriteDat(F8X16[c*16+i]);
		}
		sh1107_setpos(x,y+1);
		for(i=0;i<8;i++)
		{
			WriteDat(F8X16[c*16+i+8]);
		}
	}
	else
	{
		sh1107_setpos(x,y+1);
		for(i=0;i<6;i++)
			WriteDat(F6x8[c][i]);

	}
}
