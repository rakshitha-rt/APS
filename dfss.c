#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void input(int n,int m[n][n]);
void dfs(int n,int v[n],int m[n][n],int source);
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
    dfs(n,v,m,source);
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
void dfs(int n,int v[n],int m[n][n],int source)
{
    int i,j;
    for(i=0;i<n;i++)

    {
        if(m[source][i]==1&&v[i]==0)
        {
            printf("c=%d\n",i);
            v[i]=1;
            dfs(n,v,m,i);
        }
    }
}


/*
4
0

0
1
1
0


0
0
0
0

0
1
0
1


0
1
0
0




0c*/
