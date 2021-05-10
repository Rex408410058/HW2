#include<stdio.h>
#include<stdlib.h>
#include"selectionSortInt.h"

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void selectionSortInt(int *data, int idx)
{
	for(int i = 0; i < idx; i++)
	{
		int min = i;
		for(int j = i+1; j < idx; j++)
		{
			if(data[j] < data[min])
			{
				min = j;
			}
		}
		if(i != min)
		{
			swap(&data[i], &data[min]);
		}
	}
}
	

