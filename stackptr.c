#include<stdio.h>
#include<stdlib.h>
#define size 5
struct stack
{
   int stack1[size];
   int top;
};
 void res(struct stack*st)
{
	st->top=-1;
}
void push(struct stack*st,int x)
{
	if(st->top==size-1)
	{
           printf("\n overflow");
	}
	else
	{
	  st->top++;
	  st->stack1[st->top]=x;
	}
}
void pop(struct stack*st)
{
      if(st->top==-1)
      {
	  printf("\n underflow");
      }
      else
      {
	      printf("\n popped element: %d",st->stack1 [st->top]);
	      st->top--;
      }
}
void display(struct stack*st)
{
	if(st->top==-1)
	{
		printf("\n elements present in the stack are:\n");
		for(int i=st->top;i>=0;i--)
		printf("%d\n",st->stack1[i]);
	}
}
int main()
{
   struct stack*ptr;
   int ch,x;
   while(ch!=0)
   {
	   printf("\n 1.push the element \n 2.pop the element \n 3.display \n 4.end");
	   printf("\n\nenter the choice");
           scanf("%d",&ch);
	   switch(ch)
	   {
		case 1:printf("enter the value to be inserted\n");
		       scanf("%d",&x);
		       push(ptr,x);
		       break;
	        case 2:pop(ptr);
		       break;
		case 3:display(ptr);
		       break;
		case 4:exit(0);
		default:printf("\n invalid choice");
	   }
   }
}
