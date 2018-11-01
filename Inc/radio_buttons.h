/*
 * radio_buttons.h
 *
 *  Created on: 31.10.2018
 *      Author: Maxi
 */

#ifndef RADIO_BUTTONS_H_
#define RADIO_BUTTONS_H_

/**
 * Describes all possible pressed buttons
 */
typedef enum {
	RADIO_BTN_VOL_UP = 0,	/**<  volume up */
	RADIO_BTN_VOL_DOWN,		/**<  volume down */
	RADIO_BTN_SEEK_L,		/**<  seek left */
	RADIO_BTN_SEEK_R,		/**<  seek right */
	RADIO_BTN_MUTE,			/**<  mute volume */
	RADIO_BTN_UNKNOWN		/** < unknown button pressed */
} RadioButton;

/**
 * Converts a GPIO button number into the semantic radio button name
 * @param gpio GPIO button number
 */
RadioButton GPIO_To_Button(int gpio);

const char* RadioButton_To_Str(RadioButton btn);

#endif /* RADIO_BUTTONS_H_ */
