#include<stdio.h>
#include<math.h>

void Towers(int n, char a, char b, char c)
{
    if(n!=0)
    {
        Towers(n-1,a,c,b);
        printf("Move disk %d from %c -> %c\n",n,a,c);
        Towers(n-1,b,a,c);
    }
}

int main()
{
    int n, m;
    char a='A', b='B', c='C';

    printf("Enter the number of Disk : ");
    scanf("%d",&n);
    printf("\n");

    Towers(n,a,b,c);

    m = pow(2,n)-1;
    printf("\nNumber of MoV is %d\n",m);

    return 0;
}
