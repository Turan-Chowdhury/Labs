#include<bits/stdc++.h>
using namespace std;

int V, E;
vector< vector<int> > adj;
vector<bool> vis;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        cout<<now<<' ';
        for(int i=0; i<adj[now].size(); i++){
            int val = adj[now][i];
            if(!vis[val]){
                q.push(val);
                vis[val] = 1;
            }
        }
    }
}

int main()
{
    cin>>V>>E;
    adj.resize(V);
    vis.resize(V, 0);
    for(int i=1; i<=E; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(0);
    return 0;
}
