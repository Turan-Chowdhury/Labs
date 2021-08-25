#include<stdio.h>
int main()
{
    int i, j, a[2][3], row_sum[2]={0,0}, column_sum[3]={0,0,0};
    printf("Input 2 by 3 matrix :\n");

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
         {
            scanf("%d",&a[i][j]);
            row_sum[i] += a[i][j];
            column_sum[j] += a[i][j];
         }

    printf("\n");
    printf("Row sums : ");
    for(i=0;i<2;i++)
        printf("%d ",row_sum[i]);

    printf("\n");
    printf("Column sums : ");
    for(j=0;j<3;j++)
        printf("%d ",column_sum[j]);

    printf("\n");
    return 0;
}
