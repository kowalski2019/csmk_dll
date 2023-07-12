#
# Makefile for csmk double linked list library
#

BUILD = ../build

CC = gcc
CFLAGS = -g -Wall

all:		list_element.h csmkdll.h libcsmkdll.a

install:	all
		mkdir -p $(BUILD)/include
		cp list_element.h $(BUILD)/include
		cp csmkdll.h $(BUILD)/include
		mkdir -p $(BUILD)/lib
		cp libcsmkdll.a $(BUILD)/lib

libcsmkdll.a:	csmkdll.o
		ar -crs libcsmkdll.a csmkdll.o

csmkdll.o:	csmkdll.c csmkdll.h list_element.h
		$(CC) $(CFLAGS) -o csmkdll.o -c csmkdll.c

clean:
		rm -f *~ csmkdll.o libcsmkdll.a
