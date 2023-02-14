#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"enter the array";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    
}
for(int i=0;i<6;i++)
{
    while(i+1<5)
    {
        swap(a[i],a[i+1]);
        i=i+2;
    }
}
for(int i=0;i<5;i++)
{
    cout<<a[i];
}
}
