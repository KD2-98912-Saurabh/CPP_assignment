#include<iostream>
using namespace std;
class Box{
    private: 
    int l;
    int b;
    int h;
    public:
    Box(){
        l=10;
        b=12;
        h=25;
    }

    Box(int l,int b,int h){
        this->l=l;
        this->b=b;
        this->h=h;
    }

    Box(int val){
        this->l=val;
        this->b=val;
        this->h=val;
    }

    void calculateValues(){
        cout<<"Volume of box is : "<<l*b*h<<endl;
    }
};
int main(){
int choice;
    do{
        cout<<endl;
        cout<<"Enter choices : \n";
        cout<<"1.calculate Volume with default values : "<<endl;
        cout<<"2.calculate Volume with length,breadth and height with same values :"<<endl;
        cout<<"3.calculate Volume with different length,breadth and height  : "<<endl;
        cout<<"0.For exit ........................... "<<endl;
        cin>>choice;

        switch (choice){
            case 0:{
                cout<<"exiting..................................\n";
            }
            case 1 :{
                Box b1;
            b1.calculateValues();
            break;

            } 
            case 2 :{
                 int value;
            cout<<"enter value : "<<endl;
            cin>>value;
              Box b2(value);
            b2.calculateValues();
            break;
            }

            case 3:{
                int l,b,h;
                cout<<"Enter lenght : "<<endl;
                cin>>l;
                cout<<"Enter breadth : "<<endl;
                cin>>b;
                cout<<"Enter height : "<<endl;
                cin>>h;
                Box b3(l,b,h);
                b3.calculateValues();
                break;
            }
            default : cout<<"Not valid option ............."<<endl;

        }
    }
    while (choice!=0);
    
}