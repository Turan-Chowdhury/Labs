 /* PROGRAM TO IMPLEMENT PUSH AND POP OF STACK */
#include<stdio.h>
#define max 5
int pop(int *top, int *data);
int push(int *top, int *data);
int stack[max];

int main()
{
	int top,option,reply,data;
	//init stack
	top = -1;
	do
	{
		printf("\n 1. push");
		printf("\n 2. pop");
		printf("\n 3. exit");
		printf("\nSelect proper option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : // push
				printf("\n Enter a value : ");
				scanf("%d",&data);
				reply = push(&top,&data);
				if( reply == -1 )
					printf("\n Overflow / Stack is full");
				else
					printf("\n Pushed value is %d",data);
				break;
			case 2 : // pop
				reply = pop (&top,&data);
				if( reply == - 1)
					printf("\n Underflow / Stack is empty");
				else
					printf("\n Popped value is %d",data);
				break;
			case 3 : //Exit
			 return 0;
		} // switch
	}while(1);
	return 0;
} // main

int push(int *top, int *data)
{
	if( *top == max -1 )
		return(-1);
	else
	{
		*top = *top + 1;
		stack[*top] = *data;
		return(1);
	} // else
} // push

int pop(int *top, int *data)
{
	if( *top == -1 )
		return(-1);
	else
	{
		*data = stack[*top];
		*top = *top - 1;
		return(1);
	} //else
} // pop

