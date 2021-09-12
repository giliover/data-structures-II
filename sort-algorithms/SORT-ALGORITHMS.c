#include "sort-headers/SORT.h"

int main()
{
    int Integers[length] = {10, 2, 16, 4, 15, 5, 18, 39, 26, 23};
    int IntegersCount[length] = {6, 0, 8, 0, 0, 5, 3, 1, 7, 4};

    int sortalgorithmchosen;

    printf("1 - to mergesort algorithms\n2 - to selectionSort algorithms\n3 - to countingSort algorithm\n");
    scanf("%d", &sortalgorithmchosen);
    
    system("clear");

    switch (sortalgorithmchosen)
    {
    case 1:
        mergeSort(Integers); // Pass starting from 0 to Length - 1 of Array
        break;
    case 2:
        selectionSort(Integers);
        break;
    case 3:
        countingSort(IntegersCount);
        break;
    default:
        printf("Not found algorithm");
        break;
    }
}