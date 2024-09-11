#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day = 11;
    ptrDate->month = 9;
    ptrDate->year = 2024 ;
}
void acceptDate(struct Date* ptrDate) {
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);
    
    printf("Enter month: ");
    scanf("%d", &ptrDate->month);
    
    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
}

void displayDate(struct Date* ptrDate) {
    printf("Date: %d-%d-%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}


int menu()
{
    int choice;
    printf("0. EXIT") ;
    printf("1. ADD TIME");
    printf("2. DISPLAY TIME");
    printf("3. INIT TIME");
    printf("Enter your choice - ");
    scanf( "%d", &choice);
    return choice;
}

int main()
{
    int choice;
    struct Date d1; 
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 3:
            initDate(&d1);

            break;
        case 1:
            acceptDate(&d1);
            break;

        case 2:
            displayDate(&d1);
            break;
        
        default:
        printf("Invalid choice...");
            break;
        }
    }
    return 0;
}