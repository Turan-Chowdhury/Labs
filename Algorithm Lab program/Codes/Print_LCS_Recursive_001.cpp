#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cstring>

#define MAX 100

using namespace std;

int m, n;

int b[MAX+1][MAX+1];
int c[MAX][MAX];

char x[] = {' ','A','B','C','B','D','A','B'};
char y[] = {' ','B','D','C','A','B','A'};

void print_lcs(char x[], int i, int j)
{
    if (i==0 || j==0)
    {
        return;
    }
    if(b[i][j]==1) // top-left arrow
    {
        print_lcs(x, i-1, j-1);
        cout << x[i] << endl;
    }
    else if (b[i][j]==2) // up arrow
    {
        print_lcs(x, i-1, j);
    }
    else print_lcs(x, i, j-1);
}

void lcs_length(char x[], char y[])
{
    m = strlen(x);
    n = strlen(y);

    int i, j;

    for(i=0; i<=m; i++)
    {
        c[i][0] = 0;
    }
    for(j=0; j<=m; j++)
    {
        c[0][j]=0;
    }
}



int lcs(int i, int j)
{
    if(i==0 || j==0)
    {
        return 0;
    }
    else if(i>0 && j>0 && x[i]==y[j])
    {
        c[i][j]=c[i-1][j-1]+1;
        b[i][j]=1;
        return lcs(i-1, j-1) + 1;
    }
    else
    {
        return max(lcs(i, j-1), lcs(i-1, j));
    }
}

int main()
{
    cout << lcs(7, 6) << endl;

    print_lcs(x, 8,7);

    return 0;
}
