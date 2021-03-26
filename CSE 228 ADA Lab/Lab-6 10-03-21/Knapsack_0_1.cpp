// Keep Changing....@Vi

// 0-1 Knapsack Problem

#include <bits/stdc++.h>
using namespace std;

// Top-down (Recursive) approach of Knapsack Problem

// Returns maximum profit value
int knapSackRec(int W, int wt[], int val[], int i, int **memo)
{
    // base condition
    if (i < 0)
        return 0;
    if (memo[i][W] != -1)
        return memo[i][W];

    if (wt[i] > W)
    {

        // Store the value of function call
        // stack in table before return
        memo[i][W] = knapSackRec(W, wt, val, i - 1, memo);
        return memo[i][W];
    }
    else
    {
        // Store value in a table before return
        memo[i][W] = max(val[i] + knapSackRec(W - wt[i], wt, val, i - 1, memo),
                         knapSackRec(W, wt, val, i - 1, memo));

        // Return value of table after storing
        return memo[i][W];
    }
}

int knapSack(int W, int wt[], int val[], int n)
{
    int **memo;
    memo = new int *[n];

    // loop to create the table dynamically
    for (int i = 0; i < n; i++)
        memo[i] = new int[W + 1];

    // fill the table with -1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            memo[i][j] = -1;

    return knapSackRec(W, wt, val, n - 1, memo);
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}
