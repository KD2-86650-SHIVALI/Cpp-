/*Q1. Write a class for Time and provide the functionality Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create an array dynamically of Time * of size 5. Accept the values and display.*/

#include<iostream>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;

public:
Time()
{
    hour=0;
    minute=0;
    second=0;
}

Time(int hour, int minute, int second)
{
    this->hour=hour;
    this->minute=minute;
    this->second=second;

}
void accept_time()
{
    cout<<"Enter hrs mins and secs-"<<endl;
    cin>>hour>>minute>>second;
}

void print_time()
{

    cout<<"Time is -"<<hour<<":"<<minute<<":"<<second<<endl;

}

void sethour(int h)
{
    hour=h;
}
void setminute(int m)
{
    minute=m;
}void setsecond(int s)
{
    second=s;
}
int gethour(int h)
{
    return h;

}

int getminute(int m)
{
    return m;

}
int getsecond(int s)
{
    return s;
        
}

};

int main()
{
    
    Time *arr=new Time[5];
for (int i = 0; i < 5; i++)
{
       
        arr[i].accept_time();
        arr[i].print_time();
        }

        delete[] arr;
        arr = NULL;
     return 0;



}