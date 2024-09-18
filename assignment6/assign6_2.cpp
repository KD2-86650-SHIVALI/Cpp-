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
        cout << "Employee info-" << id << salary << endl;
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
        cout << "Bonus is-" << bonus;
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

int main()
{

    // Salesman s1;
    // s1.accept();
    // s1.display();
    // return 0;
    SalesManager s;
    s.accept();
    s.display();
    
}