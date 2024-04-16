#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<sum+i*i<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}