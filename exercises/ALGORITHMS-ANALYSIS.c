long int length = 0;
#include "../lib/sort-headers/SORT.h"
#include "../lib/search-headers/SEARCH.h"
#include "../lib/complex-headers/COMPLEX.h" /* main complexity library */

int main()
{
    int chosen;
    long int Lengths[3] = {10000, 50000, 90000};
    long int Integers[90000];
    long int IntegersCount[90000];
    char *MergeSortFilename = "complexity-merge-operations-by-time.html";
    char *CountingSortFilename = "complexity-counting-operations-by-time.html";
    char *SelectionSortFilename = "complexity-selection-operations-by-time.html";
    

    printf(ISTRING);
    scanf("%d", &chosen);

    system("clear");

    switch (chosen)
    {
    case 1:
        resetFile(MergeSortFilename);
        for (int index = 0; index <= 2; index++)
        {
            length = Lengths[index];
            initArrayWithRandomNumber(Integers);
            calcComplexByTime(MergeSortFilename, NULL, &Integers, NULL, chosen); // calculates complexity by time
        }
        break;
    case 2:
        resetFile(SelectionSortFilename);
        for (int index = 0; index <= 2; index++)
        {
            length = Lengths[index];
            initArrayWithRandomNumber(Integers);
            calcComplexByTime(SelectionSortFilename, NULL, &Integers, NULL, chosen); // calculates complexity by time
        }
        break;
    case 3:
        resetFile(CountingSortFilename);
        for (int index = 0; index <= 2; index++)
        {
            length = Lengths[index];
            initArrayWithRandomNumberSmallerSize(IntegersCount);
            calcComplexByTime(CountingSortFilename, NULL, &IntegersCount, NULL, chosen); // calculates complexity by time
        }
        break;
    default:
        printf("Not found algorithm");
        break;
    }
}