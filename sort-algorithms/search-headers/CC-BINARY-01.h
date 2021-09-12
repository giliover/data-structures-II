void binarySearch(int chosen)
{
    int query;
    int chosenposition = -1;
    int Integers[length];

    initArrayWithYourIndex(Integers, length);

    printf("\nEnter a value between 0 to %d to search : ", length - 1);
    scanf("%d", &query);

    calcComplexByTime("complexity-binary-by-time.html", query, Integers, &chosenposition, chosen); // calculates complexity by time
    calcComplexByNumberOfOperations("complexity-binary-by-operations.html", chosen);               // calculates complexity by number of operations

    if (chosenposition != -1)
    {
        printf("\nFound in position : %d.", chosenposition);
    }
    else
    {
        printf("\nWas not found.");
    }
}