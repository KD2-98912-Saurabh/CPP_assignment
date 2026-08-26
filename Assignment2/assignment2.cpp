#include<iostream>
using namespace std;
class Tollbooth
{
    private:
    unsigned int totalCars;
    double totalCash;

    public:

    Tollbooth(void)
    {
        cout<<"Tollbooth(void)"<<endl;
        this->totalCars = 0;
        this->totalCash = 0;
    }
 
    void payingCar(void)
    {
        this->totalCars++;
        this->totalCash = this->totalCash + 0.50;
    }

    void nopayCar(void)
    {
        this->totalCars++;
    }
   
    void printOnConsole(void)
    {
        unsigned int payingCars;
        unsigned int nonPayingCars;

        payingCars = this->totalCash / 0.50;
        nonPayingCars = this->totalCars - payingCars;

        cout<<"Total Cars: "<<this->totalCars<<endl;
        cout<<"Total Cash: "<<this->totalCash<<endl;
        cout<<"Paying Cars: "<<payingCars<<endl;
        cout<<"Non-Paying Cars: "<<nonPayingCars<<endl;
    }
};

int main()
{
    Tollbooth t1;
    int choice;
    do
    {
        cout<<endl;
        cout<<"1. Paying Car"<<endl;
        cout<<"2. Non-Paying Car"<<endl;
        cout<<"3. Display Details"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                t1.payingCar();
                cout<<"Paying car recorded."<<endl;
                break;
            case 2:
                t1.nopayCar();
                cout<<"Non-paying car recorded."<<endl;
                break;

            case 3:
                t1.printOnConsole();
                break;
            case 0:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice != 0);

    return 0;
}