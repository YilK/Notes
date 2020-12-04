#ifndef __STM32F10X_GPIO_H  //防重复

#define __STM32F10X_GPIO_H
#include "stm32f10x.h"   //因为要使用到寄存器定义，所以要把这个头文件给包含进来。


/*GPIO 引脚号定义*/
#define GPIO_Pin_0 ((uint16_t)0x0001) /*!< 选择 Pin0 (1<<0) */
#define GPIO_Pin_1 ((uint16_t)0x0002) /*!< 选择 Pin1 (1<<1)*/
#define GPIO_Pin_2 ((uint16_t)0x0004) /*!< 选择 Pin2 (1<<2)*/
#define GPIO_Pin_3 ((uint16_t)0x0008) /*!< 选择 Pin3 (1<<3)*/
#define GPIO_Pin_4 ((uint16_t)0x0010) /*!< 选择 Pin4 */
#define GPIO_Pin_5 ((uint16_t)0x0020) /*!< 选择 Pin5 */
#define GPIO_Pin_6 ((uint16_t)0x0040) /*!< 选择 Pin6 */
#define GPIO_Pin_7 ((uint16_t)0x0080) /*!< 选择 Pin7 */
#define GPIO_Pin_8 ((uint16_t)0x0100) /*!< 选择 Pin8 */
#define GPIO_Pin_9 ((uint16_t)0x0200) /*!< 选择 Pin9 */
#define GPIO_Pin_10 ((uint16_t)0x0400) /*!< 选择 Pin10 */
#define GPIO_Pin_11 ((uint16_t)0x0800) /*!< 选择 Pin11 */
#define GPIO_Pin_12 ((uint16_t)0x1000) /*!< 选择 Pin12 */
#define GPIO_Pin_13 ((uint16_t)0x2000) /*!< 选择 Pin13 */
#define GPIO_Pin_14 ((uint16_t)0x4000) /*!< 选择 Pin14 */
#define GPIO_Pin_15 ((uint16_t)0x8000) /*!< 选择 Pin15 */
#define GPIO_Pin_All ((uint16_t)0xFFFF) /*!< 选择全部引脚 */


//GPIO 输出速率枚举定义
typedef enum
{ 
  GPIO_Speed_10MHz = 1,         // 10MHZ        (01)b
  GPIO_Speed_2MHz,              // 2MHZ         (10)b
  GPIO_Speed_50MHz              // 50MHZ        (11)b
}GPIOSpeed_TypeDef;

//GPIO 工作模式枚举定义
typedef enum
{ GPIO_Mode_AIN = 0x0,           // 模拟输入     (0000 0000)b
  GPIO_Mode_IN_FLOATING = 0x04,  // 浮空输入     (0000 0100)b
  GPIO_Mode_IPD = 0x28,          // 下拉输入     (0010 1000)b
  GPIO_Mode_IPU = 0x48,          // 上拉输入     (0100 1000)b
  
  GPIO_Mode_Out_OD = 0x14,       // 开漏输出     (0001 0100)b
  GPIO_Mode_Out_PP = 0x10,       // 推挽输出     (0001 0000)b
  GPIO_Mode_AF_OD = 0x1C,        // 复用开漏输出 (0001 1100)b
  GPIO_Mode_AF_PP = 0x18         // 复用推挽输出 (0001 1000)b
}GPIOMode_TypeDef;


//定义 GPIO 初始化结构体
typedef struct
{
	uint16_t GPIO_Pin; /*!< 选择要配置的 GPIO 引脚 */

	uint16_t GPIO_Speed; /*!< 选择 GPIO 引脚的速率 */
 
	uint16_t GPIO_Mode; /*!< 选择 GPIO 引脚的工作模式 */
} GPIO_InitTypeDef;




void GPIO_SetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);
void GPIO_ResetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);
void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);
#endif /* __STM32F10X_GPIO_H*/


