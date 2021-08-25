#include<bits/stdc++.h>

using namespace std;

struct cmp
{
    bool operator()(const pair<int,int> __x, const pair<int,int> __y) const
    {

        return __x.second > __y.second;
    }
};

int main()
{
    pair<int, int> p;

    priority_queue<pair<int,int> , vector< pair<int, int> >, cmp > Q;

    p.first = 10;
    p.second = 12;
    Q.push(p);

    p.first = 30;
    p.second = 8;
    Q.push(p);

    p.first = 40;
    p.second = 6;
    Q.push(p);

    p.first = 60;
    p.second = 4;
    Q.push(p);

    for(int i=1;i<=4;i++)
    {
        p = Q.top();
        cout << p.first << " " << p.second << endl;
        Q.pop();

    }


    return 0;
}
