void binarySearch(int chosen)
{
    long int query = 0;
    long int chosenposition = -1;

    printf("\nEnter a value between 0 to %ld to search : ", length - 1);
    scanf("%ld", &query);

    long int Integers[length];

    initArrayWithYourIndex(Integers, length);

    calcComplexByTime("complexity-binary-by-time.html", query, Integers, &chosenposition, chosen); // calculates complexity by time
    calcComplexByNumberOfOperations("complexity-binary-by-operations.html", chosen);               // calculates complexity by number of operations

    if (chosenposition != -1)
    {
        printf("\nFound in position : %ld.", chosenposition);
    }
    else
    {
        printf("\nWas not found.");
    }
}