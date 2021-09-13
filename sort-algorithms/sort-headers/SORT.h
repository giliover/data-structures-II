//	Header file for stack ADT.
#define ISTRING "1 - to mergesort algorithms\n2 - to selectionSort algorithms\n3 - to countingSort algorithm\n"
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

#include "../global-headers/GLOBAL.h" /* main global library */
#include "CC-COUNT-01.h"              /* countingSort algorithm */
#include "CC-MERGE-01.h"              /* mergeSort algorithm */
#include "CC-SELECTION-01.h"          /* selectionSort algorithm */
