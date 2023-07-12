#
# Makefile for csmkdll test
#

BUILD = ../build

CC = gcc
CFLAGS = -g -Wall -I$(BUILD)/include
LDFLAGS = -g -Wall -L$(BUILD)/lib
LDLIBS = -lcsmkdll

all:	test

install:	all
		mkdir -p $(BUILD)/bin
		cp test $(BUILD)/bin

testbip:	test.o 
		$(CC) $(LDFLAGS) -o test test.o $(LDLIBS)

testbip.o:	test.c
		$(CC) $(CFLAGS) -o test.o -c test.c

clean:
		rm -f *~ test.o test
