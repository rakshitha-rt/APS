#include<iostream>
using namespace std;

int cat_cal(int n)
{
int a[n],i;
a[0]=a[1]=1;
for(i=2;i<=n;i++)
{
    a[i] = 0;
        for (int j = 0; j < i; j++)
        {
            a[i] += a[j] * a[i - j - 1];
        }
            
    }
    return a[n];
}


int main()
{
    int n;
    cin>>n;
    cout<<cat_cal(n);
    return 0;
}