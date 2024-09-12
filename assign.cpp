#include<iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;

void initdate()
{
    day=5;
    month=11;
    year=2000;
}    
void acceptdateonconsole()
{
    cout<<"Enter Day Month and Year"<<endl;
    cin>>day>>month>>year;
}
void displaydatefromconsole()
{
    cout<<"Date is:"<<day<<"-"<<month<<"-"<<year<<endl;
}


};

int menu()
{
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.initdate"<<endl;
    cout<<"2.acceptdatefromconsole"<<endl;
    cout<<"3.displaydateonconsole"<<endl;
    cout<<"enter your choice-"<<endl;
    cin>>choice;
    return choice;
}

int main()
{

int choice;
struct date d1;
do
{
 int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.initdate"<<endl;
    cout<<"2.acceptdatefromconsole"<<endl;
    cout<<"3.displaydateonconsole"<<endl;
    cout<<"enter your choice-"<<endl;
    cin>>choice;
    return choice;

switch (choice)
    {
    case 1:
    d1.initdate();
        break;
    
    case 2:
    d1.acceptdateonconsole();
        break;

    case 3:
    d1.displaydatefromconsole();
        break;    

    default:
    cout<<"invalid Choice...";
        break;
    }    


}while (choice != 4);

return 0;
}

// int main()
// {

// int choice;
// struct date d1;

// while((choice = menu())!=0)
// {
//     switch (choice)
//     {
//     case1:
//     d1.initdate();
//         break;
    
//     case2:
//     d1.acceptdateonconsole();
//         break;

//     case3:
//     d1.displaydatefromconsole();
//         break;    

//     default:
//     cout<<"invalid Choice...";
//         break;
//     }
// }


// return 0;
// };