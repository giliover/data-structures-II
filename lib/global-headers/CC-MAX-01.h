long int maxArrayValue(long int *Array)
{
    long int bigvalue = Array[0];
    for (long int index = 1; index < length; index++)
    {
        if (bigvalue < Array[index])
        {
            bigvalue = Array[index];
        }
    }

    return bigvalue;
}