/* Q1. Create a class Date with data memebrs day,month and year. 
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
type Date. 
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should 
be of type date. 
Employee class should be inherited from Person. 
Implement following classes. Test all functionalities in main(). 
(Note - Perform the Association and Inheritance in the above case.) */

#include<iostream>
using namespace std;

class Date{
     int day;
     int month;
     int year;
     public:

     Date(){
        this->day=0;
        this->month=0;
        this->year=0;
     }

     Date(int day,int month, int year){
        this->day=day;
        this->month=month;
        this->year=year;
     }

     void acceptdate(){
        cout<<" Day:Month:Year : ";
        cin>>day>>month>>year;
     }
     void displaydate(){
        cout<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
     }
};
class Person{
    public:
    string name;
    string address;
    Date *birthdate;

    public:
    Person(){
        this->name="";
        this->address="";
        birthdate=NULL;
    }
    Person(string name,string address){
         this->name=name;
         this->address=address;
         birthdate=NULL;

    }
    void acceptperson(){
        cout<<"Enter Name : "; 
        cin>>name;
        cout<<"Enter address : ";
        cin>>address;
    //    if(birthdate !=NULL){
    //     birthdate->acceptdate();
    //    }
    }

    void displayperson(){
       
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        if(birthdate!=NULL)
        {
        cout<<"BirthDate : ";
        birthdate->displaydate();
        }
        

    }
     void acceptdob(){
        birthdate=new Date();
           cout<<"Enter Birthdate : ";
           birthdate->acceptdate();
    }
    ~Person(){
        if(birthdate != NULL){
            
            delete birthdate;
            birthdate=NULL;
        }
    }

};
class Employee:public Person{
    int id;
    int sal;
    string dept;
    Date joining;
   // Date *dob;

    public:

    Employee(){
        this->id=0;
        this->sal=0;
        this->dept="";
     //   dob=NULL;
        
    }
    Employee(int id,int sal){
        this->id=id;
        this->sal=sal;
     //   dob=NULL;
        
    }

    void acceptEmployee(){
        cout<<"******Enter EMPLOYEE DETAILS********"<<endl;
       // Person::acceptperson();
        acceptperson();
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter Salary : ";
        cin>>sal;
        cout<<"Enter Dept ";
        cin>>dept;
        cout<<"Enter joining Date";
        joining.acceptdate();
    }

    void displayEmployee(){
    cout<<"******Employee Details are  *******"<<endl;

        cout<<"_______________"<<endl;
        
       // Person::displayperson();
        displayperson();
        cout<<"Emp id : "<<id<<endl;
        cout<<"Salary : "<<sal<<endl;
        cout<<"Dept : "<<dept<<endl;
        cout<<"joining date : ";
        joining.displaydate();
        cout<<"_______________"<<endl;


    }
};
int main(){
    Employee e1;
    e1.acceptEmployee();
    e1.acceptdob();
    e1.displayEmployee();

     Employee e2;
    e2.acceptEmployee();
    e2.displayEmployee();




}