#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define inf 99999
int main()
{
int n;
scanf("%d",&n);
int mm=pow(2,n);
int dp[mm];
dp[0]=0;
int i,j;
int cost[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&cost[i][j]);
    }
}
int min(int n,int k)
{
if(n<k)
{
    return n;
}
else{
    return k;
}
}
unsigned int countbit(unsigned int kk)
{
    unsigned int count =0;
    while(kk){
        count+=kk&1;
        kk>>=1;
    }
    return count;
}
int BitSet(int n, int k)
{
    if (n & (1 << k))
        return 1;
    else
        return 0;
}
for(i=1;i<n;i++)
{
    dp[i]=inf;
}
int mask;
for(mask=0;mask<mm;mask++)
{
    int x=countbit(mask);
    for(j=0;j<n;j++)
    {
        if(BitSet(mask,j)==0)
        {
            dp[mask|1<<j]=min(dp[mask|1<<j],dp[mask]+cost[x][j]);
        }
    }
}
printf("%d",dp[mm-1]);
return 0;
}