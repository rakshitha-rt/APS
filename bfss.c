
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void input(int n,int m[n][n]);
void bfs(int n,int v[n],int m[n][n],int source);
int main()
{
    int n;
    scanf("%d",&n);
    int source;
    scanf("%d",&source);
    int m[n][n],v[n];
    input(n,m);
    int i;
    for(i=0; i<n; i++)
    {
        v[i]=0;
    }
    v[source]=1;
    printf("%d",source);
    bfs(n,v,m,source);
    return 0;
}
void input(int n,int m[n][n])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}
void bfs(int n,int v[n],int m[n][n],int source)
{
int queue[n],front=0,rear=0,i,u;
v[source]=1;
queue[rear]=source;
 while(front<=rear)
 {
    u=queue[front];
    printf("%d",u);
    front=front+1;
    for(i=0;i<n;i++)
    {
      if(m[u][i]==1&&v[i]==0)
      {
          rear=rear+1;
          queue[rear]=i;
          v[i]=1;
      }
    }

 }
}
