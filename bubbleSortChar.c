#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"bubbleSortChar.h"

void bubbleSortChar(char **data, int idx)
{
	for(int i = 0; i < idx; i++)
	{
		for(int j = i; j < idx; j++)
		{
			if(strcmp(*(data+i), *(data+j)) > 0)
			{
				char *tmp = malloc(sizeof(char) * 1000000);
				strcpy(tmp, *(data+i));
				strcpy(*(data+i), *(data+j));
				strcpy(*(data+j), tmp);
				free(tmp);
			}
		}

	}
}
	

