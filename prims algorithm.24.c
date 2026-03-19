#include <stdio.h>
#define MAX 10
#define INF 9999

int main()
{
    int n, cost[MAX][MAX], visited[MAX];
    int i, j, min, a, b, u, v, ne = 1;
    int mincost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    for(i = 0; i < n; i++)
        visited[i] = 0;

    visited[0] = 1; // Start from vertex 0

    printf("\nEdges in MST:\n");

    while(ne < n)
    {
        min = INF;

        for(i = 0; i < n; i++)
        {
            if(visited[i])
            {
                for(j = 0; j < n; j++)
                {
                    if(!visited[j] && cost[i][j] < min)
                    {
                        min = cost[i][j];
                        a = u = i;
                        b = v = j;
                    }
                }
            }
        }

        printf("%d -> %d = %d\n", a, b, min);

        mincost += min;
        visited[b] = 1;
        ne++;
    }

    printf("\nMinimum cost = %d\n", mincost);

    return 0;
}
