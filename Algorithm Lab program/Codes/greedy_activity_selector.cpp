#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

#define MAX 100

vector<int> A(100);
int len;

void greedy_activity_selector(vector<int> s, vector<int> f)
{
    int n = len;
    int k = 1;
    for(int m=2; m<= n; m++)
    {
        if(s[m]>=f[k])
        {
            A[m]=1;
            k=m;
        }
    }


}

//void greedy_activity_selector(int s[], int f[])
//{
//    int n = len;
//    int k = 1;
//    for(int m=2; m<= n; m++)
//    {
//        if(s[m]>=f[k])
//        {
//            A[m]=1;
//            k=m;
//        }
//    }
//
//
//}

int main()
{
    int ss[] = {0,1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int ff[] = {0,4, 5, 6, 7, 9, 9, 10, 11, 12, 14, 16};
    vector<int> s(ss, ss+sizeof(ss)/sizeof(ss[0]));
    vector<int> f(ff, ff+sizeof(ff)/sizeof(ff[0]));


    len = sizeof(ss)/sizeof(ss[0]) - 1;

    greedy_activity_selector(s, f);

    //cout << ss[1] << " to " << ff[1] << endl;
    cout << s[1] << " to " << f[1] << endl;

    for(int i=2;i<=len;i++)
    {
        if(A[i]==1)
        {
            cout << s[i] << " to " << f[i] << endl;
        }
    }






    return 0;
}
