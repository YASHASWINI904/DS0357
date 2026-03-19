#include <stdio.h>

int a[20][20], queue[20], visited[20], n, i, j, front = 0, rear = -1;

void bfs(int v)
{
    for(i = 1; i <= n; i++)
        visited[i] = 0;

    queue[++rear] = v;
    visited[v] = 1;

    while(front <= rear)
    {
        v = queue[front++];
        printf("%d ", v);

        for(i = 1; i <= n; i++)
        {
            if(a[v][i] == 1 && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d", &v);

    printf("BFS Traversal: ");
    bfs(v);

    return 0;
}
