################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
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
Chelonii.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Chelonii.list \

OBJCOPY_BIN += \
Chelonii.bin \


# All Target
all: Chelonii.elf secondary-outputs

# Tool invocations
Chelonii.elf: $(OBJS) $(USER_OBJS) D:\Users\Iztatik\Google\ Drive\Proyectos\1.\ Robótica\Chelonii\NUCLEO-F401RE\STM32F401RETX_FLASH.ld
	arm-none-eabi-gcc -o "Chelonii.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\Users\Iztatik\Google Drive\Proyectos\1. Robótica\Chelonii\NUCLEO-F401RE\STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Chelonii.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Chelonii.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Chelonii.list"
	@echo 'Finished building: $@'
	@echo ' '

Chelonii.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Chelonii.bin"
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
