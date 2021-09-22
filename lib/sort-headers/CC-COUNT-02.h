void _countingSort(long int *Integers)
{
    long int maxvalue = maxArrayValue(Integers) + 1;
    // printf("Ok - find your greatest value: %ld\n\n", maxvalue);

    long int *Countator[maxvalue];

    initArrayWithZero(Countator, maxvalue);
    // printf("Ok - init countator with zero .\n\n");
    // printf("Count: ");
    // printArray(Countator, maxvalue);

    runCountator(Integers, Countator);
    // printf("Ok - quantity count of Integers Vector . \n");
    // printf("Count: ");
    // printArray(Countator);
    // printf("Integers: ");
    // printArray(Integers);
    // printf("\n");

    convertToIntegersIndex(Countator, maxvalue);
    // printf("Ok - convert count to index of Integers Vector. \n");
    // printf("Count: ");
    // printArray(Countator);
    // printf("\n");

    applyCountatorInIntegers(Integers, Countator);
    // printf("Ok - apply Countador  to Integers Vector. \n");
    // printf("Integers: ");
    // printArray(Countator);
    // printf("\n");
}
