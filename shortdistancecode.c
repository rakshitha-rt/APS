#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input(int v,int a[v][v],int visted[v]);
void solve();
void vists();
int main()
{
    int e,v;
    printf("input the number of edges\n");
    scanf("%d",&e);
printf("input the number of vertices\n");
scanf("%d",&v);
int a[v][v],visted[v];
    input(v,a,visted);
    int s;//source
    scanf("%d",&s);
    int path[v];
    solve(v,a,s,path,visted);
    return 0;
}
void input(int v,int a[v][v],int visted[v])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<v;i++)
    {
        visted[i]=0;
    }

}/*
void solve(int v,int a[v][v],int s,int path[v],int visted[v])
{
    static int sum=0;
for(int i=0;i<v;i++)
{
    path[i]=a[s][i];
}
int temp=99999,index=0;
for(int i=0;i<v;i++)
{
if(temp>path[i]&&visted[i]!=2)
{
    index=i;
    temp=path[i];
}
}
    if(visted[index]==0)
    {
      sum=sum+temp;
printf("%d",index);
    }
    else if(visted[index]==1)
        {
        visted[index]++;
        }

solve(v,a,index,path,visted);
}


*/

void solve(int v,int a[v][v],int s,int path[v],int visted[v])
{
    int j;
    static int sum=0,t=99999;
for(int i=0;i<v;i++)
{
if(temp>path[i])
{
    index=i;//0
    temp=path[i];0;
    int vistdouble[v];
    for(int i=0;i<v;i++)
    {
        vistdouble[i]=0;
    }
for(int i=0;i<v;i++)
{
    path[i]=a[s][i];
}
int temp=99999,index=
}
}

    if(visted[index]==0)
    {
      sum=sum+temp;
printf("%d",index);
    }

    else if(visted[index]==1)
    {

 for(j=0;j<v;j++)
 {
if(a[index][j]<t&&j!=index)
{
t=a[index][t];
}
 }

        }

solve(v,a,index,path,visted);
}

void vists(int s,int index,int v,int vistdouble[v])
{
vistdouble[s]=1;
vistdouble[index]=1;

}


