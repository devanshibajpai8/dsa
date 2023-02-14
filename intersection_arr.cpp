#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the size of first array:";
    cin>>n;
    cout<<"enter the size of second array:";
    cin>>m;
    int a[n],b[m],vis[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<"The intersecting elements are:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]==a[i] && vis[j]==0)
            {
                cout<<b[j]<<" ";
                vis[j]==1;
                break;
            }
        }
    }
}