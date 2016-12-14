#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b
	*b = temp;
}

int main()
{
	int data[] = {10, 7, 6, 8, 32, 30, 41, 1, 56, 50, 5, 39, 61};
	int i = 0;
	int j = 0;
	int temp = 0;
	int len = (sizeof(data) / sizeof(int));
	
	for(i=0;i<len;i++)
		printf("%d ",data[i]);
	printf("\n");
	
	for(i=0; i<len-1; i++)
	{
		for(j=0; j<len-1-i; j++)
		{
			if(data[j] > data[j+1])
			{
				//temp = data[j];
				//data[j] = data[j+1];
				//data[j+1] = temp;
				swap(&data[j],&data[j+1]);
			}
		}
	}
	
	for(i=0;i<len;i++)
		printf("%d ",data[i]);
	printf("\n");	
	
	return 0;
}
