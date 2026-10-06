#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int adj[MAX][MAX];
int visited[MAX];

void DFS(int v,int n)
{
    visited[v]=1;
    printf("%d ",v);
    for(int i=0;i<n;i++)
    {
        if(adj[v][i]&&!visited[i])
        {
            DFS(i,n);
        }
    }
}
void BFS(int start,int n)
{
    int queue[100],front=0,rear=0;
    int vis[MAX]={0};
    queue[rear++]=start;
    vis[start]=1;

    while(front<rear)
    {
        int v=queue[front++];
        printf("%d ",v);
        for(int i=0;i<n;i++)
        {
            if(adj[v][i]&&!vis[i])
            {
                queue[rear++]=i;
                vis[i]=1;
            }
        }
    }
}
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
    adj[0][1]=adj[1][0]=1;
    adj[0][2]=adj[2][0]=1;
    adj[1][2]=adj[2][1]=1;
    adj[2][3]=adj[3][2]=1;

    printf("DFS Traversal = ");
    DFS(0,n);
    printf("\n");

    printf("BFS Traversal = ");
    BFS(0,n);
    printf("\n");

    return 0;
}
