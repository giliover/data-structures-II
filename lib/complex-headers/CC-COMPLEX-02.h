void startTable(FILE *fileopened)
{
	char *PROBLEMLENGTHNAME = "Problem length: ";
	char *TIMENAME = "Time( milliseconds): ";

	fprintf(fileopened, "<table style='width: 60vw;'><thead><tr>");
	fprintf(fileopened, "<th>%s</th>", PROBLEMLENGTHNAME);
	fprintf(fileopened, "<th>%s</th></tr></thead><tbody>", TIMENAME);
}

void tableValue(FILE *fileopened, float timevalue)
{
	fprintf(fileopened, "<tr><th>%ld</th>", length);
	fprintf(fileopened, "<th>%f</th></tr>", timevalue);
}

void endTable(FILE *fileopened)
{
	fprintf(fileopened, "</tbody></table>");
}
void calcComplexByTime(char *FILENAME, void *query, void *Array, long int *position, int chosen)
{
	FILE *fileopened;
	fileopened = fopen(FILENAME, "a+");

	float timevalue;
	long int *Integers = (long int *)Array;

	if (length == 10000)
	{
		startTable(fileopened);
	}

	for (int index = 1; index < 3; index++)
	{
		switch (chosen)
		{
		case 1:
			timevalue = returnTime(Integers, NULL, NULL, chosen);
			tableValue(fileopened, timevalue);
			break;
		case 2:
			timevalue = returnTime(Integers, NULL, NULL, chosen);
			tableValue(fileopened, timevalue);
			break;
		case 3:
			timevalue = returnTime(Integers, NULL, NULL, chosen);
			tableValue(fileopened, timevalue);
			break;
		case 4:
			timevalue = returnTime(Integers, query, position, chosen);
			tableValue(fileopened, timevalue);
			break;
		default:
			printf("Not found algorithm");
			break;
		}
	}

	if (length == 90000)
	{
		endTable(fileopened);
	}

	fclose(fileopened);
}