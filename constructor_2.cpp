#include<iostream>
using namespace std;
float area;
class circle
{
    
    int r=1;
    public:
    circle()
    {
        area=3.14*r*r;
        cout<<"The area is:"<<area<<endl;
    };
 ~circle()
    {
        cout<<"The area is:"<<area<<endl;
    }    
};
int main()
{
    circle area;
}