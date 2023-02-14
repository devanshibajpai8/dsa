#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,ans;
    for(int i=0;i<31;i++)
    {
        ans=pow(2,i);
        if(ans==n)
        {
            cout<<"true";
        }
    }
    return 0;
}