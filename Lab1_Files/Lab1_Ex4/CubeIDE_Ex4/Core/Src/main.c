#include "main.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void display7SEG(int num);

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();

  while (1)
  {
    for (int num = 0; num <= 9; num++)
    {
      display7SEG(num);
      HAL_Delay(1000);
    }
  }
}


/* LE TIEN PHAT ITITIU21273 */

void display7SEG(int num)
{
  HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_E_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_SET);

  switch (num)
  {
  case 0:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_E_PIN_Pin | SEG_F_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 1:
    HAL_GPIO_WritePin(GPIOB, SEG_B_PIN_Pin | SEG_C_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 2:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_D_PIN_Pin | SEG_E_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 3:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 4:
    HAL_GPIO_WritePin(GPIOB, SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 5:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 6:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_E_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 7:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 8:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_E_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);
    break;
  case 9:
    HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);
    break;
  default:
    break;
  }
}

void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  // Enable GPIOB clock
  __HAL_RCC_GPIOB_CLK_ENABLE();

  // Reset all pins to ensure they are in a known state
  HAL_GPIO_WritePin(GPIOB, SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_E_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin, GPIO_PIN_RESET);

  // Configure pins for segments A, B, C, D, E, F, and G
  GPIO_InitStruct.Pin = SEG_A_PIN_Pin | SEG_B_PIN_Pin | SEG_C_PIN_Pin | SEG_D_PIN_Pin | SEG_E_PIN_Pin | SEG_F_PIN_Pin | SEG_G_PIN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; // Output push-pull mode
  GPIO_InitStruct.Pull = GPIO_NOPULL; // No pull-up/pull-down
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW; // Low-speed output
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}


void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line)
{
}
#endif /* USE_FULL_ASSERT */
