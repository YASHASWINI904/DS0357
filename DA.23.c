#include <stdio.h>
#define MAX 10
#define INF 9999

int main()
{
    int n, cost[MAX][MAX], dist[MAX], visited[MAX];
    int i, j, u, v, min, count, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0 && i != j)
                cost[i][j] = INF;
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    for(i = 0; i < n; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[start] = 0;

    for(count = 0; count < n - 1; count++)
    {
        min = INF;

        for(i = 0; i < n; i++)
        {
            if(!visited[i] && dist[i] <= min)
            {
                min = dist[i];
                u = i;
            }
        }

        visited[u] = 1;

        for(v = 0; v < n; v++)
        {
            if(!visited[v] && cost[u][v] != INF &&
               dist[u] + cost[u][v] < dist[v])
            {
                dist[v] = dist[u] + cost[u][v];
            }
        }
    }

    printf("\nShortest distances from vertex %d:\n", start);
    for(i = 0; i < n; i++)
    {
        printf("To %d = %d\n", i, dist[i]);
    }

    return 0;
}
