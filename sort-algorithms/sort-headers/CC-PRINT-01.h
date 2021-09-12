void printArray(int *Integers, int lengthReceveid)
{
    for (int i = 0; i < lengthReceveid; i++)
    {
        printf("| %.2d:  %.2d |", i, Integers[i]);
    }
    printf("\n");
}