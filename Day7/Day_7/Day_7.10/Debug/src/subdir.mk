################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArithmeticException.cpp \
../src/Calculator.cpp \
../src/Main.cpp 

CPP_DEPS += \
./src/ArithmeticException.d \
./src/Calculator.d \
./src/Main.d 

OBJS += \
./src/ArithmeticException.o \
./src/Calculator.o \
./src/Main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ArithmeticException.d ./src/ArithmeticException.o ./src/Calculator.d ./src/Calculator.o ./src/Main.d ./src/Main.o

.PHONY: clean-src

