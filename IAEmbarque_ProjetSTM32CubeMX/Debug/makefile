################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include X-CUBE-AI/App/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
IAEmbarque_ProjetSTM32CubeMX.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
IAEmbarque_ProjetSTM32CubeMX.list \

OBJCOPY_BIN += \
IAEmbarque_ProjetSTM32CubeMX.bin \


# All Target
all: IAEmbarque_ProjetSTM32CubeMX.elf secondary-outputs

# Tool invocations
IAEmbarque_ProjetSTM32CubeMX.elf: $(OBJS) $(USER_OBJS) C:\Users\berar\Desktop\IA-Embarquee\IAEmbarque_ProjetSTM32CubeMX\STM32F767ZITX_FLASH.ld
	arm-none-eabi-gcc -o "IAEmbarque_ProjetSTM32CubeMX.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\berar\Desktop\IA-Embarquee\IAEmbarque_ProjetSTM32CubeMX\STM32F767ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="IAEmbarque_ProjetSTM32CubeMX.map" -Wl,--gc-sections -static -L../Middlewares/ST/AI/Lib --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -u _printf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

IAEmbarque_ProjetSTM32CubeMX.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "IAEmbarque_ProjetSTM32CubeMX.list"
	@echo 'Finished building: $@'
	@echo ' '

IAEmbarque_ProjetSTM32CubeMX.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "IAEmbarque_ProjetSTM32CubeMX.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
