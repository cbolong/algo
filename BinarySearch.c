#include <stdio.h>
#include <stdio.h>

int binarysearch(int[], int, int);

int main()
{
	int data[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};
	int search = 0;
	int result = 0;
	int i = 0;
	
	for(i=0;i<(sizeof(data) / sizeof(int));i++)
		printf("%d ",data[i]);
	printf("\n");	
	
	printf("Input:");
	scanf("%d",&search);
	printf("Searching : %d\n",search);
	
	result = binarysearch(data, search, sizeof(data) / sizeof(int));
	

	
	if(-1 == result)
		printf("can't find %d\n",search);
	else
		printf("position is %d\n",result);
	
	return 0;
}

int binarysearch(int data[], int search, int size)
{
	int result = 0;
	int start = 0;
	int end = size;
	int mid = 0;
	
	while(start <= end)
	{
		mid = (start + end)/2;
		printf("mid is %d\n",mid);
		if(search == data[mid])
			return mid;
		else if(search < data[mid])
			end = mid - 1;
		else if(search > data[mid])
			start = mid + 1;
	}
	
	return -1;
}