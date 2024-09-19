#include <iostream>
using namespace std;

enum AccountType
{
    Savings = 1,
    Current,
    Dmat
};


class InSufficientFundsException
{
    int accno;
    double CurrentBalance;
    double WithdrawAmout;
    string message;

public:
InSufficientFundsException()
{

}
InSufficientFundsException(double CurrentBalance, double withdrawAmount)
{

    this->CurrentBalance=CurrentBalance;
    this->WithdrawAmout=withdrawAmount;
} 

InSufficientFundsException(string messages)
{
    this->message=message;
}

void display()
{
    cout<<message<<endl;
        cout<<"Current Balance="<<endl;
        cout<<"Withdrawal amount"<<endl;
}


};


class BankAccount
{
    int accono;
    AccountType type;
    double balance;

public:
    BankAccount()
    {
        balance=0;
    }

    BankAccount(int accono, AccountType, double balance)
    {
        this->accono = accono;
        this->balance = balance;
    }

    double deposit()
    { 
        double amount;
        cout<<"Enter amount to deposite: "<<endl;
        cin>>amount;
        if (amount<0)
        {
            throw InSufficientFundsException("Amount cannot be negative");
        }
        else{
        balance=balance+amount;
        cout<<"Amount deposited succefully"<<endl;
        }
        }
       



    double withdraw()
{
        double amount;
        cout<<"Enter amount of withdraw: "<<endl;
        cin>>amount;
        if(amount>balance)
        {
       throw InSufficientFundsException("Withdrawal amount is greater than current blanace");
        }
        else{
             balance=balance-amount;
        cout<<"Withdrawal Successfull"<<endl;;
        }
}
void acceptBankAccount()
{
    cout<<"Enter Account number and balance-"<<endl;
    cin>>accono>>balance;
}

void Accept()

{  
    cout << "1.Saving" << endl;
    cout << "2.Current" << endl;
    cout << "3.Dmat" << endl;
    cout << "Enter the choice of account" << endl;
    int choice;
    cin >> choice;
    type = AccountType(choice);
     BankAccount::acceptBankAccount();
}


void displayBankAccount()
{
    cout<<"Account details-"<<endl;
    cout<<"Accountno-"<<accono<<endl;
    cout<<"Balance-"<<balance<<endl;
}

void display()
{
    switch (type)
    {
    case Savings:
    {
         cout << "Account Type=" << Savings << endl;
        break;
    }
        
    case Current:
        cout << "Account Type=" << Current << endl;
        break;

    case Dmat:
        cout << "Account Type=" << Dmat << endl;
        break;
    }
   BankAccount:: displayBankAccount();
}

void setBalance(int balance)
    {
        this->balance=balance;
    }
    double getBalance()
    {
        return balance;
    }
};


// int main(){


// BankAccount *bptr =new BankAccount[5];

// BankAccount b;
// b.Accept();
// b.display();

//     return 0;
// }
int menu()
{
    BankAccount *bptr =new BankAccount[5];
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Accept"<<endl;
    cout<<"2.Display"<<endl;
    cout<<"3.deposite"<<endl;
    cout<<"4.withdraw"<<endl;
    cin>>choice;
    return choice;
}





int main()
{

    try
    {
        
    BankAccount *arr[5];
    int index=0;
     int choice;
    while ((choice = menu())!=0)
    switch (choice)
    {
        case 1:
        if (index<5)
        {
        arr[index] = new BankAccount;
          arr[index]->Accept();
             index++;
        }
        break;

        case 2:

        for(int i = 0;i<index;i++)
         arr[i]->display();

        break;

        case 3:
            for(int i = 0;i<index;i++)
                arr[i]->deposit();
        break;
        
        case 4:

            for(int i = 0;i<index;i++)
                arr[i]->withdraw();

        break;

        default:
        break;
    }

    }
    catch( InSufficientFundsException e)
    {
        e.display();
    }
    
    return 0;
}
