//////////////////////////////////////////////////////////////////////////////////	 
//
//
//�洢ͼƬ���ݣ�ͼƬ��СΪ64*32����
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef __BMP_H
#define __BMP_H

//87x64
unsigned char YANG[] =
{
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X80,0X80,0X80,0X60,0X10,
0X08,0X08,0X08,0X08,0X08,0X10,0X10,0X0C,0X02,0X02,0X02,0X02,0X02,0X04,0X04,0X02,
0X02,0X01,0X01,0X01,0X01,0X02,0X02,0X04,0X04,0X04,0X04,0X00,0X00,0X00,0X04,0XDC,
0X28,0X08,0X08,0X06,0X02,0X02,0X02,0X04,0X04,0X02,0X02,0X06,0X0C,0X08,0X08,0X48,
0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X40,0X3E,
0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X70,0X78,0X78,0X78,0X3C,0X3C,0XFF,0X1F,0X03,0X62,0XF4,0XF2,0X02,0X02,0X04,
0X04,0X64,0XF4,0XF6,0X02,0X1E,0XFE,0X79,0X78,0XF8,0XF0,0XF0,0X60,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X80,0XC0,0XE0,0XE4,0XF9,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFC,0X03,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFC,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0X0F,0X0F,0X03,0X04,0X18,0X10,0XE0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X06,0X18,0X30,0X20,0X40,0X44,0X48,0X78,0X48,0XC4,0X44,
0X40,0X20,0X10,0X08,0X07,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X03,0X06,0X04,0X04,0X18,0X60,0X40,0X00,0XC0,0X40,0X60,
0X60,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X40,0X80,0X80,0X80,0X80,0X80,
0X60,0X18,0X08,0X04,0X06,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XFF,0X80,0X00,0XFE,0X01,0XE1,0XCE,0X82,0XD2,0XC6,0X02,0X02,
0X04,0X04,0X08,0X08,0X08,0X00,0X04,0X02,0X03,0XFE,0X82,0X02,0XFE,0X02,0XFE,0XC1,
0XC0,0XF8,0XC3,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X07,0X07,0X07,0X07,0X07,
0X01,0X03,0X03,0X03,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X07,0X07,0X07,0X07,0X07,0X01,0X03,0X03,0X03,0X03,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

//92x64
unsigned char PEIQI0[] =
{
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X80,0X40,0X40,0X40,0X80,0X00,0X00,0XF0,0X08,0X00,0X08,0X18,0X80,0X00,0X00,
0X00,0X00,0X00,0X80,0X80,0X80,0X80,0X80,0X80,0X80,0X00,0X80,0X80,0X80,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X01,0X07,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0X88,0X50,
0X40,0X00,0X03,0X1C,0X08,0X07,0XA4,0X50,0X40,0X13,0XA0,0X01,0X11,0X19,0X18,0X04,
0X00,0X00,0X00,0X00,0X22,0X00,0X18,0X18,0X00,0X1C,0X09,0X82,0X78,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC0,0X18,0X02,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X10,
0X50,0X10,0X00,0X09,0X08,0X04,0X02,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X03,0X30,0X40,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,
0X00,0X10,0X00,0X20,0X20,0X20,0X00,0X10,0X00,0X07,0X00,0X80,0X60,0X06,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X80,0X80,0X80,0X80,0X40,0X40,0X20,0XA0,
0X70,0X18,0X05,0X02,0X02,0X04,0X08,0X08,0X00,0X10,0X10,0X10,0X10,0X10,0X10,0X10,
0X00,0X08,0X08,0X00,0X04,0X02,0X06,0X18,0X70,0X90,0X20,0X20,0X40,0X40,0X80,0XC0,
0X40,0X40,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XC3,0X01,0XF7,0X90,0XF0,0X80,0XF8,0X03,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X03,0X38,0X00,0X00,0X00,0X01,0X02,0X01,0X01,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X01,0X00,0X00,0X00,0X10,0X10,0X10,0X10,0X10,0X10,0X10,0X10,0XF0,0X10,
0X10,0X10,0X10,0X10,0X10,0X10,0X10,0X10,0X10,0X10,0XF0,0X10,0X10,0X10,0X10,0X10,
0X10,0X10,0X10,0X1F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X1C,0X1C,0X1F,0X1C,0X1C,0X1C,0X1C,0X0C,
0X00,0X00,0X00,0X00,0X00,0X1C,0X1F,0X1C,0X1C,0X1C,0X1C,0X1C,0X0C,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

unsigned char BMP1[] =
{
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X30,0X78,0X48,0XC8,0X88,0X88,0X80,0X80,0X80,0X80,0X80,0X80,0X80,0X80,0X88,
0X88,0X88,0X88,0X98,0X98,0X98,0X98,0X98,0X98,0X98,0X90,0X90,0XA0,0XA0,0XA0,0X80,
0XC0,0X40,0X00,0X00,0X00,0X80,0X80,0X00,0X08,0X08,0X08,0X08,0X08,0X08,0X08,0X88,
0X08,0X08,0X00,0X10,0X18,0X38,0X08,0X0C,0X0C,0X0C,0X06,0X06,0X06,0X06,0X06,0X06,
0X06,0X06,0X06,0X06,0X06,0X0C,0X0C,0X0C,0X08,0X98,0X18,0X10,0X00,0X00,0X08,0X88,
0X08,0X08,0X08,0X08,0X08,0X08,0X08,0X08,0X00,0X80,0X80,0X00,0X00,0X00,0XC0,0XC0,
0X80,0XA0,0XA0,0X80,0X90,0X90,0X98,0X98,0X98,0X98,0X98,0X98,0X98,0X88,0X88,0X88,
0X88,0X80,0X80,0X80,0X80,0X80,0X80,0X80,0X80,0X88,0X88,0XC8,0X48,0X38,0X10,0X00,
0X00,0X00,0X00,0X00,0X01,0X03,0X06,0X0C,0X1C,0X38,0X28,0X48,0XC8,0XC8,0XC9,0X49,
0X49,0X49,0X45,0X44,0X64,0X24,0X24,0X24,0X24,0X24,0X04,0X94,0X94,0X90,0X92,0X52,
0X4B,0X4F,0X6C,0X38,0X20,0XE2,0X83,0X06,0X0C,0X38,0X30,0X60,0XE0,0X40,0XE0,0XF0,
0X80,0XF2,0XF0,0XF0,0XF8,0XFC,0XFC,0XFE,0X1E,0X0E,0X0E,0X0F,0X07,0X87,0XC7,0XE7,
0XC7,0X87,0X0F,0X0F,0X0E,0X1E,0X3E,0XFC,0XFC,0XF8,0XF9,0XF0,0XE4,0XE8,0XE3,0X80,
0XE0,0XC0,0X40,0XE0,0X60,0X30,0X38,0X0C,0X86,0X83,0XE0,0X20,0X38,0X4C,0X4B,0X4A,
0X12,0X92,0X90,0X94,0X94,0X24,0X24,0X24,0X24,0X24,0X24,0X64,0X44,0X41,0X49,0X49,
0X49,0XC9,0XC8,0XC8,0X68,0X28,0X38,0X1C,0X04,0X07,0X03,0X01,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X01,0X02,
0X02,0X06,0X0E,0X0E,0X0A,0X1A,0X13,0X31,0X31,0X79,0X49,0X48,0X48,0X44,0XE4,0XA4,
0X82,0X92,0X91,0X89,0XC9,0X64,0X24,0X93,0X9B,0XCE,0X66,0X3C,0X9C,0X4C,0X38,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0XC3,0XE7,0XE7,
0XE7,0XE3,0X80,0X00,0X00,0X08,0X1E,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X3C,0X78,0XCC,0X9C,0X26,0X46,0X8F,0X93,0X33,0X24,0X40,0XC9,0X81,0X90,0X92,0XA2,
0XA4,0XE4,0X44,0X48,0X49,0X49,0X79,0X31,0X11,0X12,0X1A,0X0A,0X0E,0X0E,0X02,0X02,
0X03,0X01,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0X01,0X01,0X01,0X01,0X07,0X1F,0X39,0XE1,0XC2,0X82,0X03,
0X03,0X07,0X0F,0X1F,0X3F,0X3F,0X7F,0X7F,0XF8,0XF0,0XF0,0XF0,0XE0,0XE1,0XE3,0XE7,
0XE3,0XE3,0XE1,0XF0,0XF0,0XF0,0XF8,0X7E,0X7F,0X3F,0X3F,0X1F,0X0F,0X07,0X03,0X03,
0X82,0XC2,0XF3,0X39,0X1F,0X07,0X01,0X01,0X01,0X01,0X01,0X01,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X03,0X07,
0X06,0X0C,0X0C,0X18,0X30,0X38,0X44,0X43,0X70,0X86,0XC1,0XF8,0X83,0X81,0X9F,0X01,
0X9F,0X81,0X83,0XF8,0X41,0X86,0X70,0X43,0X44,0X38,0X38,0X18,0X0C,0X0C,0X06,0X03,
0X03,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};
unsigned char BMP2[] =
{
0X1F,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X1C,0XF8,0X7C,0X18,0X18,
0X1C,0X04,0X04,0X00,0X00,0X00,0X00,0X00,0X1C,0X3C,0X3C,0X3C,0X08,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,
0X06,0X04,0X07,0X07,0X07,0X07,0X07,0X07,0X07,0X0F,0X0E,0X0E,0X1F,0X3F,0X3F,0X7F,
0XD0,0X90,0XF0,0XF0,0XF0,0XF8,0X04,0X00,0X00,0X00,0X00,0XE0,0X60,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,0X80,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X70,0XF0,0XF0,0XF0,0XF0,0XF0,0XF0,0XE0,0XE0,0XC0,0X80,0X00,0X00,0X00,
0X00,0X00,0X01,0X03,0X03,0X03,0X07,0X00,0X00,0X00,0X00,0X1F,0XFE,0XE2,0XC0,0XC0,
0XC0,0XC0,0XC0,0X40,0X00,0X00,0X00,0X00,0X28,0X00,0X00,0X00,0X08,0X08,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X80,0X80,0X00,0X00,0XC0,0XE0,0XF0,0XF0,0XF3,0X01,0X01,0X00,0X08,
0X18,0X08,0X10,0X60,0XE0,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X08,0X1E,0X3E,0X3C,0X1E,0X06,0X0B,0X01,0X00,0X06,0X07,0X07,0X07,0X07,0X06,0X03,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XF0,0XF0,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3E,0X3E,
0X1C,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X01,
0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X0C,0X1C,0X1C,0X1C,0X1C,0X1C,
0X1C,0X1C,0X1C,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0X01,0X01,0X05,0X07,0X02,0X03,0X01,0X01,0X01,0X01,0X01,0X04,0X00,
0X00,0X00,0X00,0X02,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

unsigned char BMP3[] =
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF7,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XE6,0XFC,0XFD,0XBE,
0X5C,0X3C,0X73,0XFB,0X33,0XB9,0X61,0XE0,0X80,0X40,0X00,0X80,0X80,0X80,0X00,0X60,
0X80,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X08,0X21,0X04,0X08,0X70,0XF1,
0X3E,0XD1,0XE3,0XFF,0XFF,0XFF,0XFE,0XFE,0XFD,0XFA,0X74,0X6E,0X5F,0XFF,0XFF,0X7F,
0XFF,0XFF,0XFF,0X7D,0X3C,0X7C,0X7E,0X7F,0X7C,0X7C,0XF8,0XF8,0XFF,0XFC,0XC1,0XF0,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0X3F,0XBF,0XBF,0X3F,0X3F,
0X7F,0X7F,0X7F,0X7F,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XBF,
0XFE,0XFF,0XFF,0XFC,0XE5,0XC7,0X87,0X83,0X83,0X81,0X9F,0XF7,0X4F,0X0F,0X3C,0X00,
0X97,0X81,0XC1,0X04,0X01,0X01,0X73,0X73,0X67,0X7E,0X7A,0XFF,0XFF,0X67,0X90,0XF8,
0XF1,0XE0,0XFF,0XCA,0XCC,0XFC,0XFE,0XE6,0XF8,0X3C,0X04,0X04,0X00,0X04,0X00,0X01,
0X03,0X01,0X01,0X01,0X03,0X03,0X03,0X83,0XC3,0XF9,0XFC,0X7C,0X7C,0X3C,0XBE,0XBE,
0XBF,0X3D,0XB8,0XE0,0XE0,0XE0,0XF8,0XFE,0XFC,0XFD,0XF8,0XF8,0XF3,0XF5,0XF1,0XF1,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFE,0XFF,0XFE,0XFC,
0XFC,0XFE,0XFC,0XFC,0XF8,0XFC,0XFC,0XF8,0XF0,0XE1,0XC1,0X03,0X03,0X03,0X03,0X03,
0X03,0XC7,0XC7,0X47,0XCF,0XC7,0XDF,0XCF,0XEF,0XF1,0XB1,0X0B,0X80,0X50,0X03,0X83,
0X81,0XC7,0X2E,0X3E,0X3E,0X06,0X07,0X00,0X0C,0X9C,0X92,0XC5,0XFD,0XFB,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0X8F,0X9F,0X1D,0X3C,0X38,0XF8,0XFC,0XFC,0XFE,0XFE,
0XFE,0XFE,0XFF,0XFD,0XFD,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFD,
0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFD,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,
0XFF,0X7F,0X7F,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XF7,0XF7,0XFB,0XFE,0XFC,0XF8,0XFE,
0XE6,0XFF,0XFF,0XE8,0XFC,0XFF,0XFF,0XF8,0XF8,0XF8,0XE8,0XEE,0XC6,0XE7,0XFC,0XF9,
0XE9,0XFA,0XE1,0XFD,0XCE,0XFF,0XFD,0XFE,0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
};

unsigned char BMP4[] =
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0X3F,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0X3F,
0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFD,0XFD,0XFF,0XF7,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X7F,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XBF,0XDF,0XFF,0XF0,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE0,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XDF,0XDF,0XDF,0XDF,0XCF,0XDF,0X9F,0X1F,0X1F,0X1F,0X0F,0X0F,0X8F,0XCF,0XCF,0XCF,
0XCF,0XEF,0XEF,0XEF,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,0XE7,
0XE7,0XE7,0XC7,0XC7,0XC7,0X87,0XC7,0X87,0X87,0XE3,0XF3,0XF7,0XF7,0XF7,0XF7,0XF7,
0XF7,0XF7,0XF7,0XF7,0XF7,0XFF,0XF7,0XFF,0XF9,0XF9,0XF9,0X7D,0XFC,0XF9,0XDF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X7F,0X3B,0X37,0X37,0X77,0XF7,0XF3,0XF9,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC6,0XC7,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFB,0XF9,0XFE,0XFE,0XF8,0XFC,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XEF,0XFF,0XFF,0XFF,0XE7,
};

unsigned char BMP5[] =
{
0X1F,0X03,0X07,0X04,0X00,0X00,0X00,0X03,0X7F,0XFF,0X00,0X00,0X00,0X80,0X00,0X00,
0X00,0X80,0X04,0X08,0X00,0X00,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X80,0X80,0XC0,0X83,0X00,0X1E,0X3F,0X3F,0X7F,0X7F,0X7F,
0X7F,0XFF,0XFE,0XF8,0XE0,0XE0,0XE0,0XE0,0XF0,0XF8,0XFE,0XF7,0XDF,0XCF,0XC7,0XC3,
0XC3,0XE1,0XA1,0XE0,0XF0,0XF0,0XF8,0XF8,0XF8,0XF8,0XF8,0X38,0X7C,0XF8,0XF0,0XF8,
0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7C,0X07,0X01,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XC4,0XC0,0XE0,0XE0,0XC0,0XC0,0X80,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X01,
0X01,0X01,0X00,0X00,0X00,0X80,0X80,0X80,0X80,0X80,0X80,0X80,0X98,0XC0,0X80,0X80,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X02,0XC2,0XE1,0XE0,0XF8,0XFF,0XFF,0XFE,0X7C,0X00,0X00,0X00,0X80,0XC0,
0XE0,0XF0,0XFF,0X7F,0X7F,0X7F,0X7F,0X3F,0X3F,0X3F,0X3F,0X3F,0X3F,0X39,0X79,0XF1,
0XF1,0XF1,0XF1,0XE1,0XCF,0X0F,0X17,0XC7,0XE7,0XE7,0XFF,0XFE,0XF8,0XFF,0XFF,0X07,
0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X80,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XFC,0XFF,0XFF,0XF8,0XF8,0XF8,0XFD,0XF7,0XF0,0XFC,0XF8,0XF0,0XF0,0XF0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X0C,0X0C,0X06,0X0A,0X0F,0X03,0X01,0X01,0X01,0X04,0X0C,
0X7F,0X0D,0XC1,0XC1,0XE2,0XE6,0XE4,0XF8,0XF0,0XF0,0XF0,0XF0,0XF8,0XF8,0XFF,0XFF,
0XFF,0XFE,0XFF,0XFF,0X7F,0X1F,0X1F,0X07,0X01,0X00,0X04,0X02,0X02,0X01,0X01,0X01,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,
0X07,0X07,0X07,0X1F,0X0F,0X06,0X00,0X07,0XE7,0X3F,0X1F,0X0F,0X0F,0X1F,0X3F,0X3E,
0X3E,0X3E,0X3E,0X1F,0X0E,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X04,0X08,0X10,0X10,
0X30,0X70,0XF0,0XF0,0XF0,0XF0,0XF0,0XB0,0X70,0XF0,0XB0,0XF0,0XF0,0XF0,0XF0,0XD0,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XF8,
0XFC,0X0C,0X08,0X38,0XF0,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X1F,0X3F,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0X7F,0X3F,0X3F,0X1F,
0X0F,0X07,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X02,0X06,0X34,0X0D,0XDE,0XB0,0X70,0XF0,0XF0,0X00,0X00,0X00,
0X00,0X79,0X78,0X38,0X1C,0X3F,0X1F,0X00,0X01,0X07,0X0C,0X1C,0X18,0X18,0X1C,0X04,
0X00,0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X02,0X01,0X03,0X03,0X07,0X0F,0X8F,0XCD,0XFB,0XFF,0XFF,0XFF,0XFF,
};

unsigned char BMP6[] =
{
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X07,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0X01,0X00,0X00,0X00,0X00,0X03,0X01,0X01,0X03,0X03,0X07,
0X0F,0X0F,0X1F,0X1F,0X1F,0X03,0X01,0X01,0X01,0X03,0X02,0X20,0X30,0X00,0X06,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X9E,0X4E,0X2C,0X1C,0X88,
0X80,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X06,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X80,0XE0,0XF0,0XF0,0XFC,0XFC,0XF8,0XFF,0XF8,0X70,0X30,0X10,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,
0X1F,0X07,0X07,0X01,0X1C,0X1F,0X1C,0X0C,0X08,0X00,0X00,0X00,0X00,0X80,0X80,0XC0,
0XC0,0XC0,0XC0,0XE0,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0X18,0X1C,0X1E,
};

unsigned char BMP7[] =
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XC8,0XBE,0XFE,0XFE,
0X3D,0X80,0X00,0X00,0X00,0X00,0X01,0X00,0X01,0X07,0X0F,0X7D,0XFC,0XC0,0X00,0X00,
0X01,0X03,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XCF,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X03,0X1F,0X30,0X00,0X80,0X00,0X00,0X00,0X08,0X00,0X00,0X03,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF0,0XF4,0X00,0X00,0X00,0XF0,0X0C,
0X00,0X01,0X03,0XF7,0X27,0X63,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFB,0XFB,0XF9,0XE0,0XF0,0XC0,0X80,0XC0,0XC2,0XE0,0XFF,0XFF,0XEC,
0XC0,0X80,0X1C,0X7F,0XFF,0XFF,0XBF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0X9F,
0X1F,0X3F,0X3F,0X7F,0X7F,0XFF,0XFF,0XFF,0XA7,0XC7,0XE3,0XF8,0X38,0X20,0XD8,0XFE,
0XFE,0XFE,0XFF,0XFC,0XE4,0XE0,0XE8,0XE8,0XE8,0XC0,0X80,0X00,0X00,0X00,0X40,0XC8,
0X30,0X03,0X00,0X00,0X00,0X00,0X00,0X80,0X80,0X8D,0XFD,0XF0,0XFC,0XFC,0XF0,0XF8,
0XF8,0XF8,0XA0,0XC0,0XC0,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XCF,0XF7,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0XFD,0XFD,0XFE,0X9C,0XF8,0XF3,0XF7,0XEC,0XFC,0XFD,0XFF,0XDE,0XCF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0X3F,
0X3E,0XFE,0XFC,0XFC,0XF8,0XF8,0XF8,0XF8,0XFC,0XF0,0XFF,0XFF,0XFE,0XFC,0XFC,0XFD,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFC,0XFC,0XFC,0XF8,0XF8,0XFD,
0XFF,0XED,0XFC,0XEC,0XFC,0XD8,0XF8,0XFF,0X7F,0X7F,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,
0XDF,0X9F,0XEF,0X4F,0XCF,0XEF,0XE0,0XC0,0XC0,0X00,0X00,0XC7,0XF0,0XC0,0X80,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0XFD,0XFF,0X9F,0XFF,0XF6,0XB4,0XFB,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XEB,0XDF,0XFF,0XDF,0X8F,0X9F,0XCF,0XEF,0XFF,0X7E,0X7F,0X18,0X16,0X0E,
0XFE,0X76,0X3F,0X3F,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XBF,
0XFF,0X7F,0X3F,0X3F,0XFF,0XFF,0XFF,0XFF,0XDF,0X9F,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFB,0XFF,0XFE,0XFC,0XFE,
0XFE,0XFE,0XF2,0XF6,0XFC,0XFC,0XFF,0XFF,0XFF,0XFC,0XF6,0XFB,0XF3,0XF7,0XFF,0XFE,
};


unsigned char BMP8[] =
{
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,
0X80,0XC0,0XC0,0XC0,0XE0,0XE0,0XE0,0XE0,0XC0,0XC0,0XC0,0XC0,0X80,0X80,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0X01,0X01,0X01,
0X01,0X01,0X01,0X03,0X03,0X0F,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0XFC,0XF8,0XE0,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X80,0XC0,0X60,0X30,0X18,0X0C,0X06,0X03,0X01,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFE,0XF8,0XF0,0XE0,0XC0,0XC0,0XC0,
0XC0,0XC0,0XC0,0XE0,0XF0,0XF8,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X10,0X3C,0X67,0X63,0X41,0XC0,0XC0,0XC0,0XC0,0XC0,0XC0,0XC0,0XC0,0XC0,0XC0,
0XC0,0X80,0XC0,0XC0,0XC0,0XC0,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X07,0X1F,0X3F,0X7F,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0X3F,
0X1F,0X0F,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

#endif

