#include<stdio.h>
void main()
{
	int stack[10];
	int ch,i,size,val,top=-1;
	printf("Enter the size of the stack:");
	scanf("%d",&size);
	do
	{
		printf("\n MENU \n1.Push \n2.Pop \n3.Display \n4.Exit");
		printf("\n Enter your choice (1-4):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				 if(top==size-1)
				 printf("Stack Overflow!");
			     else
			     {
			     	top++;
			     	printf("Enter Value to push:");
			     	scanf("%d",&val);
			     	stack[top]=val;
			     	printf("\n Value Pushed!");
			      }
			      break;
			  case 2:
			     if(top==-1)
			       printf("\n stack underflow!");
			       else
			       {
			       	val=stack[top];
			       	printf("\n value popped is:%d",val);
			       	top--;
			       }
			       break;
			   case 3:
			       if(top==-1)
			       printf("stack is empty!");
			       else
			       {
			       printf("The stack is: ");
			       for(i=top;i>=0;i--)
			       printf("%d",stack[i]);
			       }
			       case 4:break;
			       default:printf("Wrong choice!");
			   }
	 }
	 while(ch!=4);
 }
			     	
