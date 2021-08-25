#include<stdio.h>
int main()
{
    int i, len=0;
    char str[100];

    printf("\nInput a String : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
        len++;

    printf("\nLength is : %d\n",len);
    return 0;
}
