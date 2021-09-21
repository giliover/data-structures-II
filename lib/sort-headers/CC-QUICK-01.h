/* The main function that implements QuickSort 
 Array[] --> Array to be sorted, 
  begin  --> Starting index, 
  end  --> Ending index */

void quickSort(int Array[], int begin, int end)
{
    if (begin < end)
    {
        /* partitionindex is partitioning index, Array[p] is now 
           at right place */
        int partitionindex = partition(Array, begin, end);

        // Separately sort elements before
        // partition and after partition
        quickSort(Array, begin, partitionindex - 1);
        quickSort(Array, partitionindex + 1, end);
    }
}
