void convertToIntegersIndex(int *Countator, int maxvalue)
{
    for (int index = 1; index <= maxvalue; index++)
    {
        Countator[index] = Countator[index] + Countator[index - 1];
    }
}
