#include "CC-MERGE-03.h"

void _mergeSort(int *Integers, int beggininterval, int endinterval, int *comparations, int *copies)
{
    *comparations = *comparations + 1;

    if (beggininterval < endinterval)
    {
        int middleinterval = (beggininterval + endinterval) / 2;

        _mergeSort(Integers, beggininterval, middleinterval, comparations, copies);
        _mergeSort(Integers, middleinterval + 1, endinterval, comparations, copies);

        _merge(Integers, beggininterval, middleinterval, endinterval, comparations, copies);
    }
}