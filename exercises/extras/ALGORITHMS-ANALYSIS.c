#include "../sort-algorithms/search-headers/SEARCH.h"

#define ISTRING "1 - to binary search algorithms\n\n "

int main()
{
    int chosen;

    printf(ISTRING);
    scanf("%d", &chosen);

    system("clear"); // case your Windows system, set to "cls"

    switch (chosen)
    {
    case 1:
        binarySearch(chosen);
        break;
    default:
        printf("Not found algorithm");
        break;
    }
}