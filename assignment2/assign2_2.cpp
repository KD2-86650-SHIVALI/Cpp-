#include<iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    int marks;

public:

void initstudent(){
    rollno=0;
    name=" ";
    marks=0;
    cout<<"initial"<<"-"<<rollno<<","<<name<<","<<marks<<endl;

}
void acceptstudent()
{
    cout<<"Enter rollno, name, marks of students"<<endl;
   // getline(cin,name)>>name;
    cin>>rollno>>name>>marks;
}
void displaystudent(){

    cout<<"Student info"<<"-"<<rollno<<","<<name<<","<<marks<<endl;
}

};
int main(){
    
    student s1;
    s1.acceptstudent();
    s1.displaystudent();
    s1.initstudent();
    return 0;

}