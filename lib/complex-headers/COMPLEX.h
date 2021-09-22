/*	ADT Prototype Declarations */
double returnTime(long int *Array, void *query, void *position, int chosen);
void calcComplexByTime(char *FILENAME, void *query, void *Array, long int *position, int chosen);
void calcComplexByNumberOfOperations(char *FILENAME, int chosen);

#include "CC-COMPLEX-04.h" /* reset file */
#include "CC-COMPLEX-01.h" /* return time of binary seach */
#include "CC-COMPLEX-03.h" /* calculates complexity by number of operations */
#include "CC-COMPLEX-02.h" /* calculates complexity by time */
