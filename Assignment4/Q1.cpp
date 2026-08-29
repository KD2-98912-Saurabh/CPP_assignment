#include<iostream>
using namespace std;

class Time
{
private:
    int hours;
    int mins;
    int secs;

public:

    Time() : hours(0), mins(0), secs(0)
    {
    }

    Time(int hour, int mins, int secs)
        : hours(hour), mins(mins), secs(secs)
    {
    }

    void setHour()
    {
        int hours;
        cout << "Enter hours : ";
        cin >> hours;
        this->hours = hours;
    }

    void setMins()
    {
        int mins;
        cout << "Enter mins : ";
        cin >> mins;
        this->mins = mins;
    }

    void setSecs()
    {
        int secs;
        cout << "Enter secs : ";
        cin >> secs;
        this->secs = secs;
    }

    int getHour()
    {
        return hours;
    }

    int getMins()
    {
        return mins;
    }

    int getSecs()
    {
        return secs;
    }

    void dispAllHours()
    {
        cout << "Hour : " << this->hours << endl;
    }

    void displayTime()
    {
        cout << this->hours << ":"
             << this->mins << ":"
             << this->secs << endl;
    }
};

int main()
{
    int count = 0;
    int n;
    int choice;
    int c = 0;

    cout << "Enter number of objects you want to create : ";
    cin >> n;

    Time *arr = new Time[n];

    do
    {
        cout << "\n1. Add Time" << endl;
        cout << "2. Display Time" << endl;
        cout << "3. Display All Hours" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Add time : .............................." << endl;

                if(count < n)
                {
                    arr[count].setHour();
                    arr[count].setMins();
                    arr[count].setSecs();

                    count++;
                }
                else
                {
                    cout << "All objects are filled!" << endl;
                }

                break;
            }

            case 2:
            {
                cout << "Display Time........................." << endl;

                c = 0;

                while(c < count)
                {
                    arr[c].displayTime();
                    c++;
                }

                break;
            }

            case 3:
            {
                cout << "Display ALL hours........................." << endl;

                c = 0;

                while(c < count)
                {
                    arr[c].dispAllHours();
                    c++;
                }

                break;
            }

            case 0:
            {
                cout << "Exiting..." << endl;
                break;
            }

            default:
            {
                cout << "Invalid choice!" << endl;
            }
        }

    } while(choice != 0);

    delete[] arr;
  arr=nullptr;

    return 0;
}