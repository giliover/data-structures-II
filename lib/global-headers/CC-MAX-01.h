int maxArrayValueIndex(int *Array)
{
    int current = Array[0];
    for (int i = 1; i < length; i++)
    {
        if (current < Array[i])
        {
            current = Array[i];
        }
    }

    return current;
}