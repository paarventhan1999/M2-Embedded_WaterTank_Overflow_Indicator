PROJ_NAME = Water_Tank

BUILD_DIR = Build

# All Source code files
SRC = main.c\
src/led.c\
src/lcd.c\
src/display.c

# All header file paths
INC = -I inc
				
# AVR Compiler
	  CC = avr-gcc
# N.elf to .hex
	  AVR_OBJ_CPY = avr-objcopy 

# Command to make to consider these names as targets and not as file names in folder
.PHONY:all analysis clean doc

all:$(BUILD_DIR)
# Compile the code and generate the ELF filer
	$(CC) -g -Wall -Os -mmcu=atmega328  $(INC) $(SRC) -o $(BUILD_DIR)/$(PROJ_NAME).elf

$(BUILD_DIR):
# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
# Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
# Build the code code documentation using Doxygen command line utility
	make -C documentation

clean:
# Remove all the build files and generated document files
	rm -rf $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean
