void printArray(int *array)
{
    for (int i = 0; i < length; i++)
    {
        printf("| %d:  %d |", i, array[i]);
        // usleep(100000);
    }
    printf("\n");
}