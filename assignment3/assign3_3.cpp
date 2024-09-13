/*Q3. Write a class Address with data members (string building, string street, string city ,int pin) Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.*/

#include<iostream>
using namespace std;

class address
{
string building;
string street;
string city;
int pin;

public:

address()
{
    building="Sunbeam";
    street="Near ST Stand";
    city="karad";
    pin=415110;

}
address(string a, string b, string c, int d)
{
    building=a;
    street=b;
    city=c;
    pin=d;
}

void Accept()
{
    cout<<"Enter building"<<endl;
    cin>>building;
    cout<<"Enter street"<<endl;
    cin>>street;
    cout<<"Enter city"<<endl;
    cin>>city;
    cout<<"Enter pin"<<endl;
    cin>>pin;

    //cout<<"Enter details-";
    //cin>>building<<street<<city<<pin;
    
}

void Display()
{
    cout<<"Address is :"<<building<<street<<city<<pin<<endl;
}

void setbuilding(string p)
{
    this->building=p;
}

string getbuidlding()
{
    return building;
}

void setstreet(string q)
{
    this->street=q;
}

string getstreet()
{
    return street;
}


void setcity(string r)
{
    this->city=r;
}

string getcity()
{
    return city;
}


void setpin(int t)
{
    this->pin=t;
}

int getpin()
{
    return pin;
}


};
int main()
{

    address a1;
    a1.Display();

    address("hiratara","North Shivaji Nagar","Sangli",416416);
    a1.Display();

    a1.Accept();
    a1.Display();

    cout<<"Set Get address is:"<<endl;
    a1.setbuilding("Vaibhav_Society");
    cout<<a1.getbuidlding()<<endl;

    a1.setstreet("Karve Nagar");
    cout<<a1.getstreet()<<endl;

    a1.setcity("Pune");
    cout<<a1.getcity()<<endl;

    a1.setpin(412410);
    cout<<a1.getpin()<<endl;



    return 0;
}