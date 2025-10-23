#include<stdio.h>
void main()
{
	int arr[100];
	int n,i,pos,num;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to insert:");
	scanf("%d",&num);
	printf("Enter position to insert(1 to %d):",n+1);
	scanf("%d",&pos);
	if(pos<1 || pos > n+1)
	{
		printf("Invalid position ! \n ");
	}
	else
	{
		for(i=n;i>=pos;i--)
		{
			arr[i] = arr[i-1];
		}
	arr[pos-1] = num;
	n++;
	printf("array after insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n ");
	}
}
			
