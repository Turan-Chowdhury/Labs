#include<stdio.h>
int main()
{
    int a[2][3], i, j;
    printf("Input 2 by 3 matrix :\n");

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("\n");
    printf("Transpose matrix :\n");

    for(j=0;j<3;j++)
     {
        for(i=0;i<2;i++)
            printf("%d ",a[i][j]);
        printf("\n");
     }

    return 0;
}
