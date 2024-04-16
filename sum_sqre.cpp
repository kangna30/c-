#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=i*i;
        cout<<sum<<endl;
    }
    return 0;
}