int _binarySearch(int* Array, int query)
{
     int begin = 0; 
     int end = length-1;
     int middle;
     while (begin <= end)
     {
          middle = (begin + end)/2;
          if (query == Array[middle])
               return middle;
          else if (query < Array[middle])
               end = middle-1;
          else
               begin = middle+1;
     }
     return -1;   // not found
}