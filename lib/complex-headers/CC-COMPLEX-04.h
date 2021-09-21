void resetFile(char *STRING)
{
	FILE *fopend;
	fopend = fopen(STRING, "w+");
	fclose(fopend);
}