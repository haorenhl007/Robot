#include"Task_GUI.h"
// #include"GUIDEMO.h"
//#include<songti16.c>
//#include<SongTi24.c>
//#include<songti48.c>
//#include<zhandian16.c>
//#include"LCD_interface.h"
//#include"Bsp_Touch_SPI.h"
//#include"GUI_DraweSing.h"
#include "MainTaskGUI.h"
#include"time.h"
#include"stdio.h"
#include"stdlib.h"
void AppTaskGUI(void *p_arg)
{
//	uint8_t i;
	OS_ERR      err;
  OSTimeGet(&err);	
	(void) p_arg;
	
//	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_CRC, ENABLE);   // ����CRC ����
	
	//Lcd_Init();   // LCD ��ʼ�� 
	
  //Touch_Init();  // ��ʾ����ʼ�� 
	
 	
  //WM_SetCreateFlags(WM_CF_MEMDEV); // ���� ���� �ڴ�����
  //GUI_Init();	    // �ǣգɿ�ʼ 
	//GUI_Clear();    // ���� 
	// FistPageDrawLine();
	// CPU_SR_ALLOC();
	// CPU_CRITICAL_ENTER(); // ��ֹ�ж�
	//backWIn_init();  //������ʾ����ʾ����
  //Draw_init();
// 	GUI_CURSOR_Show();    //��ʾָ�� 
   //pageChangFlag=0;
	 while(1)
	 {
		 BSP_OS_TimeDly(200);
	 }
}
void AppTaskGUIDrawing(void *p_arg)
{
	p_arg=p_arg;
	while(1)
	{
		
	}
	 
}
void AppTaskGUIRefresh(void *p_arg)
{
  (void)p_arg;
	while(1)
	{
		  // GUI_Exec();             //    GUI �л�
		  BSP_OS_TimeDly(300);
	}
}
