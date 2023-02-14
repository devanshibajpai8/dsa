#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int a[n];
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    cout<<"Unique element in the array is:"<<ans;
}