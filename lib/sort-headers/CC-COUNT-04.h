void convertToIntegersIndex(long int *Countator, long int maxvalue){
    for (long int index = 1; index <= maxvalue; index++)
    {
        Countator[index] += Countator[index - 1];
    }
}
