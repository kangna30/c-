#include<iostream>
using namespace std;
int main()
{
    int  i,j;
    char a=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            
            cout<<" "<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}