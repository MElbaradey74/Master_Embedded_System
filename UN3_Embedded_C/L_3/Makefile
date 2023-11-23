#@copyright : Mohamed Elbaradey
CC= arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -mthumb -gdwarf-2
INCS= -I.
LIBS= 
SRC= $(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS= $(wildcard *.s)
ASOBJ=$(AS:.s=.o)
Project_Name=lab2

all: $(Project_Name).bin
	@echo "======Build is Done======"

%.o: %.s
	$(CC)as.exe $(INCS) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -std=c99 -c $(INCS) $(CFLAGS) $< -o $@

$(Project_Name).elf:  $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.bin *.elf *.o
