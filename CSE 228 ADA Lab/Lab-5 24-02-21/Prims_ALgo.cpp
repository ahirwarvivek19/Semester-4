#include <bits/stdc++.h>
using namespace std;

#define V 6

class adjMat
{
public:
    int graph[V][V];

    int parent[V], key[V];
    bool mstSet[V];

    adjMat()
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                graph[i][j] = 0;
            }
        }

        for (int i = 0; i < V; i++)
        {
            key[i] = INT_MAX;
            mstSet[i] = false;
        }
    }

    void add_edge(int i, int j, int wt)
    {
        graph[i][j] = wt;
        graph[j][i] = wt;
    }

    int minKey(int key[], bool mstSet[])
    {
        int min = INT_MAX, min_index;

        for (int v = 0; v < V; v++)
        {
            if (!mstSet[v] && key[v] < min)
                min = key[v], min_index = v;
        }

        return min_index;
    }

    void printMST()
    {
        int wt=0;
        cout << "Edge       Weight\n";
        for (int i = 1; i < V; i++)
        {
            cout << parent[i] << " -- " << i << "       " << graph[i][parent[i]]
                 << "\n";
            wt += graph[i][parent[i]];
        }
        cout<<"Minimum Cost of Spanning Tree: "<<wt<<endl;
    }

    void prim()
    {
        key[0] = 0;
        parent[0] = -1;

        for (int count = 0; count < V - 1; count++)
        {
            int u = minKey(key, mstSet);

            mstSet[u] = true;

            for (int v = 0; v < V; v++)
            {
                if ((graph[u][v] && mstSet[v] == false) && graph[u][v] < key[v])
                {
                    parent[v] = u;
                    key[v] = graph[u][v];
                }
            }
        }

        printMST();
    }

} g;

int main()
{
    g.add_edge(0, 1, 1);
    g.add_edge(0, 2, 9);
    g.add_edge(1, 3, 2);
    g.add_edge(1, 2, 4);
    g.add_edge(2, 3, 3);
    g.add_edge(3, 4, 5);
    g.add_edge(4, 5, 6);

    g.prim();
    return 0;
}