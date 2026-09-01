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
        cout << "Employee()" << endl;
    }

    Employee(int id, double salary)
        : id(id), salary(salary)
    {
        cout << "Employee(int, double)" << endl;
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

    void accept()
    {
        int id;
        double salary;

        cout << "Enter id : ";
        cin >> id;

        cout << "Enter salary : ";
        cin >> salary;

        setId(id);
        setSalary(salary);
    }

    void display()
    {
        cout << "Id : " << getId() << endl;
        cout << "Salary : " << getSalary() << endl;
    }
};


class Manager : public Employee
{
private:
    double bonus;

public:

    Manager() : Employee(), bonus(0.0)
    {
        cout << "Manager()" << endl;
    }

    Manager(int id, double salary, double bonus)
        : Employee(id, salary), bonus(bonus)
    {
        cout << "Manager(int, double, double)" << endl;
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

        cout << "Enter bonus : ";
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


class Salesman : public Employee
{
private:
    double commission;

public:

    Salesman() : Employee(), commission(0.0)
    {
        cout << "Salesman()" << endl;
    }

    Salesman(int id, double salary, double commission)
        : Employee(id, salary), commission(commission)
    {
        cout << "Salesman(int, double, double)" << endl;
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

        cout << "Enter commission : ";
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
        : Manager(), Salesman()
    {
        cout << "SalesManager()" << endl;
    }

    SalesManager(int id, double salary,
                 double bonus, double commission)
        : Manager(id, salary, bonus),
          Salesman(id, salary, commission)
    {
        cout << "SalesManager(int, double, double, double)" << endl;
    }

    void accept()
    {
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }

    void display()
    {
        Manager::displayManager();
        Salesman::displaySalesman();
    }
};


int main()
{
    Employee e1;

    cout << endl;
    cout << "========== Employee ==========" << endl;

    e1.setId(101);
    e1.setSalary(50000.00);

    e1.display();

    cout << endl;

    Manager m1;

    cout << "========== Manager ==========" << endl;

    m1.setId(102);
    m1.setSalary(60000.00);
    m1.setBonus(10000.00);

    m1.displayManager();

    cout << endl;

    Salesman s1;

    cout << "========== Salesman ==========" << endl;

    s1.setId(103);
    s1.setSalary(40000.00);
    s1.setCommission(5000.00);

    s1.displaySalesman();

    cout << endl;

    SalesManager sm1(104, 70000.00, 12000.00, 7000.00);

    cout << "========== SalesManager ==========" << endl;

    sm1.display();

    return 0;
}