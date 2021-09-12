int lowestValueIndex(int *Array, int start)
{
    int limitRight = start;

    for (int index = start + 1; index < length; index++)
    {
        if (Array[limitRight] > Array[index])
        {
            limitRight = index;
        }
    }

    return limitRight;
}