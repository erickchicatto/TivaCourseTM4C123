################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Driver_Source/%.obj: ../Driver_Source/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"C:/ti/ccs1110/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="C:/Users/CXC/workspace_v11/TM4C123_helloworld" --include_path="C:/ti/ccs1110/ccs/ccs_base/arm/include/CMSIS" --include_path="C:/Users/CXC/workspace_v11/TM4C123_helloworld/Driver_Header" --include_path="C:/Users/CXC/workspace_v11/TM4C123_helloworld/Driver_Source" --include_path="C:/ti/ccs1110/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GE6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Driver_Source/$(basename $(<F)).d_raw" --obj_directory="Driver_Source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


