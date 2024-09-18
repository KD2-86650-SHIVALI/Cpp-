#include <iostream>
using namespace std;

class Employee
{
    int id;
    double salary;

public:
    Employee()
    {
    }
    Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }
    
    void setid(int id)
    {
        this->id = id;
    }
    int getid(int id)
    {
        return id;
    }
    void setsalary(int salary)
    {
        this->salary = salary;
    }
    double getsalary(int salary)
    {
        return salary;
    }

    virtual void accept()
    {
        cout << "Enter id-" << endl;
        cin >> id;
        cout << "Enter salary-" << endl;
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Employee info-" <<endl;
        cout<<"id-"<<id<<endl;
        cout<<"salary-"<<salary<<endl;
    }

};

class manager : virtual public Employee
{

    double bonus;

public:
    manager()
    {
    }
    manager(int id, double salary, double bonus) : Employee(id, salary)
    {
        this->bonus = bonus;
        // this->id=id; id and salary are protected
        // this->salary;
    }
    void setbonus(double bonus)
    {
        this->bonus = bonus;
    }
    double getbonus(double bonus)
    {
        return bonus;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
    }

protected:
    void acceptManager()
    {
        cout << "Enterr bonus-" << endl;
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus is-" << bonus<<endl;
    }
};

class Salesman : virtual public Employee
{

    double commission;

public:
    Salesman()
    {
        commission = 0;
    }
    Salesman(int id, double salary, double commission) : Employee(id, salary)
    {
        cout << "Salesman int double double" << endl;
        this->commission = commission;
        // this->id=id;   // id and salarry are not protected so not
        //  accessible in derived class
        // this->salary;
    }

    void setcommission(double commission)
    {
        this->commission = commission;
    }

    double getcommission(double commission)
    {
        return commission;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }

protected:
    void acceptSalesman()
    {
        cout << "Enterr Commission is-" << endl;
        cin >> commission;
    }

    void displaySalesman()
    {
        cout << "commission-" << commission << endl;
    }
};

class SalesManager : public manager, public Salesman
{

public:
    SalesManager()
    {
        cout << "Salesmanagerr()" << endl;
    }

    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Salesmanager(int,double, double , double)" << endl;
    }
    void accept()
    {
        Employee :: accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

// int main()
// {

//     // Salesman s1;
//     // s1.accept();
//     // s1.display();
//     // return 0;

//     // SalesManager s;
//     // s.accept();
//     // s.display();

// }

    int menu()
{
    int choice = 0;

    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Manager" << endl;
    cout << "2. Add Salesman " << endl;
    cout << "3.Accept SalesManager" <<endl;
    cout << "4.Display Count of all employees" <<endl;
    cout << "5.Display All Manager" <<endl;
    cout << "6. Display All Salesman" << endl;
    cout << "7. Display Salesmanager " << endl;
    cin >> choice;
    return choice;
}

int main(){
    int choice = 0;

    Employee *arr[3];
    int index = 0;

     while((choice = menu())!=0)
    {
        switch (choice)
        {
            case 1:
            arr[index] = new manager;
            arr[index]->accept();
            index++;
            break;
            case 2:

            arr[index] = new Salesman;
            arr[index]->accept();
            index++;

            break;

            case 3:
            arr[index] = new SalesManager;
            arr[index]->accept();
            break;

            case 4:
            cout<<"Count of all Employess : "<<index<<endl;
            break;

            case 5:
            cout<<"Displaying all Manager"<<endl;
            for(int i = 0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(manager))
                {
                    arr[i]->display();

                }

                else
                {
                    cout<<"No Manager Found..."<<endl;

                }
            }

            break;

            case 6:
            cout<<"Displaying all SalesMan"<<endl;
            for(int i = 0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(Salesman))
                {
                    arr[i]->display();

                }

                else
                {
                    cout<<"No Salesman Found..."<<endl;

                }
            }

            break;

             case 7:
            cout<<"Displaying all Salesmanager"<<endl;
            for(int i = 0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(SalesManager))
                {
                    arr[i]->display();

                }

                else
                {
                    cout<<"No SalesManager Found..."<<endl;
                }
            }

            break;


            default:
            cout<<"Invalid choice"<<endl;
            break;



        
        
        
        
        
        
        
        }       




}
return 0;
}