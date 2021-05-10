#include<stdio.h>
#include<stdlib.h>
#include"bubbleSortInt.h"

void bubbleSortInt(int *data, int idx)
{
	for(int i = 0; i < idx; i++)
	{
		for(int j = i; j < idx; j++)
		{
			if(data[i] > data[j])
			{
				int tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}

	}
}
	

