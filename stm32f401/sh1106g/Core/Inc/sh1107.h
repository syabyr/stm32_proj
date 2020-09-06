#ifndef __SH1107_H__
#define __SH1107_H__


#define OLED_MODE 0
#define SIZE 16
#define XLevelL		0x00
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF
#define X_WIDTH 	128
#define Y_WIDTH 	64


void sh1107_init(void);
void sh1107_setpos(unsigned char x,unsigned char y);
void sh1107_clear();

void sh1107_showchar(unsigned char x,unsigned char y,unsigned chr);

#endif
