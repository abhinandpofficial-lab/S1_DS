#include<stdio.h>
void main()
{
	int arr[100];
	int n,i,pos;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter position to delete( 1 to %d):",n);
	scanf("%d",&pos);
	if(pos<1 || pos > n)
	{
		printf("Invalid position ! \n ");
	}
	else
	{
		for(i = pos -1;i< n-1;i++)
		{
			arr[i] = arr[i+1];
		}
	n--;
	printf("array after deletion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n ");
	}
}
			
