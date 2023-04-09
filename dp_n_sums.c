#include<stdio.h>
#include<stdlib.h>
int sums(int n ,int s,int a[])
{
    int dp[s+1][n],i,j,x,y;
    for(i=0;i<n;i++)
    {
        dp[0][i]=1;
    }
    for(i=1;i<s+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i-a[j]>=0)
            {
                x=dp[i-a[j]][j];
            }
            else{
                x=0;
            }
            if(j>=1)
            {
                y=dp[i][j-1];
            }
            else{
                y=0;
            }
            dp[i][j]=x+y;
        }
    }
    return dp[s][n-1];
}
int main()
{
    int n,s,i;
    scanf("%d",&n);
    scanf("%d",&s);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p=sums(n,s,a);
    printf("%d",p);
    return 0;
}
