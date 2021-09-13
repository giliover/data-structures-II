void calcComplexByNumberOfOperations(char *FILENAME, int chosen)
{
	char *PROBLEMLENGTHNAME = "Problem length: ";
	char *OPERATIONSNAME = "Number of operations :";

	FILE *fileopened;
	fileopened = fopen(FILENAME, "a+");
	resetFile(FILENAME);

	fprintf(fileopened, "<table style='width: 60vw;'><thead><tr>");
	fprintf(fileopened, "<th>%s</th>", PROBLEMLENGTHNAME);
	fprintf(fileopened, "<th>%s</th></tr></thead><tbody>", OPERATIONSNAME);
	
	for (int currentproblemlength = 1; currentproblemlength < length; currentproblemlength = currentproblemlength + 999)
	{

		switch (chosen)
		{
		case 1:
			fprintf(fileopened, "<tr><th>%d</th>", currentproblemlength);
			fprintf(fileopened, "<th>%f</th></tr>", (double)log10(currentproblemlength) / (double)log10(2));
			break;
		default:
			printf("Not found algorithm");
			break;
		}
	}

	fprintf(fileopened, "</tbody></table>");
	fclose(fileopened);
}