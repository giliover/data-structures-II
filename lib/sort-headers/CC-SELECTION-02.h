void _selectionSort(long int Integers[])
{
    long int minindexofintegerspart;

    for (long int index = 0; index < length - 1; index++)
    {
        minindexofintegerspart = index;
        minindexofintegerspart = lowestValueIndex(Integers, index);
        // Swap the minimum element with the first element of Integers Vector
        swap(&Integers[minindexofintegerspart], &Integers[index]);
    }
}