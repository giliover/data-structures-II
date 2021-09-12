void applyCountatorInIntegers( int *Integers, int *Countator, int maxvalue)
{
    int integersvalue;
    int Tmp[length];
    for (int index = (length - 1); index >= 0; index--)
    {
        Tmp[--Countator[Integers[index]]] = Integers[index];
    }
    for (int index = 0; index < length; index++)
    {
        Integers[index] = Tmp[index];
    }
}
