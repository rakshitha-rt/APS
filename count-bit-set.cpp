#include<iostream>
#include<bitset>
using namespace std;
int countSetBits(int n)
{
    if (n == 0)
        return 0;
  
    else
        return (n & 1) + countSetBits(n >> 1);
}
  
int main()
{
    int n;
    cin>>n;    
    cout<<countSetBits(n);
    return 0;
}