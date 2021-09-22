void printArray(long int *Array, long int lengthArray)
{
    for (long int i = 0; i < lengthArray; i++)
    {
        printf("| %.2ld:  %.2ld |", i, Array[i]);
    }
    printf("\n");
}