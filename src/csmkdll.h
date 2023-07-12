/**
  ******************************************************************************
  * @file    	csmkdll.h
  * @author		Claude Stephane M. Kouame
  * @version 	V1.0
  * @date		Oct 10, 2021
  * @brief
  * feel free to use it as you wish ;-)
  ******************************************************************************
*/

#ifndef CSMKDLL_H
#define CSMKDLL_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "list_element.h"

typedef struct doublelinkedlist
{
    int val;
    struct doublelinkedlist *prev;
    struct doublelinkedlist *next;
} DoubleLinkedList;


DoubleLinkedList *dll_init(int);
int dll_size(DoubleLinkedList*);
int dll_get(DoubleLinkedList*, int);
void dll_append(DoubleLinkedList**, int);
void dll_insert(DoubleLinkedList**, int, int);
void dll_remove(DoubleLinkedList**, int);
void dll_clear(DoubleLinkedList**);
void dll_print(DoubleLinkedList**);

#endif /* CSMKDLL_H */
