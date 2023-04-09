#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<stdlib.h>
void array(int n,int [n][n]);
void paths(int n,int [],int[n][n],int s);
void distance(int n,int [],int [n][n],int s);
void solve( int n,int a[n][n],int path[n],int dist[n],int s,int so[n]);
int min(int n,int dist[n],int so[n]);
int main()
{
    int n ,s;
    printf("Enter the number of vertices");
    scanf("%d",&n);
    int a[n][n],path[n],dist[n],so[n];
    scanf("%d",&s);
    array(n,a);
    paths(n,path,a,s);//intialization;
    distance(n,dist,a,s);//intialization;
    int k;

   // for(k=0;k<n;k++)
    {
     solve(n,a,path,dist,s,so);
     //printf("happening!!");

    }
    for(int i=0;i<n;i++)
     {
        printf(" %d ",path[i]);
     }
}
void array(int n,int a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void paths(int n,int path[n],int a[n][n],int s)
{
 int j;
for(j=0;j<n;j++)
{
    path[j]=s;
}
}

void distance(int n,int dist[n],int a[n][n],int s)
{
    int j;
for(j=0;j<n;j++)
{
    dist[j]=a[s][j];
}
}

void solve(int n,int a[n][n],int path[n],int dist[n],int s,int so[n])
{

   int index= min(n,dist,so);
//temp is the minimum value,index stores the index of the min value;
 so[index]=1;
int tdist=dist[index];
int j;
for(j=0;j<n;j++)
{
    if(so[j]==0)
    {
if(a[index][j]+tdist<dist[j])
{
    dist[j]=a[index][j]+tdist;
    path[j]=index;
}
else
{
dist[j]=dist[j];
}
    }
}
}

int  min(int n,int dist[n],int so[n])
{
    int i,temp=999999,index=0;
for(i=0;i<n;i++)
{
    if(so[i]!=1)
    {
       if(temp>dist[i])
    {
index=i;
    }
    }
}
printf("%d",index);
return index;
}



