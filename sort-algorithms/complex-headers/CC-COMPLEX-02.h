void calcComplexByTime(char *FILENAME, int query, int *Array, int *position, int chosen)
{
	float timevalue;
	char *PROBLEMLENGTHNAME = "Problem length: ";
	char *TIMENAME = "Time( seconds): ";

	switch (chosen)
	{
	case 1:
		timevalue = returnTimeOfBinarySearch(Array, query, position);
		break;
	default:
		printf("Not found algorithm");
		break;
	}

	FILE *fileopened;
	fileopened = fopen(FILENAME, "a+");
	resetFile(FILENAME);

	fprintf(fileopened, "<table style='width: 60vw;'><thead><tr>");
	fprintf(fileopened, "<th>%s</th>", PROBLEMLENGTHNAME);
	fprintf(fileopened, "<th>%s</th></tr></thead><tbody>", TIMENAME);
	
	for (int currentproblemlength = 1; currentproblemlength < length; currentproblemlength = currentproblemlength + 999)
	{
		fprintf(fileopened, "<tr><th>%d</th>", currentproblemlength);
		fprintf(fileopened, "<th>%f</th></tr>", timevalue);
	}

	fprintf(fileopened, "</tbody></table>");
	fclose(fileopened);
}