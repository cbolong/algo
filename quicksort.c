#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int *data, int left, int right)
{
	int pivot, i, j;
	
	pivot = data[left];
	
	if(left >= right)
		return;
	
	i = left + 1;   //from left, left is pivot
	j = right;		//from right
	
	while(1)
	{
		//handle left
		while(i<=right)
		{
			if(data[i]>pivot)
				break;
			//if data[i]<pivot, move next one
			i = i+1;
		}
		
		while(j>left)
		{
			if(data[j]<pivot)
				break;
			j = j-1;
		}
		
		if(i>j)
			break;
		
		swap(&data[i], &data[j]);
	}
	//pivot change to right position
	//  small  pivot  big
	swap(&data[left], &data[j]);
	
	quicksort(data, left, j - 1);
	quicksort(data, j + 1, right);
	
	return;
}

int main()
{
	int data[] = {10, 7, 6, 8, 32, 30, 41, 1, 56, 50, 5, 39, 61};
	int len = (sizeof(data) / sizeof(int));
	int i = 0;
	
	while(i<len)
	{
		printf("[%d] ",data[i]);
		i++;
	}
	printf("\n");	
	
	quicksort(data, 0, len-1);
	
	i = 0;
	while(i<len)
	{
		printf("[%d] ",data[i]);
		i++;
	}
	printf("\n");
	
	return 0;
}

