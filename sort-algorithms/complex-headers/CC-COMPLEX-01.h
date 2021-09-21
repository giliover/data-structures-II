float returnTimeOfBinarySearch(long int *Array, long int query, long int *position)
{
	clock_t begininterval, endinterval;

	begininterval = clock();
	
	*position = _binarySearch(Array, query);
	endinterval = clock();

	return (double)(endinterval - begininterval) / (CLOCKS_PER_SEC / 1000);
}