#include "CC-COUNT-03.h"
#include "CC-COUNT-04.h"
#include "CC-COUNT-05.h"
#include "CC-COUNT-06.h"
#include "CC-COUNT-07.h"

void _countingSort(int *Integers, int *comparations, int *copies)
{
    int lengthcount = maxArray(Integers);

    int Countator[lengthcount];

    initArray(Countator, lengthcount);
    // printf("Ok - find your greatest value %d.\n\n", lengthcount);

    runCountator(Integers, Countator);

    // printf("Ok - quantity count of Integers Vector . \n");
    // printArray(Countator, lengthcount);
    // printf("\n");

    convertToIntegersIndex(Countator, lengthcount);
    // printf("Ok - convert count to index of Integers Vector. \n");
    // printArray(Countator, lengthcount);
    // printf("\n");
    
    applyCountatorInIntegers(Integers, Countator, lengthcount);
    // printf("Ok - apply Countador  to Integers Vector. \n");
    // printArray(Integers, length);
    // printf("\n");
}
