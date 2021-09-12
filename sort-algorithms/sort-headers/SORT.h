//	Header file for stack ADT.
#define length 10
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/*	ADT Prototype Declarations */
void printArray(int *Integers, int lengthReceveid);
void countingSort(int *Integers);
void mergeSort(int *Integers);
void selectionSort(int *Integers);

#include "CC-PRINT-01.h" /* print int Array */
#include "CC-COUNT-01.h" /* countingSort algorithm */
#include "CC-MERGE-01.h" /* mergeSort algorithm */
#include "CC-SELECTION-01.h" /* selectionSort algorithm */
