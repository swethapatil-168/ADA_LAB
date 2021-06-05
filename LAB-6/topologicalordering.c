#include <stdio.h>
int i, visit[20], n, adj[20][20], s, topo_order[10];

void dfs(int v)
{
    int j;
    visit[v] = 1;
    for (j = 1; j <= n; j++)
        if ((adj[v][j] == 1) && (visit[j] == 0))
            dfs(j);
    topo_order[i--] = v;
}

void main()
{
    int v, j;
    printf("Enter the number of vertices:\n");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (v = 1; v <= n; v++)
        for (j = 1; j <= n; j++)
            scanf("%d", &adj[v][j]);
    for (v = 1; v <= n; v++)
        visit[v] = 0;
    i = n;
    for (v = 1; v <= n; v++)
    {
        if (visit[v] == 0)
            dfs(v);
    }
    printf("\nTopological sorting is:");
    for (v = 1; v <= n; v++)
        printf("v%d ", topo_order[v]);
}
