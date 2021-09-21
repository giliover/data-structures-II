long int _binarySearch(long int *Array, long int query)
{
     long int begin = 0;
     long int end = length - 1;
     long int middle;
     while (begin <= end)
     {
          middle = (begin + end) / 2;
          if (query == Array[middle])
               return middle;
          else if (query < Array[middle])
               end = middle - 1;
          else
               begin = middle + 1;
     }
     return -1; // not found
}