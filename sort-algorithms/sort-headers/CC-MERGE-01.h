#include "CC-MERGE-02.h"

void mergeSort(int *Integers, int begginInterval, int endInterval)
{
    int comparations = 0, copies = 0;
    _mergeSort(Integers, begginInterval, endInterval, &comparations, &copies);

    printf("comparações: %d\n", comparations);
    printf("cópias: %d\n", copies);
    printArray(Integers);
}
