#include<iostream>
#include<string.h>
using namespace std;
int fib_help(int n,int * a)
{
    if(n<=1)
    {
        return n;
    }
    if(a[n]!=-1)
    {
        return a[n];
    }
    int x1=fib_help(n-1,a);
    int x2=fib_help(n-2,a);
    a[n]=x1+x2;
    return a[n];

}
int fibo(int n)
{
    int *a=new int[n+1];

    for(int i=0;i<=n;i++)
    {
        a[i]=-1;
    }
    fib_help(n,a);
}
int main()
 {
    int n;
    cin>>n;
    cout<<fibo(n);
return 0;
}