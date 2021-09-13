void printArray(int *Array, int lengthArray)
{
    for (int i = 0; i < lengthArray; i++)
    {
        printf("| %.2d:  %.2d |", i, Array[i]);
    }
    printf("\n");
}