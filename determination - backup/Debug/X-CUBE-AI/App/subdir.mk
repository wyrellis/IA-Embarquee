################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../X-CUBE-AI/App/aiPbMgr.c \
../X-CUBE-AI/App/aiTestUtility.c \
../X-CUBE-AI/App/aiValidation.c \
../X-CUBE-AI/App/app_x-cube-ai.c \
../X-CUBE-AI/App/network.c \
../X-CUBE-AI/App/network_1582985458502.c \
../X-CUBE-AI/App/network_1582985458502_data.c \
../X-CUBE-AI/App/network_data.c \
../X-CUBE-AI/App/pb_common.c \
../X-CUBE-AI/App/pb_decode.c \
../X-CUBE-AI/App/pb_encode.c \
../X-CUBE-AI/App/stm32msg.pb.c 

OBJS += \
./X-CUBE-AI/App/aiPbMgr.o \
./X-CUBE-AI/App/aiTestUtility.o \
./X-CUBE-AI/App/aiValidation.o \
./X-CUBE-AI/App/app_x-cube-ai.o \
./X-CUBE-AI/App/network.o \
./X-CUBE-AI/App/network_1582985458502.o \
./X-CUBE-AI/App/network_1582985458502_data.o \
./X-CUBE-AI/App/network_data.o \
./X-CUBE-AI/App/pb_common.o \
./X-CUBE-AI/App/pb_decode.o \
./X-CUBE-AI/App/pb_encode.o \
./X-CUBE-AI/App/stm32msg.pb.o 

C_DEPS += \
./X-CUBE-AI/App/aiPbMgr.d \
./X-CUBE-AI/App/aiTestUtility.d \
./X-CUBE-AI/App/aiValidation.d \
./X-CUBE-AI/App/app_x-cube-ai.d \
./X-CUBE-AI/App/network.d \
./X-CUBE-AI/App/network_1582985458502.d \
./X-CUBE-AI/App/network_1582985458502_data.d \
./X-CUBE-AI/App/network_data.d \
./X-CUBE-AI/App/pb_common.d \
./X-CUBE-AI/App/pb_decode.d \
./X-CUBE-AI/App/pb_encode.d \
./X-CUBE-AI/App/stm32msg.pb.d 


# Each subdirectory must supply rules for building sources it contributes
X-CUBE-AI/App/aiPbMgr.o: ../X-CUBE-AI/App/aiPbMgr.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/aiPbMgr.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/aiTestUtility.o: ../X-CUBE-AI/App/aiTestUtility.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/aiTestUtility.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/aiValidation.o: ../X-CUBE-AI/App/aiValidation.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/aiValidation.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/app_x-cube-ai.o: ../X-CUBE-AI/App/app_x-cube-ai.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/app_x-cube-ai.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/network.o: ../X-CUBE-AI/App/network.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/network.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/network_1582985458502.o: ../X-CUBE-AI/App/network_1582985458502.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/network_1582985458502.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/network_1582985458502_data.o: ../X-CUBE-AI/App/network_1582985458502_data.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/network_1582985458502_data.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/network_data.o: ../X-CUBE-AI/App/network_data.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/network_data.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/pb_common.o: ../X-CUBE-AI/App/pb_common.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/pb_common.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/pb_decode.o: ../X-CUBE-AI/App/pb_decode.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/pb_decode.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/pb_encode.o: ../X-CUBE-AI/App/pb_encode.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/pb_encode.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
X-CUBE-AI/App/stm32msg.pb.o: ../X-CUBE-AI/App/stm32msg.pb.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F767xx -DDEBUG -c -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../X-CUBE-AI/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../X-CUBE-AI/App -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"X-CUBE-AI/App/stm32msg.pb.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

