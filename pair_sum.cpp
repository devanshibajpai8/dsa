#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"enter the integer:";
    cin>>s;
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the pairs are:";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==s)
            {
                cout<<a[i]<<" "<<a[j]<<"\n";
            }
        }
    }
}