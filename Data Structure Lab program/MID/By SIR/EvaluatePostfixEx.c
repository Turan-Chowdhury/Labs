#include<stdio.h>
#define SIZE 50            /* Size of Stack */

int s[SIZE];
int top=-1;       /* Global declarations */

///////////////////push/////////////////////////////

push(int elem)
{
    /* Function for PUSH operation */
    s[++top]=elem;
}

///////////////////pop/////////////////////////////

int pop()
{
    /* Function for POP operation */
    return(s[top--]);
}

///////////////////main/////////////////////////////

main()
{
    char pofx[50],ch;
    int i=0,j=0,op1,op2;
    printf("\n\nRead the Postfix Expression ? ");
    //scanf("%s",pofx);
    gets(pofx);
    printf("\nSymbol\t\tStack\t\n");
    while( (ch=pofx[i++]) != '\0')
    {
        if(isdigit(ch))
            push(ch-'0'); /* Push the operand */
        else
        {
            /* Operator,pop two  operands */
            op2=pop();
            op1=pop();
            switch(ch)
            {
            case '+':
                push(op1+op2);
                break;
            case '-':
                push(op1-op2);
                break;
            case '*':
                push(op1*op2);
                break;
            case '/':
                push(op1/op2);
                break;
            }
        }
        printf("\n%c\t\t",pofx[i-1]);
        for(j=0; j<=top; j++)
            printf("%d",s[j]);
    }
    printf("\n Given Postfix Expn: %s\n",pofx);
    printf("\n Result after Evaluation: %d\n",s[top]);
}
