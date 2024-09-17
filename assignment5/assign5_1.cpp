#include<iostream>
using namespace std;

class Date
{
int day;
int month;
int year;

public:

Date()
{
    cout<<"Inside parameterless ctor of date"<<endl;
    day=0;
    month=0;
    year=0;
}

Date(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;
}

void accept_date()
{
    cout<<"Enter day month and year-"<<endl;
    cin>>day>>month>>year;
}
void display_date()
{
    cout<<"Date is :"<<day<<":"<<month<<":"<<year<<endl;
}
};

class employee
{
    string name;
    string add;
    Date dob;
 
 public:

employee()
{   
    cout<<"inside parameterless employee ctor"<<endl;
    name="";
    add="";
}
employee(string n, string a, int day, int month, int year):dob(day, month, year)

{
    name=n;
    add=a;
    day=day;
    month=month;
    year=year;

}

void accept_emp()
{
    cout<<"Enter name-"<<endl;
    cin>>name;
    cout<<"Enter add-"<<endl;
    cin>>add;
    dob.accept_date();

}

void display_emp()
{
    cout<<"Name-"<<name<<endl;
    cout<<"Address-"<<add<<endl;
    dob.display_date();
}

};
int main()
{
 Date d1;
 employee e1;
e1.display_emp();
e1.accept_emp();
e1.display_emp();

employee e2;
employee e2("Vaibhav","pune",30, 12, 1998);
e2.display_emp();


    return 0;
}