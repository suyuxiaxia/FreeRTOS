/**
 ****************************************************************************************************
 * @file        main.c
 * @author      ����ԭ���Ŷ�(ALIENTEK)
 * @version     V1.0
 * @date        2020-04-20
 * @brief       ����� ʵ��
 * @license     Copyright (c) 2020-2032, ������������ӿƼ����޹�˾
 ****************************************************************************************************
 * @attention
 *
 * ʵ��ƽ̨:����ԭ�� STM32F103������
 * ������Ƶ:www.yuanzige.com
 * ������̳:www.openedv.com
 * ��˾��ַ:www.alientek.com
 * �����ַ:openedv.taobao.com
 *
 ****************************************************************************************************
 */

#include "./SYSTEM/sys/sys.h"
#include "./SYSTEM/delay/delay.h"
#include "./SYSTEM/usart/usart.h"
#include "./BSP/LED/led.h"
#include "FreeRTOS.h"
#include "task.h"


 void task1( void  * args ){
        while(1)             
    {
        LED0(0);                                /* LED0 �� */
        LED1(1);                                /* LED1 �� */
        vTaskDelay(100);
        LED0(1);                                /* LED0 �� */
        LED1(0);                                /* LED1 �� */
        vTaskDelay(100);
    }
        
 }

 
TaskHandle_t  handle;

int main(void)
{
    led_init();
             

    xTaskCreate(task1,"task1",128,NULL,2,&handle);   

    vTaskStartScheduler();    
    
    while(1)             
    {
//        LED0(0);                                /* LED0 �� */
//        LED1(1);                                /* LED1 �� */
//        delay_ms(500);
//        LED0(1);                                /* LED0 �� */
//        LED1(0);                                /* LED1 �� */
//        delay_ms(500);
    }
}

