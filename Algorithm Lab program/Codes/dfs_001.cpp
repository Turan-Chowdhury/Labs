#include<iostream>
#include<cstdio>
#include <iomanip>

using namespace std;

#define MAX 100
#define WHITE 1
#define GRAY 2
#define BLACK 3
#define NIL -1

int E, V;
int time, color[MAX], p[MAX], d[MAX], f[MAX], adj[MAX][MAX];

void dfs_visit(int u)
{
    int v;
    time++;
    d[u]=time;
    color[u]=GRAY;
    for(v=1; v<=V; v++)
    {
        if(adj[v][u]==true && color[v]==WHITE)
        {
            p[v]=u;
            dfs_visit(v);
        }
    }
    color[u]=BLACK;
    time++;
    f[u]=time;
}

void dfs()
{
    int u, v;
    for(int u=1; u<=V; u++)
    {
        color[u]=WHITE;
        p[u]=NIL;
    }
    time = 0;
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
    else if(p[v]==NIL)
        cout << "no path from " << s << " to " << v << " exists." << endl;
    else
    {
        print_path(s, p[v]);
        cout << v << endl;
    }
}

int main()
{
    freopen("dfs_input.txt", "r", stdin);

    int x, y;

    cin >> V >> E;

    for(int i=1, j=V; i<=V; i++, j--)
    {
        adj[i][j]=false;
        adj[j][i]=false;
    }

    for(int i=1; i<=V; i++)
    {
        cin >> x >> y;
        adj[x][y]=true;
        adj[y][x]=true;
    }

    dfs();

    //print_path(1, 5);
    int i;
    for(i=1; i<=V; i++)
    {
        cout << setw(5) << i;
    }

    cout << endl;

    for(i=1; i<=V; i++)
    {
        cout << setw(5) << d[i];
    }

    cout << endl;

    for(i=1; i<=V; i++)
    {
        cout << setw(5) << p[i];
    }



//    for(int i=1; i<=V; i++)
//    {
//
//    }






    return 0;
}
