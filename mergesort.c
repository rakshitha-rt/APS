#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void array(int n,int []);
void mergesort(int n,int []);
void merge(int n,int [],int [],int []);
void print(int n,int []);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],aa[n];
    array(n,a);
    mergesort(n,a);
     print(n,aa);
    return 0;
}
void array(int n,int a[n])
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

}
void mergesort(int n,int a[n])
{
    if(n>1)
    {
        int b[n/2],c[n/2],aa[n],i,j=0;
        for(i=0; i<n/2; i++)
        {
            b[i]=a[i];
        }
        for(i=n/2;i<n; i++)
        {
            c[j]=a[i];
            j++;
        }
        n=n/2;
        mergesort(n,b);
      mergesort(n,c);
      merge(n,c,b,aa);
    }
}
void merge(int n,int c[n],int b[n],int aa[n+n-1])
{
int i=0,j=0,k=0;
while(j<n||i<n)
{
    if(b[i]<c[i])
    {
        aa[k]=b[i];
        i++;
    }
    else
    {
        aa[k]=c[j];
        j++;
    }
    k++;
}

}
void print(int n,int b[n])
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("  %d ",b[i]);
    }
    printf("\n");
}

