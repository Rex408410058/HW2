#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
	FILE *File_2;
	File_2 = fopen("dataset2.txt", "w");

	char data[1000000][100];
	srand(time(NULL));

	for(int i = 0; i < 1000000; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			int ascii = rand()%26;
			char c = ascii + 'a';
			data[i][j] = c;
		}
		fprintf(File_2, "%s\n", data[i]);
	}
	fclose(File_2);

	return 0;
}
