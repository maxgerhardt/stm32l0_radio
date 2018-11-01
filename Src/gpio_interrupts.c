#include "stm32l0xx.h"
#include <radio_buttons.h>

/* called in an interrupt context */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {

	//Get the radio button associated to the pin that just had an interrrupt
	RadioButton btn = GPIO_To_Button((int) GPIO_Pin);

	//Tell the main thread that this is the next button to process

}
