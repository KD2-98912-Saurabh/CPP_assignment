#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(Date *ptr)
{
    ptr->day = 1;
    ptr->month = 1;
    ptr->year = 2000;
}

void acceptDateFromConsole(Date *ptr)
{
    cout << "Enter Day : ";
    cin >> ptr->day;

    cout << "Enter Month : ";
    cin >> ptr->month;

    cout << "Enter Year : ";
    cin >> ptr->year;
}

void printDateOnConsole(Date *ptr)
{
    cout << "Date : "
         << ptr->day << "/"
         << ptr->month << "/"
         << ptr->year << endl;
}

bool isLeapYear(Date *ptr)
{
    if(ptr->year % 400 == 0)
        return true;
    else if(ptr->year % 100 == 0)
        return false;
    else if(ptr->year % 4 == 0)
        return true;
    else
        return false;
}

int menuList()
{
    int choice;

    cout << "\n----- MENU -----\n";
    cout << "1. Accept Date\n";
    cout << "2. Print Date\n";
    cout << "3. Check Leap Year\n";
    cout << "0. Exit\n";
    cout << "Enter Choice : ";
    cin >> choice;

    return choice;
}

int main()
{
    Date d;
    int choice;

    initDate(&d);

    while((choice = menuList()) != 0)
    {
        switch(choice)
        {
            case 1:
                acceptDateFromConsole(&d);
                break;

            case 2:
                printDateOnConsole(&d);
                break;

            case 3:
                if(isLeapYear(&d))
                    cout << "Leap Year\n";
                else
                    cout << "Not a Leap Year\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }
    }

    return 0;
}