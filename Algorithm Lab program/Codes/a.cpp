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

// template<typename _Tp>
//    struct greater : public binary_function<_Tp, _Tp, bool>
//    {
//      bool
//      operator()(const _Tp& __x, const _Tp& __y) const
//      { return __x > __y; }
//    };

 struct compare
 {
   bool operator()(const pair<int,int>& l, const pair<int,int>& r)
   {
       return l.first > r.first;
   }
 };

int main()
{
    int n;
    priority_queue<data> pq;
    //priority_queue<pair<int,int>, vector<pair<int, int> >, greater<pair<int,int>.first > > PQ;

    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > PQ;




    cin >> n;
    while(n--)
    {
        //cin >> p.a >> p.b;
        cin >> tempP.first >> tempP.second;

        //pq.push(p);
        PQ.push(tempP);

    }
    //cout << "size: " << pq.size() << endl;
    cout << "size: " << PQ.size() << endl;

//    while(!pq.empty()) {
//        p = pq.top();
//        pq.pop();
//        cout << p.a << ' ' << p.b << endl;
//    }
//    cout << "size: " << pq.size() << endl;
    while(!PQ.empty())
    {
        tempP = PQ.top();
        PQ.pop();
        cout << tempP.first << " " << tempP.second << endl;
    }
    cout << "size: " << PQ.size() << endl;
}















