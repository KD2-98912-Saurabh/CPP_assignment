#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter Day : ";
        cin >> day;

        cout << "Enter Month : ";
        cin >> month;

        cout << "Enter Year : ";
        cin >> year;
    }

    void printDateOnConsole()
    {
        cout << "Date : "
             << day << "/"
             << month << "/"
             << year << endl;
    }

    bool isLeapYear()
    {
        if(year % 400 == 0)
            return true;
        else if(year % 100 == 0)
            return false;
        else if(year % 4 == 0)
            return true;
        else
            return false;
    }
};

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

    d.initDate();

    while((choice = menuList()) != 0)
    {
        switch(choice)
        {
            case 1:
                d.acceptDateFromConsole();
                break;

            case 2:
                d.printDateOnConsole();
                break;

            case 3:
                if(d.isLeapYear())
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