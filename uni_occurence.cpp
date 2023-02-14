#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int in=0,flag=0;
    int vis[n],count[in];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i]==a[j] && vis[j]==0)
            {
                count[in]++;
                vis[j]=1;
                flag=1;
            }
        }
        if(flag==1)
        {
            in++;
        }
    }
    for(int i=0;i<in;i++)
    {
        cout<<count[i]<<" ";
    }
    for(int i=0;i<in-1;i++)
    {
        for(int j=i+1;j<in;j++)
        {
            if(count[i]==count[j])
                cout<<"false";
        }
        
    }
    
    cout<<"true";
}