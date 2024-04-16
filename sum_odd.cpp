#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    cout<<"Your sum :"<<sum<<endl;
    return 0;
}