#include<iostream>
using namespace std;

int main()
{
    int A[3][2], B[2][3], C[3][2];
    int m=3, p=2, n=3;

    cout<<"Input a 3*2 Matrix : ";
    for(int i=0; i<m; i++)
        for(int j=0; j<p; j++)
            cin>>A[i][j];

    cout<<"Input a 2*3 Matrix : ";
    for(int i=0; i<p; i++)
        for(int j=0; j<n; j++)
            cin>>B[i][j];

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            C[i][j] = 0;
            for(int k=0; k<p; k++)
                C[i][j] += A[i][k]*B[k][j];
        }

    cout<<"After Multiplication : "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cout<<C[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
