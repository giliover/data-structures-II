#include "CC-MERGE-02.h"

void mergeSort(long int *Integers)
{
    long int beggininterval = 0;
    long int endinterval = length - 1;

    long int comparations = 0, copies = 0;
    // printArray(Integers, length);
    _mergeSort(Integers, beggininterval, endinterval, &comparations, &copies);
    // printf("comparações: %d\n", comparations);
    // printf("cópias: %d\n", copies);
    // printArray(Integers);
}
