/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called printOnConsole() displays the two totals and number of paying as well as non */

#include<iostream>
using namespace std;

class tollbooth
{
    unsigned int count;
    double amount;
    int pcar;
    int npcar;
public:
tollbooth()
{
    count=0;
    amount=0;
    pcar=0;
    npcar=0;
}
void payingCar()
{
    count=count+1;
    amount=amount+0.50;
    pcar++;
}
void nopayCar()
{
    npcar=npcar+1;
    count=count+1;
}
void printOnConsole()
{
    cout<<"Total number of car  passed"<<count<<endl;
    cout<<"Total amount"<<amount<<endl;
    cout<<"Total paying cars"<<pcar<<endl;
    cout<<"Total non-paying cars"<<npcar<<endl;

}

};

int main()
{
    tollbooth t1;
    int choice;


    do
    {
        cout<<"0.Exit"<<endl;
        cout<<"1.paying cars"<<endl;
        cout<<"2.non paying cars"<<endl;
        cout<<"Enter your choice-"<<endl;
        cin>>choice;


        switch (choice)
        {


        case 0: 
                cout<<"byyeeee";
                
            break;           
        case 1: 
                t1.payingCar();
                t1.printOnConsole();

            break;
        case 2: 
                t1.nopayCar();
                t1.printOnConsole();
                
            break; 
        
        
        default:
                cout<<"Invalid Choice"<<endl;
            break;
        }
    }while(choice!=3);
    return 0;
}

