#include<stdio.h>
#include<string.h>
#define MAX 50
char post[MAX],in[MAX],stack[MAX];
int top=-1,toper=-1;

void insertpostfix(char x);
void insertstack(char x);
void popstack(char x);
int checkprec(char x);
void pop_all();

///////////////////main/////////////////////////////////////

void main()
{
    int i,j,chk1,chk2;
    printf("\nInsert an infix notation :: ");
    gets(in);
    stack[++toper]='(';
    in[strlen(in)]=')';
    j=strlen(in);
    printf("\nCharacter\tStack\tPostfix\n");
    for(i=0; i<j; i++)
    {
        if((in[i]>='a' && in[i]<='z' )|| (in[i]>='A' && in[i]<='Z') || (in[i]>='0' && in[i]<='9'))
        {
            insertpostfix(in[i]);
        }
        else if(in[i]=='(')
        {
            insertstack(in[i]);
        }
        else if(in[i]=='+' || in[i]=='-' || in[i]=='/' || in[i]=='*' || in[i]=='^')
        {
            chk1=checkprec(in[i]);
            chk2=checkprec(stack[toper]);
            if(chk1>chk2)
            {
                insertstack(in[i]);
            }
            else
            {
                popstack(in[i]);
            }
        }
        else if(in[i]==')')
        {
            pop_all();
        }
        printf("\n%c\t\t",in[i]);
        printf("%s",stack);
        printf("\t%s",post);
    }
    printf("\n\nFinal Postfix Notation :: %s",post);
}

///////////////////insertpostfix/////////////////////////////

void insertpostfix(char x)
{
    top++;
    post[top]=x;
}

///////////////////insertstack///////////////////////////////

void insertstack(char x)
{
    toper++;
    stack[toper]=x;
}

///////////////////popstack///////////////////////////////////

void popstack(char x)
{
    top++;
    post[top]=stack[toper];
    stack[toper]=x;
}

////////////////////pop_all////////////////////////////////////

void pop_all()
{
    while(stack[toper]!='(')
    {
        top++;
        post[top]=stack[toper];
        stack[toper]='\0';
        toper--;
    }
    stack[toper]='\0';
    toper--;
}

////////////////////checkprec////////////////////////////////////

int checkprec(char x)
{
    switch(x)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    case '(':
        return 0;
    default:
        return 0;
    }
}
