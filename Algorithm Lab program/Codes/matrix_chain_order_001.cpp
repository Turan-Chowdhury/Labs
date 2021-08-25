#include<iostream>
#include<cstdio>

using namespace std;

#define max 100

int m[max][max], s[max][max];

void matrix_chain_order(int p[], int n)
{

    int i, j, q, l, k;
    for(i=1; i<=n; i++)
        m[i][i]=0;

    for(l=2; l<=n; l++)
    {
        for(i=1; i<=n-l+1; i++)
        {
            j=i+l-1;
            m[i][j] = 1<<30; //2^30
            for(k=i; k<=j-1; k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}

int main()
{
    int p[100] = {30, 35, 15, 5, 10, 20, 25};
    int i, j;
    matrix_chain_order(p, 7);

    for(i=1; i<7; i++)
    {
        for(j=0; j<7; j++)
        {
                printf("%10d", m[i][j]);
        }
        cout << endl;
    }

    cout << endl << endl ;

    for(i=1; i<7; i++)
    {
        for(j=0; j<7; j++)
        {
                printf("%10d", s[i][j]);
        }
        cout << endl;
    }








    return 0;
}
