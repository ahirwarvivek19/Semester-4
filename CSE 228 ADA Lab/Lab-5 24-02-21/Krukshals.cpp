//Kruskal’s Minimum Spanning Tree Algorithm
#include <iostream>
using namespace std;

#define I INT_MAX

int edge[9][3] = {{1, 2, 29}, {1, 6, 9}, {2, 3, 16}, {2, 7, 14}, {3, 4, 13}, {4, 5, 21}, {4, 7, 19}, {5, 6, 20}, {5, 7, 26}};
int set[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
int included[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

void join(int u, int v)
{
    if (set[u] < set[v])
    {
        set[u] += set[v];
        set[v] = u;
    }
    else
    {
        set[v] += set[u];
        set[u] = v;
    }
}
int find(int u)
{
    int x = u, v = 0;
    while (set[x] > 0)
    {
        x = set[x];
    }
    while (u != x)
    {
        v = set[u];
        set[u] = x;
        u = v;
    }
    return x;
}
int t[2][7];
int main()
{
    int u = 0, v = 0, i, j, k = 0, min = INT_MAX, n = 9;
    i = 0;
    while (i < 6)
    {
        min = INT_MAX;
        for (j = 0; j < n; j++)
        {
            if (included[j] == 0 && edge[j][2] < min)
            {
                u = edge[j][0];
                v = edge[j][1];
                min = edge[j][2];
                k = j;
            }
        }
        if (find(u) != find(v))
        {
            t[0][i] = u;
            t[1][i] = v;
            join(find(u), find(v));
            included[k] = 1;
            i++;
            // cout<<u<<" "<<v<<" "<<find(u)<<" "<<find(v);
        }
        else
        {
            included[k] = 1;
        }
    }
    cout << "Spanning Tree\n";
    for (i = 0; i < 6; i++)
    {
        cout << "(" << t[0][i] << ", " << t[1][i] << ")"
             << "\n";
    }
    return 0;
}