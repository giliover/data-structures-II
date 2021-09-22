void applyCountatorInIntegers(long int *Integers, long int *Countator)
{
    long int *Tmp[length];

    for (long int index = (length - 1); index >= 0; index--)
    {
        Tmp[Countator[Integers[index]] - 1] = Integers[index];
        Countator[Integers[index]]--;
    }

    for (long int index = 0; index < length; index++)
    {
        Integers[index] = Tmp[index];
    }
}
