double returnTime(long int *Array, void *query, void *position, int chosen)
{
	long int queryint = (long int)query;
	clock_t begininterval, endinterval;

	switch (chosen)
	{
	case 1:
		begininterval = clock();
		mergeSort(Array);
		endinterval = clock();
		break;
	case 2:
		begininterval = clock();
		selectionSort(Array);
		endinterval = clock();
		break;
	case 3:
		begininterval = clock();
		countingSort(Array);
		endinterval = clock();
		break;
	case 4:
		begininterval = clock();
		*(long int *)position = _binarySearch(Array, queryint);
		endinterval = clock();
		break;
	default:
		break;
	}

	return (double)(endinterval - begininterval) / (CLOCKS_PER_SEC / 1000);
}