#include<stdio.h>

#define SIZE 50

int stack[SIZE];
int top = -1;

push(int elem)
{
    stack[++top] = elem;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char pofx[50], ch;
    int i=0, j=0, op1, op2;

    printf("\n Enter a Postfix Expression : ");
    gets(pofx);

    printf("\n Symbol\t\tStack\n");

    while( (ch=pofx[i++]) != '\0')
    {
        if(isdigit(ch))
            push(ch-'0');
        else
        {
            op2 = pop();
            op1 = pop();

            switch(ch)
            {
                case '+': push(op1+op2);
                          break;
                case '-': push(op1-op2);
                          break;
                case '*': push(op1*op2);
                          break;
                case '/': push(op1/op2);
                          break;
            }
        }

        printf("\n %c\t\t",ch);
        for(j=0;j<=top;j++)
            printf("%d ",stack[j]);
    }

    printf("\n\n Given Postfix Expression : %s\n",pofx);
    printf("\n Result after Evaluation : %d\n",stack[top]);

    return 0;
}
