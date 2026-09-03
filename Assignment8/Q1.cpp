#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    Distance(int f=0, int i=0) : feet(f), inches(i) {}

   
    Distance operator+(const Distance& d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        if(temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp;
    }


    Distance operator++() { 
        ++inches;
        if(inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
        return *this;
    }

    
    friend Distance operator--(Distance& d) { 
        if(d.inches == 0) {
            if(d.feet > 0) {
                d.feet--;
                d.inches = 11;
            }
        } else {
            d.inches--;
        }
        return d;
    }

    
    friend ostream& operator<<(ostream& out, const Distance& d) {
        out << d.feet << " feet " << d.inches << " inches";
        return out;
    }

    friend istream& operator>>(istream& in, Distance& d) {
        cout << "Enter feet: ";
        in >> d.feet;
        cout << "Enter inches: ";
        in >> d.inches;
        if(d.inches >= 12) {
            d.feet += d.inches / 12;
            d.inches = d.inches % 12;
        }
        return in;
    }
};

int main() {
    Distance d1, d2, d3;
    cout << "Enter first distance:\n";
    cin >> d1;
    cout << "Enter second distance:\n";
    cin >> d2;

    d3 = d1 + d2;
    cout << "\nSum: " << d3 << endl;

    ++d1;
    cout << "After increment (++): " << d1 << endl;

    --d2;
    cout << "After decrement (--): " << d2 << endl;

    return 0;
}