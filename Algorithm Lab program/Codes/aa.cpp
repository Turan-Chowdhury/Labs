#include <bits/stdc++.h>

using namespace std;

struct data
{
    int a, b;
    bool operator<( const data &p  ) const
    {
        return a > p.a;
    }
} p;

priority_queue<pair<int,int> > P;
pair<int, int> tempP;

int main()
{
    int n;
    priority_queue<data> pq;
    priority_queue<pair<int,int> > PQ;


    cin >> n;
    while(n--)
    {
        cin >> p.a >> p.b;

        pq.push(p);

    }
    cout << "size: " << pq.size() << endl;

    while(!pq.empty()) {
        p = pq.top();
        pq.pop();
        cout << p.a << ' ' << p.b << endl;
    }
    cout << "size: " << pq.size() << endl;

}
















