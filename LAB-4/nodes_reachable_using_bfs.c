#include <stdio.h>
int a[20][20], queue[20], visited[20], n, i, j, front = 0, rear = -1;
void BFS(int v)
{
    for (i = 1; i <= n; i++)
        if (a[v][i] && !visited[i])
            queue[++rear] = i;
    if (front <= rear)
    {
        visited[queue[front]] = 1;
        BFS(queue[front++]);
    }
}
void main()
{
    int v;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        queue[i] = 0;
        visited[i] = 0;
    }
    printf("\n Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("\n Enter the starting vertex:");
    scanf("%d", &v);
    BFS(v);
    printf("\n The node which are reachable are:\n");
    for (i = 1; i <= n; i++)
        if (visited[i])
            printf("%d\t",i);
}
