#include "CC-COUNT-02.h"
#include "CC-COUNT-03.h"
#include "CC-COUNT-04.h"
#include "CC-COUNT-05.h"

void countingSort(int *Integers)
{
    int comparations = 0, copies = 0;
    printArray(Integers, length);
    _countingSort(Integers, &comparations, &copies); // will be added the counting of the comparison and copies
    printArray(Integers, length);
}
