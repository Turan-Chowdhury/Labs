#include<bits/stdc++.h>

#define MAX 100

#define WHITE 0
#define GRAY 1
#define BLACK 2

#define NIL -1

using namespace std;

int E, V;
int t;

int color[MAX], pi[MAX], adj[MAX][MAX], f[MAX], d[MAX];

void dfs_visit(int u)
{
    int v;
    t++;
    d[u]=t;
    color[u]=GRAY;

    for(v=1; v<=V; v++)
    {
        if(color[v]==WHITE && adj[v][u]==1)
        {
            pi[v]=u;
            dfs_visit(v);
        }
    }
    color[u] = BLACK;
    t++;
    f[u]=t;
}

void dfs()
{
    int u;
    for(u=1; u<=V; u++)
    {
        color[u]=WHITE;
        pi[u]=NIL;
    }
    t = 0;
    for(u=1; u<=V; u++)
    {
        if(color[u]==WHITE)
            dfs_visit(u);
    }
}

void print_path(int s, int v)
{
    if(v==s)
        cout << s << endl;
    else if(pi[v]==NIL)
        cout << "No path from " << s << " to " << v << " exists." << endl;
    else print_path(s, pi[v]);
}

int main()
{
    freopen("dfs_input.txt", "r", stdin);

    //cout << "Enter the Vertex and Edge number: ";
    cin >> V >> E;
    int i, x, y;
    //cout << "Enter the Adjacent Matrix: " << endl;

    for(int i=1, j=V; i<=V; i++, j--)
    {
        adj[i][j]=false;
        adj[j][i]=false;
    }

    for(i=0; i<E; i++)
    {
        cin >> x >> y;
        adj[x][y]=1;
        adj[y][x]=1;
    }

    dfs();

    for(i=1; i<=V; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    for(i=1; i<=V; i++)
    {
        cout << d[i] << " ";
    }

    cout << endl;

    for(i=1; i<=V; i++)
    {
        cout << pi[i] << " ";
    }





    return 0;
}
