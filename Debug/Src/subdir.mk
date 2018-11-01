################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/battery_measure.c \
../Src/gpio_interrupts.c \
../Src/main.c \
../Src/radio_buttons.c \
../Src/stm32l0xx_hal_msp.c \
../Src/stm32l0xx_it.c \
../Src/system_stm32l0xx.c 

OBJS += \
./Src/battery_measure.o \
./Src/gpio_interrupts.o \
./Src/main.o \
./Src/radio_buttons.o \
./Src/stm32l0xx_hal_msp.o \
./Src/stm32l0xx_it.o \
./Src/system_stm32l0xx.o 

C_DEPS += \
./Src/battery_measure.d \
./Src/gpio_interrupts.d \
./Src/main.d \
./Src/radio_buttons.d \
./Src/stm32l0xx_hal_msp.d \
./Src/stm32l0xx_it.d \
./Src/system_stm32l0xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -mfloat-abi=soft -std=c11 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32L011xx -I"C:/Users/Maxi/Desktop/Programming_stuff/stm32_radio/Inc" -I"C:/Users/Maxi/Desktop/Programming_stuff/stm32_radio/Drivers/STM32L0xx_HAL_Driver/Inc" -I"C:/Users/Maxi/Desktop/Programming_stuff/stm32_radio/Drivers/STM32L0xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Maxi/Desktop/Programming_stuff/stm32_radio/Drivers/CMSIS/Device/ST/STM32L0xx/Include" -I"C:/Users/Maxi/Desktop/Programming_stuff/stm32_radio/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -flto -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


