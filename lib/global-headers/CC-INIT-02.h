void initArrayWithRandomNumberSmallerSize(long int *Array)
{
    srand(time(NULL));

    for (long int index = 0; index < length; index++)
    {
        Array[index] = rand() % length;
    }
}
