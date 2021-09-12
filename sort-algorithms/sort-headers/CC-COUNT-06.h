void convertToIntegersIndex(int *Countator, int maxvalue)
{
    int integersvalue;

    for (int index = 1; index <= maxvalue; index++)
    {
        Countator[index] = Countator[index] + Countator[index - 1];
    }
}
