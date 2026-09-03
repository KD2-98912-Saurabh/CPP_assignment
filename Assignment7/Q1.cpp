#include<iostream>
using namespace std;


class Employee
{
private:
    int id;
    double salary;

public:

    Employee() : id(0), salary(0.0)
    {
    }

    Employee(int id, double salary)
        : id(id), salary(salary)
    {
    }

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return this->id;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    double getSalary()
    {
        return this->salary;
    }

    virtual void accept()
    {
        int id;
        double salary;

        cout << "Enter Id : ";
        cin >> id;

        cout << "Enter Salary : ";
        cin >> salary;

        setId(id);
        setSalary(salary);
    }

    virtual void display()
    {
        cout << "Id : " << getId() << endl;
        cout << "Salary : " << getSalary() << endl;
    }

    virtual ~Employee()
    {
    }
};


class Manager : virtual public Employee
{
private:
    double bonus;

public:

    Manager() : Employee(), bonus(0.0)
    {
    }

    Manager(int id, double salary, double bonus)
        : Employee(id, salary), bonus(bonus)
    {
    }

    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getBonus()
    {
        return this->bonus;
    }

    void accept()
    {
        Employee::accept();

        double bonus;

        cout << "Enter Bonus : ";
        cin >> bonus;

        setBonus(bonus);
    }

    void display()
    {
        Employee::display();

        cout << "Bonus : " << getBonus() << endl;
    }

    void acceptManager()
    {
        accept();
    }

    void displayManager()
    {
        display();
    }
};


class Salesman : virtual public Employee
{
private:
    double commission;

public:

    Salesman() : Employee(), commission(0.0)
    {
    }

    Salesman(int id, double salary, double commission)
        : Employee(id, salary), commission(commission)
    {
    }

    void setCommission(double commission)
    {
        this->commission = commission;
    }

    double getCommission()
    {
        return this->commission;
    }

    void accept()
    {
        Employee::accept();

        double commission;

        cout << "Enter Commission : ";
        cin >> commission;

        setCommission(commission);
    }

    void display()
    {
        Employee::display();

        cout << "Commission : " << getCommission() << endl;
    }

    void acceptSalesman()
    {
        accept();
    }

    void displaySalesman()
    {
        display();
    }
};


class SalesManager : public Manager, public Salesman
{
public:

    SalesManager()
        : Employee(), Manager(), Salesman()
    {
    }

    SalesManager(int id, double salary,
                 double bonus, double commission)
        : Employee(id, salary),
          Manager(id, salary, bonus),
          Salesman(id, salary, commission)
    {
    }

    void accept()
    {
        int id;
        double salary;
        double bonus;
        double commission;

        cout << "Enter Id : ";
        cin >> id;

        cout << "Enter Salary : ";
        cin >> salary;

        cout << "Enter Bonus : ";
        cin >> bonus;

        cout << "Enter Commission : ";
        cin >> commission;

        setId(id);
        setSalary(salary);

        Manager::setBonus(bonus);
        Salesman::setCommission(commission);
    }

    void display()
    {
        cout << "Id : " << getId() << endl;
        cout << "Salary : " << getSalary() << endl;
        cout << "Bonus : " << Manager::getBonus() << endl;
        cout << "Commission : " << Salesman::getCommission() << endl;
    }
};


int menuList()
{
    int choice;

    cout << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Manager" << endl;
    cout << "2. Add Salesman" << endl;
    cout << "3. Add SalesManager" << endl;
    cout << "4. Display Count" << endl;
    cout << "5. Display All Managers" << endl;
    cout << "6. Display All Salesman" << endl;
    cout << "7. Display All SalesManagers" << endl;

    cout << "Enter choice : ";
    cin >> choice;

    return choice;
}


int main()
{
    Manager *managerArr[10];
    Salesman *salesmanArr[10];
    SalesManager *salesManagerArr[10];

    int managerCount = 0;
    int salesmanCount = 0;
    int salesManagerCount = 0;

    int choice;

    while((choice = menuList()) != 0)
    {
        switch(choice)
        {
        case 1:

            managerArr[managerCount] = new Manager();

            managerArr[managerCount]->accept();

            managerCount++;

            break;


        case 2:

            salesmanArr[salesmanCount] = new Salesman();

            salesmanArr[salesmanCount]->accept();

            salesmanCount++;

            break;


        case 3:

            salesManagerArr[salesManagerCount] = new SalesManager();

            salesManagerArr[salesManagerCount]->accept();

            salesManagerCount++;

            break;


        case 4:

            cout << endl;
            cout << "Manager Count : "
                 << managerCount << endl;

            cout << "Salesman Count : "
                 << salesmanCount << endl;

            cout << "SalesManager Count : "
                 << salesManagerCount << endl;

            break;


        case 5:

            cout << endl;
            cout << "========== Managers ==========" << endl;

            for(int i = 0; i < managerCount; i++)
            {
                managerArr[i]->display();
                cout << endl;
            }

            break;


        case 6:

            cout << endl;
            cout << "========== Salesman ==========" << endl;

            for(int i = 0; i < salesmanCount; i++)
            {
                salesmanArr[i]->display();
                cout << endl;
            }

            break;


        case 7:

            cout << endl;
            cout << "========== SalesManagers =========="
                 << endl;

            for(int i = 0; i < salesManagerCount; i++)
            {
                salesManagerArr[i]->display();
                cout << endl;
            }

            break;


        default:

            cout << "Invalid choice!" << endl;
        }
    }


    for(int i = 0; i < managerCount; i++)
    {
        delete managerArr[i];
        managerArr[i] = NULL;
    }


    for(int i = 0; i < salesmanCount; i++)
    {
        delete salesmanArr[i];
        salesmanArr[i] = NULL;
    }


    for(int i = 0; i < salesManagerCount; i++)
    {
        delete salesManagerArr[i];
        salesManagerArr[i] = NULL;
    }


    return 0;
}