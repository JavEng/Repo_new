#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = DHOST

# Architectures Specific Flags
LINKER_FILE = msp432p401r.lds
CPU = cortex-m4
ARCH = thumb
SPECS = nano.specs
TARGET = c1m2

# Compiler Flags and Defines
ifeq ($(PLATFORM),HOST)
		CC = arm-none-eabi-gcc
		LD = arm-none-eabi-ld
		LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
		CFLAGS = -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -Wall -std=c99
		CPPFLAGs = -I

		# etc
	else
		CC = arm-none-eabi-gcc
		LD = arm-none-eabi-ld
		LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
		CFLAGS = -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -Wall -std=c99
		CPPFLAGs = -I 
endif

OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) -c $< $(CFLAGS) -o $@

%.i : %.c
	$(CC) -c $< $(CFLAGS) -E $@

%.asm : %.c
	$(CC) -c $< $(CFLAGS) -M $@

.PHONY: build
build: all

.PHONY: compile-all
all: $(TARGET).out

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET).out $(TARGET).map $(TARGET).asm $(TARGET).i


