#include <stm32l0xx_hal.h>

extern ADC_HandleTypeDef hadc;

float MeasureBattery() {
	//see reference manual page 301

	__HAL_RCC_ADC1_CLK_ENABLE();

	//get factory calibration value
	uint32_t vrefint_cal = HAL_ADCEx_Calibration_GetValue(&hadc, ADC_SINGLE_ENDED);

	//start measurement
	if(HAL_ADC_Start(&hadc) != HAL_OK) {
		Error_Handler();
	}
	//wait at max 500 ticks for completion
	HAL_ADC_PollForConversion(&hadc, 500);

	//get value
	uint32_t val = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Stop(&hadc);
	__HAL_RCC_ADC1_CLK_DISABLE();

	//value is a 12 bit ADC value. internal voltage reference is 3V.
	//use the formula from page 301
	return 3.0f * vrefint_cal / (float) val;
}
