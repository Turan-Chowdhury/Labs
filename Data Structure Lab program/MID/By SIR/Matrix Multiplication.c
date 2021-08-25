
#include<stdio.h>
#include<math.h>
void MATMUL(int A[3][4], int B[4][4], int C[3][4], int M, int P, int N);

int main()
{
    int i,j,k,l,M,P,N;
    int A[3][4]= {2,2,7,9,
                  2,1,3,5,
                  8,9,1,2
                 };
    int B[4][4]= {3,5,3,9,
                  2,6,4,1,
                  8,1,2,2,
                  3,5,6,2
                 };
    int C[3][4];
    M=3;
    P=4;
    N=4;
    printf("First Matrix \n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
            printf(" %d ",A[i][j]);
        printf("\n");
    }
    printf("Second Matrix \n");
    for(i=0; i<4; i++)
    {

        for(j=0; j<4; j++)
            printf(" %d ",B[i][j]);
        printf("\n");
    }

    MATMUL(A,B,C,M,P,N);
    return 0;
}

void MATMUL(int A[3][4], int B[4][4], int C[3][4], int M, int P, int N)
{
    int l,i,j,k;
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {

            C[i][j]=0;
            for(k=0; k<P; k++)
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }
    printf("Resultant Matrix \n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
            printf(" %d ",C[i][j]);
        printf("\n");
    }
}
