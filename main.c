#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/time.h>
#include"insertionSortInt.h"
#include"insertionSortChar.h"
#include"selectionSortInt.h"
#include"selectionSortChar.h"
#include"bubbleSortInt.h"
#include"bubbleSortChar.h"

int main(int argc, char **argv)
{
	FILE *File_1, *File_2;
	char **line = malloc(sizeof(char *) * 1000000);
	char *str = malloc(sizeof(char) * 1000000);
	int data[1000000];
	int idx = 0;

	File_1 = fopen("dataset1.txt", "r");
	File_2 = fopen("dataset2.txt", "r");

	struct timeval start;
	struct timeval end;

	int word = fread(data, sizeof(int), 1, File_1);

	while(scanf("%d", &word) != EOF)
	{
		for(int i = 0; i < argc; i++)
		{
			if(argc == 2)
			{
				if(strcmp(*(argv+i), "-b") == 0)
				{
					bubbleSortInt(data, 1000000);
				}
				else if(strcmp(*(argv+i), "-i") == 0)
				{
					insertionSortInt(data, 1000000);
				}
				else if(strcmp(*(argv+i), "-s") == 0)
				{
					selectionSortInt(data, 1000000);
				}
				gettimeofday(&start, NULL);
				gettimeofday(&end, NULL);

				unsigned long diff;
				diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
				printf("執行時間: %lu (us)\n", diff);
			}
			else
			{
				printf("Usage:\n");
				printf("Just choose one sorting\n");
				printf("\t-b bubbleSort\n\t-i insertionSort\n\t-s selectionSort\n");
			}
		}
	}

	while(fgets(str, 1000000, File_2) != NULL)
	{
		int str_len = strlen(str);
		if(str[str_len-1] == '\n')
			str[str_len-1] == '\0';
		*(line + idx) = malloc(sizeof(char) * str_len + 1);
		strcpy(*(line + idx), str);
		idx++;
	}

	for(int i = 0; i < argc; i++)
	{
		if(argc == 2)
		{
			
			if(strcmp(*(argv+i), "-b") == 0)
			{
				bubbleSortChar(line, idx);
			}
			else if(strcmp(*(argv+i), "-i") == 0)
			{
				insertionSortChar(line, idx);
			}
			else if(strcmp(*(argv+i), "-s") == 0)
			{
				selectionSortChar(line, idx);
			}
			gettimeofday(&start, NULL);
			gettimeofday(&end, NULL);

			unsigned long diff;
			diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
			printf("執行時間: %lu (us)\n", diff);
		}
		else
		{
			printf("Usage:\n");
			printf("Just choose one sorting\n");
			printf("\t-b bubbleSort\n\t-i insertionSort\n\t-s selectionSort\n");
		}
	}
	free(str);
	free(line);
	fclose(File_1);
	fclose(File_2);

	return 0;
}
