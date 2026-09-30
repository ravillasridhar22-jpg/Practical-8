#include <iostream>
using namespace std;

int graph[10][10];
bool visited[10];
int n;

void DFS(int vertex)
{
    visited[vertex] = true;

    cout << vertex << " ";

    for (int i = 0; i < n; i++)
    {
        if (graph[vertex][i] == 1 && visited[i] == false)
        {
            DFS(i);
        }
    }
}

int main()
{
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    int start;

    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";

    DFS(start);

    return 0;
}
