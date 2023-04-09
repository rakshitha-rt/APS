#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//making a structure;
struct g
{
     int u;
    int v;
    int w;

};
typedef struct g graph;
void input( graph GR[20],int n);
void sort(graph GR[20],int n);
void arr(int,int []);
int find(int,int,int []);
void Union(int ver,int a[ver],int ,int);
void print(int ver,int a[]);
int main()
{
 graph GR[20];
int n,ver;
int s=0;
int uu,vv;
scanf("%d %d",&n,&ver);
int a[ver];
int y;
input(GR,n);
scanf("%d %d",&uu,&vv);
sort(GR,n);
arr(ver,a);
for(y=1;y<=ver;y++)
{
   int i= find(GR[y].u,ver,a);
int j= find(GR[y].v,ver,a);
if(i!=j)
{
     s=s+GR[y].w;
    if(GR[y].u==uu||GR[y].v==uu)
    {
        printf("s=%d",s);
    }

  if(GR[y].u==vv||GR[y].v==vv)
    {
        printf("s=%d",s);
    }

    Union(ver,a,i,j);
}
}
return 0;
}
void input( graph GR[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&GR[i].u);
        scanf("%d",&GR[i].v);
        scanf("%d",&GR[i].w);
    }
}
void sort(graph GR[20],int n)
{
    int i,j;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(GR[j].w>GR[j+1].w)
            {
                graph temp=GR[j];
                GR[j]=GR[j+1];
                GR[j+1]=temp;
            }
        }
    }
}


void arr(int ver,int a[ver])
{
    int i,l=0;
    for(i=0;i<ver;i++)
    {
        a[i]=l;
        l++;
    }
}
int find(int k,int ver,int a[ver])
{
    return a[k];

}
void Union(int ver,int a[ver],int i,int j)
{
int k;
for(k=0;k<ver;k++)
{
    if(a[k]==i)
    {
        a[k]=j;
    }
}
}
void print(int ver,int a[ver])
{
    int i;
    for(i=0;i<ver;i++)
    {
        printf("%d",a[i]);
    }
}
