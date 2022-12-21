################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Kinematics.cpp \
../MetBasics.cpp \
../PhysMet.cpp \
../UnitConversions.cpp 

CPP_DEPS += \
./Kinematics.d \
./MetBasics.d \
./PhysMet.d \
./UnitConversions.d 

OBJS += \
./Kinematics.o \
./MetBasics.o \
./PhysMet.o \
./UnitConversions.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Kinematics.d ./Kinematics.o ./MetBasics.d ./MetBasics.o ./PhysMet.d ./PhysMet.o ./UnitConversions.d ./UnitConversions.o

.PHONY: clean--2e-

