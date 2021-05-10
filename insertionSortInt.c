#include<stdio.h>
#include<stdlib.h>
#include"insertionSortInt.h"

void insertionSortInt(int *data, int idx)
{
	for(int i = 1; i < idx; i++)
	{
		int key = data[i];
		int j = i - 1;
		while((j >= 0) && (data[j] > key))
		{
			data[j+1] = data[j];
			j = j - 1;
		}
		data[j+1] = key;
	}
}
	

