#include "CC-SELECTION-03.h"
#include "CC-SELECTION-02.h"


void selectionSort(int *Integers)
{
    int comparations = 0, copies = 0;
    printArray(Integers, length);
    _selectionSort(Integers, &comparations, &copies); // will be added the counting of the comparison and copies
    printArray(Integers, length);
}
