//	Header file for stack ADT.
#define ISTRING "1 - to mergesort algorithms\n2 - to selectionSort algorithms\n3 - to countingSort algorithm\n"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/*	ADT Prototype Declarations */
void countingSort(long int *Integers);
void mergeSort(long int *Integers);
void selectionSort(long int *Integers);

#include "../global-headers/GLOBAL.h" /* main global library */
#include "CC-COUNT-01.h"              /* countingSort algorithm */
#include "CC-MERGE-01.h"              /* mergeSort algorithm */
#include "CC-SELECTION-01.h"          /* selectionSort algorithm */
