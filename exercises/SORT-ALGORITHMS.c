long int length = 10;
#include "../lib/sort-headers/SORT.h"

int main()
{
    long int Integers[10] = {10, 2, 16, 4, 15, 5, 18, 39, 26, 23};
    long int IntegersCount[10] = {6, 0, 8, 0, 0, 5, 3, 1, 7, 4};

    int chosen;

    printf(ISTRING);
    scanf("%d", &chosen);

    system("clear");

    switch (chosen)
    {
    case 1:
        printArray(Integers, length);
        mergeSort(Integers); // Pass starting from 0 to Lengths - 1 of Array
        printArray(Integers, length);
        break;
    case 2:
        printArray(Integers, length);
        selectionSort(Integers);
        printArray(Integers, length);
        break;
    case 3:
        printArray(IntegersCount, length);
        countingSort(IntegersCount);
        printArray(IntegersCount, length);
        break;
    default:
        printf("Not found algorithm");
        break;
    }
}