#include<stdio.h>

#define SIZE 10


int main()
{
	int array[SIZE],i,size,smallest,largest;

	printf("\n Enter the array Size: ");
	scanf("%d",&size);

	printf("\n Insert the array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}


	smallest=largest=array[0];

	for(i=1;i<size;i++)
	{
		if(array[i]<smallest)
			smallest=array[i];

		if(array[i]>largest)
			largest=array[i];

	}

	printf("\n Smallest = %d and Largest = %d \n",smallest,largest);

return 0;

}

