void _merge(long int *Integers, long int begginInterval, long int middleInterval, long int endInterval, long int *comparations, long int *copies)
{
    long int limitLeft = middleInterval - begginInterval + 1;
    long int limitRight = endInterval - middleInterval;

    long int Left[limitLeft + 1];
    long int Right[limitRight + 1];

    long int i, j;

    Left[limitLeft] = INT_MAX;
    Right[limitRight] = INT_MAX;

    
    for (i = 0; i < limitLeft; i++)
    {
        Left[i] = Integers[begginInterval + i];
        *comparations = *comparations + 1; // compare i with limitLeft
        *copies = *copies + 1;
    }

    for (j = 0; j < limitRight; j++) // compare i with limitRight
    {
        *copies = *copies + 1;
        *comparations = *comparations + 1;
        Right[j] = Integers[middleInterval + j + 1];
    }

    i = 0;
    j = 0;

    for (long int index = begginInterval; index <= endInterval; index++)
    {
        *copies = *copies + 1;
        *comparations = *comparations + 1;
        if (Left[i] <= Right[j])
        {
            Integers[index] = Left[i];
            i++;
        }
        else
        {
            Integers[index] = Right[j];
            j++;
        }
    }
}