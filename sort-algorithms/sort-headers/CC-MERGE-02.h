#include "CC-MERGE-03.h"

void _mergeSort(int *Integers, int begginInterval, int endInterval, int *comparations, int *copies)
{
    *comparations = *comparations + 1;

    if (begginInterval < endInterval)
    {
        int middleInterval = (begginInterval + endInterval) / 2;

        _mergeSort(Integers, begginInterval, middleInterval, comparations, copies);
        _mergeSort(Integers, middleInterval + 1, endInterval, comparations, copies);

        _merge(Integers, begginInterval, middleInterval, endInterval, comparations, copies);
    }
}