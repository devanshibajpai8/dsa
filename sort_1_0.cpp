#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the array with only 1's and 0's:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int left=0,right=n-1;
    while(left<right )
    {
        while(a[left]==0 && left<right)
        {
            left++;
        }
        while(a[right]==1 && left<right)
        {
            right--;
        }
        if(a[left]==1 && a[right]==0 && left<right)
        {
        swap(a[left],a[right]);
        left++;
        right--;
        }
    }
    for(int i=0;i<n;i++)
    {
    cout<<a[i];
    }
}