#include<bits/stdc++.h>

#define INF 999999

using namespace std;

struct VERTEX{
    char name;
    int key;
    VERTEX *pi;
} A, B, C, D, E, F, G, H, I;

struct gtr2
{
    bool
    operator()(const VERTEX& __x, const VERTEX& __y) const
    {
        return __x.key > __y.key;
    }
};

struct gtr
{
    bool
    operator()(const VERTEX* __x, const VERTEX* __y)
    {
        return __x->key > __y->key;
    }
};

int main()
{

    priority_queue<VERTEX*, vector<VERTEX*>, gtr > Q;

    A.key = INF;
    B.key = INF;
    C.key = INF;
    D.key = INF;
    E.key = INF;
    F.key = INF;
    G.key = INF;
    H.key = INF;
    I.key = INF;

    A.name = 'A';
    B.name = 'B';
    C.name = 'C';
    D.name = 'D';
    E.name = 'E';
    F.name = 'F';
    G.name = 'G';
    H.name = 'H';
    I.name = 'I';

    Q.push(&A);
    Q.push(&B);
    Q.push(&C);
    Q.push(&D);
    Q.push(&E);
    Q.push(&F);
    Q.push(&G);
    Q.push(&H);
    Q.push(&I);

    cout << Q.top()->name << endl;

    B.key = 0;


    cout << Q.top()->name << endl;


    return 0;
}
