#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"selectionSortChar.h"

/*void swap(char **a, char **b)
{
	char *tmp = *a;
	*a = *b;
	*b = tmp;
}*/

void selectionSortChar(char **data, int idx)
{
	for(int i = 0; i < idx; i++)
	{
		int min = i;
		for(int j = i+1; j < idx; j++)
		{
			if(strcmp(data[j], data[min]) < 0)
			{
				min = j;
			}
		}
		if(i != min)
		{
			char *tmp = data[i];
			data[i] = data[min];
			data[min] = tmp;
		}
	}
}
	

