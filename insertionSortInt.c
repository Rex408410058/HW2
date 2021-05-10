#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"insertionSortChar.h"

void insertionSortChar(char **data, int idx)
{
	for(int i = 1; i < idx; i++)
	{
		char *key = data[i];
		int j = i - 1;
		while((j >= 0) && (strcmp(data[j], key) > 0))
		{
			data[j+1] = data[j];
			j = j - 1;
		}
		data[j+1] = key;
	}
}
	

