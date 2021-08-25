#include<bits/stdc++.h>
using namespace std;

int V, E;
vector< vector<int> > adj;
vector<bool> vis;

//void dfs(int v)
//{
//    stack<int> s;
//    s.push(v);
//    vis[v] = 1;
//    cout<<v<<' ';
//    while(!s.empty()){
//        int val = s.top();
//        for(int i=0; i<V; i++){
//            if(adj[val][i] && !vis[i]){
//                s.push(i);
//                vis[i] = 1;
//                cout<<i<<' ';
//                break;
//            }
//            else if(i == V-1) s.pop();
//        }
//    }
//}

void dfs(int s)
{
    vis[s] = 1;
    cout<<s<<' ';
    for(int i=0; i<V; i++){
        if(adj[s][i] && !vis[i])
            dfs(i);
    }
}

int main()
{
    cin>>V>>E;
    adj.resize(V, vector<int> (V,0));
    vis.resize(V, 0);
    for(int i=1; i<=E; i++){
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    dfs(0);
    return 0;
}
