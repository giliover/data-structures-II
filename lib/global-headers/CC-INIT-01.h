void initArrayWithRandomNumber(long int *Array)
{
    srand(time(NULL));

    for (long int index = 0; index < length; index++)
    {
        Array[index] = 1 + rand() % length;
        Array[index] += 1 + rand() % length;
    }
}
