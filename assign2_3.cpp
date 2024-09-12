#include<iostream>
using namespace std;

namespace Nstudent
{
    class student
    {
        int rollno;
        string name;
        int marks;

    public:

    void acceptinfo()
    {
        cout<<"Enter rollno"<<endl;
        cin>>rollno;
        cout<<"Enter name-"<<endl;
        cin>>name;
        cout<<"Enter marks"<<endl;
        cin>>marks;
    }

    void display()
    {
        cout<<"Student info"<<"-"<<rollno<<","<<name<<","<<marks<<endl;
    }

    };


};
 using namespace Nstudent;
int main()
{
   
    student t1;
    t1.acceptinfo();
    t1.display();
    return 0;
}