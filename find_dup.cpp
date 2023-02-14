#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the array:";
    int a[n],ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    for(int i=0;i<n;i++)
    {
        ans=ans^i;
    }
    cout<<"The duplicated element is:"<<ans;
}