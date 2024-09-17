/*Q2. Write a menu driven program for Student management.
Create a class student with data members name, gender, rollNumber(Auto generated) and array to keep marks of three subjects.
Accept every thing from user and Print name, rollNumber, gender and percentage.
In main(), create Student* arr[5] and provide facility for accept, print, search.
Search function returns index of found Student, otherwise returns -1.*/


#include<iostream>
using namespace std;

class Student
{
    const int rollno;
    string name;
    string gender;
    int arr[3];
    double percentage;
    static int auto_rollno;

public:    
Student(): rollno(++auto_rollno)
{
    cout<<"Inside parameterless ctor student"<<endl;
    name="";
    gender="";
    percentage=0;
}

Student(string n, string g, double p): rollno(++auto_rollno)
{
    name=n;
    gender=g;
    percentage=p;
}
void accept_student()
{
    cout<<"Enter name-"<<endl;
    cin>>name;
    cout<<"Enter gender-"<<endl;
    cin>>gender;
    cout<<"Enter Percentage-"<<endl;
    cin>>percentage;

}

void display_student()
{   
    cout<<"Rollno-"<<rollno<<endl;
    cout<<"Name-"<<name<<endl;
    cout<<"Gender-"<<name<<endl;
    cout<<"percentage-"<<endl;
}

};

 int Student::auto_rollno=1;

int main()
{
    
    return 0;

}