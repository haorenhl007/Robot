// ------------------  ������ģ�����ݽṹ���� ------------------------ //
struct  typFNT_GB16                 // ������ģ���ݽṹ 
{
       unsigned char  Index[3];               // ������������	
       unsigned char   Msk[32];                        // ���������� 
};

/////////////////////////////////////////////////////////////////////////
// ������ģ��                                                          //
// ���ֿ�: ����16.dot,����ȡģ���λ,��������:�����Ҵ��ϵ���         //
/////////////////////////////////////////////////////////////////////////
struct  typFNT_GB16 codeGB_16[] =          // ���ݱ� 
{
/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x80,0x10,0x90,0x08,0x98,0x0C,0x90,0x08,0xA0,0x00,0x80,0x3F,0xFC,0x00,0x04,
0x00,0x04,0x1F,0xFC,0x00,0x04,0x00,0x04,0x00,0x04,0x3F,0xFC,0x00,0x04,0x00,0x00,

/*--  ����:  ǰ  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"ǰ",0x08,0x10,0x06,0x18,0x04,0x20,0xFF,0xFE,0x00,0x00,0x3E,0x08,0x22,0x48,0x3E,0x48,
0x22,0x48,0x22,0x48,0x3E,0x48,0x22,0x48,0x22,0x48,0x2A,0x08,0x24,0x28,0x00,0x10,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x00,0x00,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x22,0x00,0x22,0x7C,0x7F,0x44,0x22,0x44,0x3E,0x44,0x22,0x7C,0x3E,0x44,0x22,0x44,
0x22,0x44,0xFF,0x7C,0x00,0x44,0x24,0x84,0x22,0x84,0x43,0x14,0x81,0x08,0x00,0x00,

/*--  ����:  ʱ  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"ʱ",0x00,0x10,0x00,0x10,0x7C,0x10,0x44,0x10,0x47,0xFE,0x44,0x10,0x7C,0x10,0x45,0x10,
0x44,0x90,0x44,0x90,0x7C,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x50,0x00,0x20,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x20,0x00,0x13,0xFC,0x10,0x04,0x40,0x04,0x47,0xE4,0x44,0x24,0x44,0x24,0x47,0xE4,
0x44,0x24,0x44,0x24,0x47,0xE4,0x40,0x04,0x40,0x04,0x40,0x04,0x40,0x14,0x40,0x08,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x40,0x00,0x27,0xF0,0x24,0x10,0x07,0xF0,0x94,0x10,0x54,0x10,0x17,0xF0,0x20,0x00,
0x2F,0xFC,0xC9,0x24,0x49,0x24,0x49,0x24,0x49,0x24,0x49,0x24,0x5F,0xFE,0x40,0x00,

/*--  ����:  ʪ  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"ʪ",0x00,0x00,0x27,0xF8,0x14,0x08,0x14,0x08,0x87,0xF8,0x44,0x08,0x44,0x08,0x17,0xF8,
0x11,0x20,0x21,0x20,0xE9,0x24,0x25,0x28,0x23,0x30,0x21,0x20,0x2F,0xFE,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x01,0x00,0x00,0x80,0x3F,0xFE,0x22,0x20,0x22,0x20,0x2F,0xFC,0x22,0x20,0x23,0xE0,
0x20,0x00,0x27,0xF8,0x22,0x10,0x21,0x20,0x20,0xC0,0x41,0x30,0x46,0x0E,0x98,0x04,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x3F,0xF8,0x01,0x00,
0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x20,0x40,0x27,0xFC,0x20,0x00,0x23,0xB8,0xF2,0xA8,0x23,0xB8,0x21,0x10,0x27,0xFC,
0x21,0x10,0x27,0xFC,0x31,0x10,0xEF,0xFE,0x41,0x28,0x03,0x10,0x0D,0x48,0x01,0x86,

"��",0x02,0x00,0x01,0x00,0x7F,0xFE,0x40,0x02,0x88,0x24,0x10,0x10,0x20,0x08,0x00,0x00,
0x1F,0xF0,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFC,0x00,0x00,
"��",0x10,0x00,0x10,0x00,0x3F,0xFC,0x20,0x00,0x4F,0xF0,0x80,0x00,0x3F,0xF0,0x00,0x10,
0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x0A,0x00,0x0A,0x00,0x06,0x00,0x02,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x23,0xF8,0x10,0x00,0x10,0x00,0x80,0x00,0x47,0xFE,0x40,0x80,0x10,0x80,
0x11,0x00,0x21,0xF8,0xE0,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x50,0x00,0x20,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"Ⱦ",0x20,0x80,0x10,0x80,0x03,0xF0,0x40,0x90,0x21,0x10,0x09,0x12,0x12,0x12,0x64,0x0E,
0x29,0x00,0x01,0x00,0xFF,0xFE,0x05,0x40,0x09,0x20,0x31,0x18,0xC1,0x06,0x01,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"ָ",0x11,0x00,0x11,0x04,0x11,0x38,0x11,0xC0,0xFD,0x02,0x11,0x02,0x10,0xFE,0x14,0x00,
0x19,0xFC,0x31,0x04,0xD1,0x04,0x11,0xFC,0x11,0x04,0x11,0x04,0x51,0xFC,0x21,0x04,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x08,0x20,0x49,0x20,0x2A,0x20,0x08,0x3E,0xFF,0x44,0x2A,0x44,0x49,0x44,0x88,0xA4,
0x10,0x28,0xFE,0x28,0x22,0x10,0x42,0x10,0x64,0x28,0x18,0x28,0x34,0x44,0xC2,0x82,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,


/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x70,0x00,0x53,0xF4,0x74,0x0C,0x08,0x04,0x08,0x04,0x10,0x00,0x10,0x00,0x10,0x00,
0x10,0x00,0x10,0x00,0x10,0x00,0x08,0x04,0x08,0x04,0x04,0x08,0x03,0xF0,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x1F,0xF8,0x10,0x08,0x1F,0xF8,0x10,0x08,0x1F,0xF8,0x01,0x00,0x11,0x00,
0x1F,0xFC,0x21,0x00,0x21,0x00,0x4F,0xF8,0x01,0x00,0x01,0x00,0x7F,0xFE,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x22,0x00,0x22,0x7C,0x7F,0x44,0x22,0x44,0x3E,0x44,0x22,0x7C,0x3E,0x44,0x22,0x44,
0x22,0x44,0xFF,0x7C,0x00,0x44,0x24,0x84,0x22,0x84,0x43,0x14,0x81,0x08,0x00,0x00,

/*--  ����:  һ  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"һ",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x7F,0xFE,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x00,0x10,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x7F,0xFC,0x44,0x84,0x44,0x84,0x44,0x84,0x44,0x84,0x44,0x84,0x44,0x84,
0x48,0x84,0x48,0x7C,0x50,0x04,0x60,0x04,0x40,0x04,0x7F,0xFC,0x40,0x04,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=16x16   --*/
"��",0x00,0x00,0x7F,0xF8,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x20,0x3F,0xF0,
0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x24,0xFF,0xFE,0x00,0x00,0x00,0x00,

"��",0x00,0x00,0x47,0xFE,0x34,0x02,0x18,0xA4,0x81,0x10,0x62,0x48,0x20,0x40,0x08,0x44,
0x17,0xFE,0x20,0xE0,0xE1,0x50,0x22,0x4E,0x2C,0x44,0x20,0x40,0x20,0x40,0x20,0x40,

"��", 0x00,0x00,0x00,0x00,0x00,0x38,0x00,0xFC,
      0x01,0xFE,0x03,0xFF,0x03,0xFF,0x03,0xFF,
      0x03,0xFF,0x01,0xFF,0x00,0xFF,0x00,0x3F,
      0x00,0x1F,0x00,0x0F,0x00,0x03,0x00,0x01,
        
"ɫ", 0x00,0x00,0x00,0x00,0x1E,0x00,0x3F,0x00,
      0x7F,0x80,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,
      0xFF,0x80,0xFF,0x00,0xFE,0x00,0xFC,0x00,
      0xF8,0x00,0xF0,0x00,0xC0,0x00,0x80,0x00,
/*--  ??:  ?  --*/
/*--  ??12;  ??????????:?x?=16x16   --*/
"��",0x01,0x00,0x01,0x00,0x02,0x80,0x04,0x40,0x08,0x20,0x12,0x10,0x21,0x08,0xC1,0x06,
0x00,0x00,0x1F,0xF0,0x00,0x10,0x00,0x20,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,
"��",0x00,0x00,0x3F,0xF8,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x01,0x00,
0x02,0x80,0x02,0x80,0x04,0x40,0x04,0x40,0x08,0x20,0x10,0x10,0x20,0x08,0xC0,0x06,
/*--  ??:  ?  --*/
/*--  ??12;  ??????????:?x?=16x16   --*/
"ũ",0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFC,0x42,0x04,0x82,0x08,0x05,0x00,0x05,0x08,
0x08,0x90,0x18,0xA0,0x28,0x40,0x48,0x20,0x88,0x10,0x0A,0x08,0x0C,0x06,0x08,0x00,
"��",0x00,0x80,0x04,0x80,0x04,0x80,0x08,0x40,0x08,0x40,0x10,0x20,0x20,0x10,0x42,0x08,
0x82,0x06,0x04,0x00,0x04,0x40,0x08,0x20,0x10,0x20,0x3F,0xF0,0x10,0x10,0x00,0x00,
"��",0x00,0x00,0x3F,0xFE,0x20,0x00,0x20,0x80,0x20,0x80,0x20,0x80,0x2F,0xFC,0x20,0x84,
0x20,0x84,0x21,0x04,0x21,0x04,0x22,0x04,0x22,0x04,0x44,0x04,0x48,0x28,0x90,0x10
};