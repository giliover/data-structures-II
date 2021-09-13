int partition(int Array[], int low, int high)
{
    int pivot = Array[high]; // pivot
    int i = (low - 1);       // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (Array[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&Array[i], &Array[j]);
        }
    }
    swap(&Array[i + 1], &Array[high]);
    return (i + 1);
}
