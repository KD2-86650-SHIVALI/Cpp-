#include <iostream>
using namespace std;

class date
{
    int day;
    int month;
    int year;

public:
    void initdate()
    {
        day = 11;
        month = 11;
        year = 2000;
        //cout << "Initial Date" << ":" << day << "-" << month << "-" << year << endl;
    }
    void acceptdate()
    {
        cout << "Enter Day Month and Year-";
        cin >> day >> month >> year;
    }
    void displaydate()
    {
        cout << "Date is(" << day << "/" << month << "/" << year << endl;
    }
};

int menu()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "2.Acceptdate" << endl;
    cout << "3.displaydate" << endl;
    cout << "Enter choice-";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    date d1;
    d1.initdate();
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case2:
            d1.acceptdate();
            break;

        case3:
            d1.displaydate();
            break;

        default:
            cout << "invalid Choice...";
            break;
        }
    }
    return 0;
}

// int main(){
//     date d1;
//     d1.acceptdate();
//     d1.displaydate();
//     d1.initdate();

//     return 0;
// }