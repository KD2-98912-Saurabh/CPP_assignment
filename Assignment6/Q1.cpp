#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    string title;
    double price;

public:
    Product() : id(0), title(""), price(0.0)
    {
    }

    Product(int id, string title, double price) : id(id), title(title), price(price)
    {
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setTitle(string title)
    {
        this->title = title;
    }

    void setPrice(double price)
    {
        this->price = price;
    }

    int getId()
    {
        return this->id;
    }

    string getTitle()
    {
        return this->title;
    }

    double getPrice()
    {
        return this->price;
    }

    virtual void accept()
    {
        int id;
        string title;
        double price;

        cout << "Enter Id : ";
        cin >> id;

        cout << "Enter Title : ";
        cin >> title;

        cout << "Enter Price : ";
        cin >> price;

        setId(id);
        setTitle(title);
        setPrice(price);
    }

    virtual void display()
    {
        cout << "Id : " << getId() << endl;
        cout << "Title : " << getTitle() << endl;
        cout << "Price : " << getPrice() << endl;
    }

    virtual double calculate()
    {
        return getPrice();
    }

    virtual ~Product()
    {
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book() : author("")
    {
    }

    void setAuthor(string author)
    {
        this->author = author;
    }

    string getAuthor()
    {
        return this->author;
    }

    void accept()
    {
        Product::accept();

        string author;

        cout << "Enter Author : ";
        cin >> author;

        setAuthor(author);
    }

    double calculate()
    {
        double price = getPrice();

        price = price - (price * 10 / 100);

        return price;
    }

    void display()
    {
        Product::display();

        cout << "Author : " << getAuthor() << endl;
        cout << "Final Price : " << calculate() << endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape() : artist("")
    {
    }

    void setArtist(string artist)
    {
        this->artist = artist;
    }

    string getArtist()
    {
        return this->artist;
    }

    void accept()
    {
        Product::accept();

        string artist;

        cout << "Enter Artist : ";
        cin >> artist;

        setArtist(artist);
    }

    double calculate()
    {
        double price = getPrice();

        price = price - (price * 5 / 100);

        return price;
    }

    void display()
    {
        Product::display();

        cout << "Artist : " << getArtist() << endl;
        cout << "Final Price : " << calculate() << endl;
    }
};

int menuList()
{
    int choice;

    cout << endl;
    cout << "1. Book" << endl;
    cout << "2. Tape" << endl;

    cout << "Enter choice : ";
    cin >> choice;

    return choice;
}

int main()
{
    Product *arr[3];

    double totalBill = 0.0;

    for (int i = 0; i < 3; i++)
    {
        int choice = menuList();

        switch (choice)
        {
        case 1:
            arr[i] = new Book();
            break;

        case 2:
            arr[i] = new Tape();
            break;

        default:
            cout << "Invalid choice!" << endl;
            i--;
            continue;
        }

        arr[i]->accept();
    }

    cout << endl;
    cout << "========== BILL ==========" << endl;

    for (int i = 0; i < 3; i++)
    {
        arr[i]->display();

        totalBill = totalBill + arr[i]->calculate();

        cout << endl;
    }

    cout << "Total Bill : " << totalBill << endl;

    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
        arr[i] = NULL;
    }

    return 0;
}