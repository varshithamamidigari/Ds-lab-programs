#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main()
{
	top=-1;
	printf("\n enter the size of stack:");
	scanf("%d",&n);
	printf("\n\t stack operations using array");
	printf("\n\t-----------------------------");
	printf("\n\t1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");
	do
	  {
        	printf("enter choice:");
		scanf("%d",&choice");
		switch(choice)
		{
	    case 1: push();
	            break;
	    case 2: pop();
		    break;
	    case 3: display();
		    break;
 	    case 4:printf("\n\t exit point);
		   break;
            default:printf("\n\t enter a valid choice(1/2/3/4)");
		}
	  }
}
void push()
{
	int i;
	if(top == SIZE-1)
		printf("stackoverflowed\n");
	else
	{
		top = top+1;
		printf("enter the number:");
		scanf("%d",&i);
		arr[top]=i;
	}
}
void pop()
 {
	 int i;
	 if(top==1)
		 printf("stackunderflow\n");
	 else
	 {
		 printf("the number removed is %d\n",arr[top]);
		 top = top-1;
	 }
 }
void display()
{
	int i;
	if(top==-1)
		printf("stackempty\n");
	else
	{
		for(i=top;i>=0;i--)
			printf("%d",arr[i]);
		        printf("\n");
	}
}




		    
		

	
