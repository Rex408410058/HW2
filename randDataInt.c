#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	FILE *File_1;

	File_1 = fopen("dataset1.txt", "w");

	int data[1000000];

	srand(time(NULL));

	for(int i = 0; i < 1000000; i++)
	{
		data[i] = rand();
		fprintf(File_1, "%d\n", data[i]);
	}
	
	fclose(File_1);

	return 0;
}
