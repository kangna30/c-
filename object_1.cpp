#include<iostream>
using namespace std;

class Student
{
    private:
        int a;
        int b;
        int c;


public:
    int d;
    int e;
    void setdata(int a1,int b1,int c1);
    void showdata()
    {
        cout<<"data of a"<<a<<endl;
        cout<<"data of b"<<b<<endl;
        cout<<"data of c"<<c<<endl;
        cout<<"data of d"<<d<<endl;
        cout<<"data of e"<<e<<endl;
    }
};
void Student::setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Student c;
    c.d=40;
    c.e=50;
    c.setdata(10,20,30);
    c.showdata();
    return 0;

}