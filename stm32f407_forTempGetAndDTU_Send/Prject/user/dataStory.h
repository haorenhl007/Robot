
#ifndef dataStory_H_
#define dataStory_H_
#include "stm32f4xx.h"
#define MAXCOM     16
typedef enum
{
	LED=0,
	LCD=1
}MODE;
typedef struct
{
	char name[10];   // ģ������
	MODE modeType;   // ģ������
	uint8_t Online;  // ���ݻ�ȡ�ǳɹ� 
									 // 1 --�ɹ� 
									 // 0 ---ʧ��
	uint16_t * dataPoint;  // ����ָ�� 
	uint8_t DeviceID;      // �յ����豸ID
}COMDATA;            		 // �豸���� 
extern COMDATA comPortData[MAXCOM];   // �豸�������� 
extern uint16_t Values[MAXCOM][2];
/* 
* name : PortConfig
* MODDE:
**/
void PortConfig(MODE modes,uint8_t comPort,char buff[]);
/*
* name : GiveValue 
*     :: ���ڸ��Ƹ���Ӧ�ı��� 
**/
void GiveValue(void);
/*
*  name : DevieceConfig
*  canshu: com �˿ں� 0--15  
*  buff  : ���ƺ�
**/
void DevieceConfig(uint8_t com,char *buff);
/*
* name : GetValue
* buff : ��������
**/
uint16_t GetValue(char buff[]);
/*
* name : GetValue2
*      comPort �˿ں�
*   ���˿ںŷ��ض˿ڶ�ȡ��������
**/
uint16_t GetValue2(uint8_t comPort);

#endif