#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void DFS(int node, vector<int> adj[], bool visited[])
{
    visited[node] = true;
    cout << node << " ";

    for (int i = 0; i < adj[node].size(); i++)
    {
        int next = adj[node][i];

        if (!visited[next])
        {
            DFS(next, adj, visited);
        }
    }
}

void BFS(int start, vector<int> adj[], bool visited[])
{
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < adj[node].size(); i++)
        {
            int next = adj[node][i];

            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{
    int n, e;

    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    vector<int> adj[100];

    cout << "Enter edges:\n";

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;

    cout << "Enter starting node: ";
    cin >> start;

    bool visited[100] = {false};

    cout << "DFS: ";
    DFS(start, adj, visited);

    for (int i = 0; i < 100; i++)
    {
        visited[i] = false;
    }

    cout << "\nBFS: ";
    BFS(start, adj, visited);

    cout << endl;

    return 0;
}