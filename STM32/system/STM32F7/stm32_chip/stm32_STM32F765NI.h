//Autogenerated file
//MCU name: STM32F765NI
//MCU  xml: STM32F765N(G-I)Hx.xml
//GPIO remap/alternate function xml: GPIO-STM32F76x_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type port_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_11},
  { GPIOA, GPIO_PIN_12},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_2 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOB, GPIO_PIN_8 },
  { GPIOB, GPIO_PIN_9 },
  { GPIOB, GPIO_PIN_10},
  { GPIOB, GPIO_PIN_11},
  { GPIOB, GPIO_PIN_12},
  { GPIOB, GPIO_PIN_13},
  { GPIOB, GPIO_PIN_14},
  { GPIOB, GPIO_PIN_15},
  { GPIOC, GPIO_PIN_0 },
  { GPIOC, GPIO_PIN_1 },
  { GPIOC, GPIO_PIN_2 },
  { GPIOC, GPIO_PIN_3 },
  { GPIOC, GPIO_PIN_4 },
  { GPIOC, GPIO_PIN_5 },
  { GPIOC, GPIO_PIN_6 },
  { GPIOC, GPIO_PIN_7 },
  { GPIOC, GPIO_PIN_8 },
  { GPIOC, GPIO_PIN_9 },
  { GPIOC, GPIO_PIN_10},
  { GPIOC, GPIO_PIN_11},
  { GPIOC, GPIO_PIN_12},
  { GPIOC, GPIO_PIN_13},
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
  { GPIOD, GPIO_PIN_0 },
  { GPIOD, GPIO_PIN_1 },
  { GPIOD, GPIO_PIN_2 },
  { GPIOD, GPIO_PIN_3 },
  { GPIOD, GPIO_PIN_4 },
  { GPIOD, GPIO_PIN_5 },
  { GPIOD, GPIO_PIN_6 },
  { GPIOD, GPIO_PIN_7 },
  { GPIOD, GPIO_PIN_8 },
  { GPIOD, GPIO_PIN_9 },
  { GPIOD, GPIO_PIN_10},
  { GPIOD, GPIO_PIN_11},
  { GPIOD, GPIO_PIN_12},
  { GPIOD, GPIO_PIN_13},
  { GPIOD, GPIO_PIN_14},
  { GPIOD, GPIO_PIN_15},
  { GPIOE, GPIO_PIN_0 },
  { GPIOE, GPIO_PIN_1 },
  { GPIOE, GPIO_PIN_2 },
  { GPIOE, GPIO_PIN_3 },
  { GPIOE, GPIO_PIN_4 },
  { GPIOE, GPIO_PIN_5 },
  { GPIOE, GPIO_PIN_6 },
  { GPIOE, GPIO_PIN_7 },
  { GPIOE, GPIO_PIN_8 },
  { GPIOE, GPIO_PIN_9 },
  { GPIOE, GPIO_PIN_10},
  { GPIOE, GPIO_PIN_11},
  { GPIOE, GPIO_PIN_12},
  { GPIOE, GPIO_PIN_13},
  { GPIOE, GPIO_PIN_14},
  { GPIOE, GPIO_PIN_15},
  { GPIOF, GPIO_PIN_0 },
  { GPIOF, GPIO_PIN_1 },
  { GPIOF, GPIO_PIN_2 },
  { GPIOF, GPIO_PIN_3 },
  { GPIOF, GPIO_PIN_4 },
  { GPIOF, GPIO_PIN_5 },
  { GPIOF, GPIO_PIN_6 },
  { GPIOF, GPIO_PIN_7 },
  { GPIOF, GPIO_PIN_8 },
  { GPIOF, GPIO_PIN_9 },
  { GPIOF, GPIO_PIN_10},
  { GPIOF, GPIO_PIN_11},
  { GPIOF, GPIO_PIN_12},
  { GPIOF, GPIO_PIN_13},
  { GPIOF, GPIO_PIN_14},
  { GPIOF, GPIO_PIN_15},
  { GPIOG, GPIO_PIN_0 },
  { GPIOG, GPIO_PIN_1 },
  { GPIOG, GPIO_PIN_2 },
  { GPIOG, GPIO_PIN_3 },
  { GPIOG, GPIO_PIN_4 },
  { GPIOG, GPIO_PIN_5 },
  { GPIOG, GPIO_PIN_6 },
  { GPIOG, GPIO_PIN_7 },
  { GPIOG, GPIO_PIN_8 },
  { GPIOG, GPIO_PIN_9 },
  { GPIOG, GPIO_PIN_10},
  { GPIOG, GPIO_PIN_11},
  { GPIOG, GPIO_PIN_12},
  { GPIOG, GPIO_PIN_13},
  { GPIOG, GPIO_PIN_14},
  { GPIOG, GPIO_PIN_15},
  { GPIOH, GPIO_PIN_0 },
  { GPIOH, GPIO_PIN_1 },
  { GPIOH, GPIO_PIN_2 },
  { GPIOH, GPIO_PIN_3 },
  { GPIOH, GPIO_PIN_4 },
  { GPIOH, GPIO_PIN_5 },
  { GPIOH, GPIO_PIN_6 },
  { GPIOH, GPIO_PIN_7 },
  { GPIOH, GPIO_PIN_8 },
  { GPIOH, GPIO_PIN_9 },
  { GPIOH, GPIO_PIN_10},
  { GPIOH, GPIO_PIN_11},
  { GPIOH, GPIO_PIN_12},
  { GPIOH, GPIO_PIN_13},
  { GPIOH, GPIO_PIN_14},
  { GPIOH, GPIO_PIN_15},
  { GPIOI, GPIO_PIN_0 },
  { GPIOI, GPIO_PIN_1 },
  { GPIOI, GPIO_PIN_2 },
  { GPIOI, GPIO_PIN_3 },
  { GPIOI, GPIO_PIN_4 },
  { GPIOI, GPIO_PIN_5 },
  { GPIOI, GPIO_PIN_6 },
  { GPIOI, GPIO_PIN_7 },
  { GPIOI, GPIO_PIN_8 },
  { GPIOI, GPIO_PIN_9 },
  { GPIOI, GPIO_PIN_10},
  { GPIOI, GPIO_PIN_11},
  { GPIOI, GPIO_PIN_12},
  { GPIOI, GPIO_PIN_13},
  { GPIOI, GPIO_PIN_14},
  { GPIOI, GPIO_PIN_15},
  { GPIOJ, GPIO_PIN_0 },
  { GPIOJ, GPIO_PIN_1 },
  { GPIOJ, GPIO_PIN_2 },
  { GPIOJ, GPIO_PIN_3 },
  { GPIOJ, GPIO_PIN_4 },
  { GPIOJ, GPIO_PIN_5 },
  { GPIOJ, GPIO_PIN_6 },
  { GPIOJ, GPIO_PIN_7 },
  { GPIOJ, GPIO_PIN_8 },
  { GPIOJ, GPIO_PIN_9 },
  { GPIOJ, GPIO_PIN_10},
  { GPIOJ, GPIO_PIN_11},
  { GPIOJ, GPIO_PIN_12},
  { GPIOJ, GPIO_PIN_13},
  { GPIOJ, GPIO_PIN_14},
  { GPIOJ, GPIO_PIN_15},
  { GPIOK, GPIO_PIN_0 },
  { GPIOK, GPIO_PIN_1 },
  { GPIOK, GPIO_PIN_2 },
  { GPIOK, GPIO_PIN_3 },
  { GPIOK, GPIO_PIN_4 },
  { GPIOK, GPIO_PIN_5 },
  { GPIOK, GPIO_PIN_6 },
  { GPIOK, GPIO_PIN_7 },
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB2 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB8 ,
   PB9 ,
   PB10,
   PB11,
   PB12,
   PB13,
   PB14,
   PB15,
   PC0 ,
   PC1 ,
   PC2 ,
   PC3 ,
   PC4 ,
   PC5 ,
   PC6 ,
   PC7 ,
   PC8 ,
   PC9 ,
   PC10,
   PC11,
   PC12,
   PC13,
   PC14,
   PC15,
   PD0 ,
   PD1 ,
   PD2 ,
   PD3 ,
   PD4 ,
   PD5 ,
   PD6 ,
   PD7 ,
   PD8 ,
   PD9 ,
   PD10,
   PD11,
   PD12,
   PD13,
   PD14,
   PD15,
   PE0 ,
   PE1 ,
   PE2 ,
   PE3 ,
   PE4 ,
   PE5 ,
   PE6 ,
   PE7 ,
   PE8 ,
   PE9 ,
   PE10,
   PE11,
   PE12,
   PE13,
   PE14,
   PE15,
   PF0 ,
   PF1 ,
   PF2 ,
   PF3 ,
   PF4 ,
   PF5 ,
   PF6 ,
   PF7 ,
   PF8 ,
   PF9 ,
   PF10,
   PF11,
   PF12,
   PF13,
   PF14,
   PF15,
   PG0 ,
   PG1 ,
   PG2 ,
   PG3 ,
   PG4 ,
   PG5 ,
   PG6 ,
   PG7 ,
   PG8 ,
   PG9 ,
   PG10,
   PG11,
   PG12,
   PG13,
   PG14,
   PG15,
   PH0 ,
   PH1 ,
   PH2 ,
   PH3 ,
   PH4 ,
   PH5 ,
   PH6 ,
   PH7 ,
   PH8 ,
   PH9 ,
   PH10,
   PH11,
   PH12,
   PH13,
   PH14,
   PH15,
   PI0 ,
   PI1 ,
   PI2 ,
   PI3 ,
   PI4 ,
   PI5 ,
   PI6 ,
   PI7 ,
   PI8 ,
   PI9 ,
   PI10,
   PI11,
   PI12,
   PI13,
   PI14,
   PI15,
   PJ0 ,
   PJ1 ,
   PJ2 ,
   PJ3 ,
   PJ4 ,
   PJ5 ,
   PJ6 ,
   PJ7 ,
   PJ8 ,
   PJ9 ,
   PJ10,
   PJ11,
   PJ12,
   PJ13,
   PJ14,
   PJ15,
   PK0 ,
   PK1 ,
   PK2 ,
   PK3 ,
   PK4 ,
   PK5 ,
   PK6 ,
   PK7 ,
NUM_PINS,
};
*/

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOF, GPIO_PIN_1  , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOH, GPIO_PIN_4  , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOA, GPIO_PIN_8  , GPIO_AF4_I2C3  }, 
    { I2C3  , GPIOH, GPIO_PIN_7  , GPIO_AF4_I2C3  }, 
//I2C4
    { I2C4  , GPIOB, GPIO_PIN_6  , GPIO_AF11_I2C4 }, 
    { I2C4  , GPIOB, GPIO_PIN_8  , GPIO_AF1_I2C4  }, 
    { I2C4  , GPIOD, GPIO_PIN_12 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOF, GPIO_PIN_14 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOH, GPIO_PIN_11 , GPIO_AF4_I2C4  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOH, GPIO_PIN_5  , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOC, GPIO_PIN_9  , GPIO_AF4_I2C3  }, 
    { I2C3  , GPIOH, GPIO_PIN_8  , GPIO_AF4_I2C3  }, 
//I2C4
    { I2C4  , GPIOB, GPIO_PIN_7  , GPIO_AF11_I2C4 }, 
    { I2C4  , GPIOB, GPIO_PIN_9  , GPIO_AF1_I2C4  }, 
    { I2C4  , GPIOD, GPIO_PIN_13 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOF, GPIO_PIN_15 , GPIO_AF4_I2C4  }, 
    { I2C4  , GPIOH, GPIO_PIN_12 , GPIO_AF4_I2C4  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOG, GPIO_PIN_9  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOI, GPIO_PIN_2  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_5  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI4  }, 
//SPI5
    { SPI5  , GPIOF, GPIO_PIN_8  , GPIO_AF5_SPI5  }, 
    { SPI5  , GPIOH, GPIO_PIN_7  , GPIO_AF5_SPI5  }, 
//SPI6
    { SPI6  , GPIOA, GPIO_PIN_6  , GPIO_AF8_SPI6  }, 
    { SPI6  , GPIOB, GPIO_PIN_4  , GPIO_AF8_SPI6  }, 
    { SPI6  , GPIOG, GPIO_PIN_12 , GPIO_AF5_SPI6  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOD, GPIO_PIN_7  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_1  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOI, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_2  , GPIO_AF7_SPI3  }, 
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOD, GPIO_PIN_6  , GPIO_AF5_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_6  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI4  }, 
//SPI5
    { SPI5  , GPIOF, GPIO_PIN_9  , GPIO_AF5_SPI5  }, 
    { SPI5  , GPIOF, GPIO_PIN_11 , GPIO_AF5_SPI5  }, 
//SPI6
    { SPI6  , GPIOA, GPIO_PIN_7  , GPIO_AF8_SPI6  }, 
    { SPI6  , GPIOB, GPIO_PIN_5  , GPIO_AF8_SPI6  }, 
    { SPI6  , GPIOG, GPIO_PIN_14 , GPIO_AF5_SPI6  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOG, GPIO_PIN_11 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOA, GPIO_PIN_9  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOA, GPIO_PIN_12 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOI, GPIO_PIN_1  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_2  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_12 , GPIO_AF5_SPI4  }, 
//SPI5
    { SPI5  , GPIOF, GPIO_PIN_7  , GPIO_AF5_SPI5  }, 
    { SPI5  , GPIOH, GPIO_PIN_6  , GPIO_AF5_SPI5  }, 
//SPI6
    { SPI6  , GPIOA, GPIO_PIN_5  , GPIO_AF8_SPI6  }, 
    { SPI6  , GPIOB, GPIO_PIN_3  , GPIO_AF8_SPI6  }, 
    { SPI6  , GPIOG, GPIO_PIN_13 , GPIO_AF5_SPI6  }, 
}; 

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_15 , GPIO_AF4_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3}, 
//USART6
    { USART6, GPIOC, GPIO_PIN_7  , GPIO_AF8_USART6}, 
    { USART6, GPIOG, GPIO_PIN_9  , GPIO_AF8_USART6}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_14 , GPIO_AF4_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3}, 
//USART6
    { USART6, GPIOC, GPIO_PIN_6  , GPIO_AF8_USART6}, 
    { USART6, GPIOG, GPIO_PIN_14 , GPIO_AF8_USART6}, 
}; 

const stm32_chip_adc1_channel_type chip_adc1_channel[] = {
    { GPIOA, GPIO_PIN_0  , ADC_CHANNEL_0  }, 
    { GPIOA, GPIO_PIN_1  , ADC_CHANNEL_1  }, 
    { GPIOA, GPIO_PIN_2  , ADC_CHANNEL_2  }, 
    { GPIOA, GPIO_PIN_3  , ADC_CHANNEL_3  }, 
    { GPIOA, GPIO_PIN_4  , ADC_CHANNEL_4  }, 
    { GPIOA, GPIO_PIN_5  , ADC_CHANNEL_5  }, 
    { GPIOA, GPIO_PIN_6  , ADC_CHANNEL_6  }, 
    { GPIOA, GPIO_PIN_7  , ADC_CHANNEL_7  }, 
    { GPIOB, GPIO_PIN_0  , ADC_CHANNEL_8  }, 
    { GPIOB, GPIO_PIN_1  , ADC_CHANNEL_9  }, 
    { GPIOC, GPIO_PIN_0  , ADC_CHANNEL_10 }, 
    { GPIOC, GPIO_PIN_1  , ADC_CHANNEL_11 }, 
    { GPIOC, GPIO_PIN_2  , ADC_CHANNEL_12 }, 
    { GPIOC, GPIO_PIN_3  , ADC_CHANNEL_13 }, 
    { GPIOC, GPIO_PIN_4  , ADC_CHANNEL_14 }, 
    { GPIOC, GPIO_PIN_5  , ADC_CHANNEL_15 }, 
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {I2C2  , HAL_RCC_GetPCLK1Freq },  
    {I2C3  , HAL_RCC_GetPCLK1Freq },  
    {I2C4  , HAL_RCC_GetPCLK1Freq },  
    {SPI2  , HAL_RCC_GetPCLK1Freq },  
    {SPI3  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  
    {USART3, HAL_RCC_GetPCLK1Freq },  

    {SPI1  , HAL_RCC_GetPCLK2Freq },  
    {SPI4  , HAL_RCC_GetPCLK2Freq },  
    {SPI5  , HAL_RCC_GetPCLK2Freq },  
    {SPI6  , HAL_RCC_GetPCLK2Freq },  
    {USART1, HAL_RCC_GetPCLK2Freq },  
    {USART6, HAL_RCC_GetPCLK2Freq },  
};

