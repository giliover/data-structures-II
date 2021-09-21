void runCountator(int *Integers, int *Countator)
{
    int integersvalue;

    for (int index = 0; index < length; index++)
    {
        integersvalue = Integers[index];
        Countator[integersvalue]++;
    }
}
