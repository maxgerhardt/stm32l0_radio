#include <radio_buttons.h>
#include <stm32l0xx_hal.h>

RadioButton GPIO_To_Button(int gpio) {
	switch (gpio) {
	case GPIO_PIN_14:
		return RADIO_BTN_SEEK_L;
	case GPIO_PIN_15:
		return RADIO_BTN_SEEK_R;
	case GPIO_PIN_0:
		return RADIO_BTN_VOL_UP;
	case GPIO_PIN_2:
		return RADIO_BTN_VOL_DOWN;
	case GPIO_PIN_9:
		return RADIO_BTN_MUTE;
	default:
		return RADIO_BTN_UNKNOWN;
	}
}

const char* RadioButton_To_Str(RadioButton btn) {
	static const char* buttonNames[] = { "RADIO_BTN_VOL_UP", "RADIO_BTN_VOL_DOWN",
			"RADIO_BTN_SEEK_L", "RADIO_BTN_SEEK_R", "RADIO_BTN_MUTE",
			"RADIO_BTN_UNKNOWN" };
	return buttonNames[(int) btn];
}
