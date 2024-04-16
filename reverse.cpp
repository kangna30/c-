#include<iostream>
using namespace std;
int main()
{
    int i,j,a=25;
    for(int i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<a;
            a--;
        }
        cout<<endl;
    }
    return 0;
}