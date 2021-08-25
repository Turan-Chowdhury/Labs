#include<bits/stdc++.h>

using namespace std;

#define INF 1<<30
#define NIL -1
#define MAX 100

int V, E;
int pi[MAX], d[MAX], w[MAX][MAX], S[MAX];

//template<typename _Tp>
//struct greater : public binary_function<_Tp, _Tp, bool>
//{
//    bool
//    operator()(const _Tp& __x, const _Tp& __y) const
//    {
//        return __x > __y;
//    }
//};


struct cmp
{
    bool operator()(const pair<int,int> __x, const pair<int,int> __y) const
    {

        return __x.second > __y.second;
    }
};


priority_queue<pair<int,int> , vector< pair<int, int> >, cmp > Q;

void initialize_single_source(int s)
{
    int v;
    for(int v; v<=V; v++)
    {
        d[v] = INF;
        pi[v]= NIL;
    }
    d[s]=0;
}

void relax(int u, int v)
{
    if(d[v]>(d[u] + w[u][v]))
    {
        d[v]=d[u]+w[u][v];
        pi[v]=u;
    }
}

void dijkstra(int s)
{
    pair<int, int> pTemp;
    initialize_single_source(s);
    ///S=NIL
    for(i=1;i<=V;i++)
    {
        pTemp.first = i;
        pTemp.second = d[i];
        Q.push(pTemp);
    }

}

int main()
{
//    cout << s[5];
    cin >> V >> E;
    int i;
    for(i=1;i<=E;i++)
    {

    }




    return 0;
}
