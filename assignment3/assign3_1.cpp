#include<iostream>
using namespace std;

class volume
{
 int length;
 int width;
 int height;

public:
volume()
{
    length=2;
    width=3;
    height=5;
}

volume(int a, int b, int c)
{
    this->height=a;
    this->width=b;
    this->length=c;
}

volume(int value)
{
    this->height=value;
}

void cal_volume_default()
{
    int volume=length*width*height;
    cout<<"volume of box="<<volume<<endl;
}

void cal_volume_samevalues()
{
    int volume=length*width*height;
    cout<<"volume of box="<<volume<<endl;
}
void cal_volume_diffvalues()

{
    int volume=length*width*height;
    cout<<"volume of box="<<volume<<endl;

}

};

// int main()
// {
//     volume v1;
//     v1.cal_volume_default();
//     volume v2(5,5,5);
//     v2.cal_volume_samevalues();
//     volume v3(5,6,7);
//     v3.cal_volume_diffvalues();
    


//     return 0;
// }

int main()
{
    int choice;
    volume v1;
    volume v2(5,5,5);
    volume v3(5,6,7);
    do {
    
        cout << "0. Exit"<<endl;
        cout << "1. Calculate Volume with default values"<<endl;
        cout << "2. Calculate Volume with the same value"<<endl;
        cout << "3. Calculate Volume with different values"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
        cout<<"exit"<<endl;
            break;


        case 1:
        v1.cal_volume_default();
            break;
        
        case 2:
        v2.cal_volume_samevalues();
            break;

         case 3:
        v3.cal_volume_diffvalues();
            break;   

        default:
        cout<<"byee"<<endl;
            break;
        }
    
}while(choice != 4);

return 0;

}
