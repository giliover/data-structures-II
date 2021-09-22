#include "CC-MERGE-03.h"

void _mergeSort(long int *Integers, long int beggininterval, long int endinterval, long int *comparations, long int *copies)
{
    *comparations = *comparations + 1;

    if (beggininterval < endinterval)
    {
        long int middleinterval = (beggininterval + endinterval) / 2;

        _mergeSort(Integers, beggininterval, middleinterval, comparations, copies);
        _mergeSort(Integers, middleinterval + 1, endinterval, comparations, copies);

        _merge(Integers, beggininterval, middleinterval, endinterval, comparations, copies);
    }
}