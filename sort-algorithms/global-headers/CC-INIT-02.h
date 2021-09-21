void initArrayWithYourIndex(long int *Array, long int lengthArray)
{
    srand(time(NULL));

    for (long int index = 0; index < lengthArray; index++)
    {
        Array[index] = 1 + rand() % lengthArray;
        Array[index] += 1 + rand() % lengthArray;
    }
}
