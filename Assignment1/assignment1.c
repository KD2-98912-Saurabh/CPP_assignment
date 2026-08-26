#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date : %d/%d/%d\n",
           ptrDate->day,
           ptrDate->month,
           ptrDate->year);
}

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter Day : ");
    scanf("%d", &ptrDate->day);

    printf("Enter Month : ");
    scanf("%d", &ptrDate->month);

    printf("Enter Year : ");
    scanf("%d", &ptrDate->year);
}

int menuList()
{
    int choice;

    printf("\n----- MENU -----\n");
    printf("1. Accept Date\n");
    printf("2. Print Date\n");
    printf("0. Exit\n");
    printf("Enter Choice : ");
    scanf("%d", &choice);

    return choice;
}

int main()
{
    struct Date d;
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

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}