void runCountator(long int *Integers, long int *Countator)
{
    for (long int index = 0; index < length; index++)
    {
        Countator[Integers[index]]++;
    }
}
