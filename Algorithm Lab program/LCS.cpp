#include<bits/stdc++.h>
using namespace std;

int m, n;
string X, Y, res1, res2;
vector< vector<int> > c;
vector< vector<char> > b;

void LCS_Length()
{
    m = X.size();
    n = Y.size();
    c.resize(m+1, vector<int> (n+1, 0));
    b.resize(m+1, vector<char> (n+1));
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++){
            if(X[i-1] == Y[j-1]){
                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = 'D';
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j] = c[i-1][j];
                b[i][j] = 'U';
            }
            else{
                c[i][j] = c[i][j-1];
                b[i][j] = 'L';
            }
        }
    cout<<c[m][n]<<endl;
    return;
}

void Print_LCS(int i, int j)
{
    if(i == 0 || j == 0) return;
    if(b[i][j] == 'D'){
        res1 += X[i-1];
        res2 += 'D';
        Print_LCS(i-1, j-1);
    }
    else if(b[i][j] == 'U'){
        res2 += 'U';
        Print_LCS(i-1, j);
    }
    else{
        res2 += 'L';
        Print_LCS(i, j-1);
    }
}

int main()
{
    cin>>X>>Y;
    LCS_Length();
    Print_LCS(m,n);
    reverse(res1.begin(), res1.end());
    reverse(res2.begin(), res2.end());
    cout << res1 << '\n';
    cout << res2 << '\n';
    return 0;
}
