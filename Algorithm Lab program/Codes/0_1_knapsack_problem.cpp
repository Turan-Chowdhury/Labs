#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>

using namespace std;

int len;
int MAX;
int knapsackSize;
int W[] = {10,20,30,40,50};
int P[] = {60,100,120,140,150};

int zero_one_knapsack(int n)
{
    if(n==len)
        return 0;
    int now;
    for(int i=n+1; i<len; i++)
    {
        now = zero_one_knapsack(n+1);
        if(W[n]+W[i] <= knapsackSize)
        {
            MAX = max(P[n]+P[i], MAX);
        }
    }
    return MAX;

}

int main()
{
    len = sizeof(W)/sizeof(W[0]);

    knapsackSize = 100;

    cout << zero_one_knapsack(0);


    return 0;
}
