#include <iostream>
#include <queue>
using namespace std;

int graph[10][10];
bool visited[10];
int n;

void BFS(int start)
{
    queue<int> q;

    visited[start] = true;

    q.push(start);

    while (!q.empty())
    {
        int vertex = q.front();

        q.pop();

        cout << vertex << " ";

        for (int i = 0; i < n; i++)
        {
            if (graph[vertex][i] == 1 && visited[i] == false)
            {
                visited[i] = true;

                q.push(i);
            }
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

    cout << "BFS Traversal: ";

    BFS(start);

    return 0;
}
