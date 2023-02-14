#include<iostream>
using namespace std;
int main()
{
    int n;
    int mask=0;
    int ans;
    cin>>n;
    int p=n;
    if(n==0)
    {
        return 1;
    }
    while(p!=0)
    {
        mask=(mask<<1) | 1;
        p=p>>1;
    }
    ans=(~n) & mask;
    cout<<ans;

}