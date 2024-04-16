#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    char bname[20];
    int innings,notout,runs;
    int batavg;
    void calcavg()
    {
        batavg=runs/(innings-notout);
    }
    public:
    readdata();
    displaydata();
}
    void batsman::readdata()
    {
        cout<<"Enter the bats man code:";
        cin>>bcode;
        cout<<"Enter the bname:";
        gets(bname);
        cout<<"Enter the innings,notout,runs:";
        cin>>innings>>notout>>runs;
        calcavg();
    }
    void batsman::displaydata()
    {
        cout<<"batsman code : "<<bcode<<endl<<"bname : "<<bname<<endl<<"Innings : "<<innings<<endl<<"notout : "<<notout<<endl<<"runs : "<<runs<<endl<<"bat avg:"<<batavg;

    }
        int main()
        {
            batsman obj;
            obj.readdata();
            obj.displaydata();
            return 0;
        }













