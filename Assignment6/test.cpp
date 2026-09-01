/*Q1. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]*/
#include<iostream>
using namespace std; 
class Product{
private:
int id;
string title;
int price;
public:

Product():id(0),title(""),price(price){

}



void accept(){
cout<<"enter id : "<<endl;
cin>>id;
cout<<"enter title : "<<endl;
cin>>title;
cout<<"enter price : "<<endl;
cin>>price;
}

void display(){
    cout<<"id : "<<id<<endl;
    cout<<"title : "<<title<<endl;
    cout<<"price : "<<price<<endl;
}

int getPrice(){
  return this->price;
}


};
class Book:public Product{
    private:
string author;
public:
void accept(){
    Product :: accept();
    cout<<"Enter author : "<<endl;
    cin>>author;
}

void display(){
    Product::display();
    cout<<"author : "<<author<<endl;
}

int  calculate(){
    int price=this->getPrice();
     price=price-(price-10/100);
     return price;
}

};
class Tape:public Product{
private:
string artist;
public:

void accept(){
    Product::accept();
    cout<<"Enter artist : "<<endl;
    cin>>artist;
}

void display(){
    Product::display();
    cout<<"artist : "<<artist<<endl;
}

int calculate(){
    int price =getPrice();
    price=price-(price-5/100);
    return price;
}

};
int main(){
int  choice;
Product *ptr[3];
for(int i=0;i<3;i++){
do{
    cout<<"enter choice : "<<endl;
    cout<<"1.Book : "<<endl;
    cout<<"2.Tape : "<<endl;
    cout<<"0.Exit : "<<endl;
    cin>>choice;

    switch(choice){
        case 1: {
            ptr[i]=new Book();
            ptr[i]->accept();
        }
        case 2:{
            ptr[i]=new Tape();
            ptr[i]->accept();
        }
        
    }
}while(choice!=0);
}

}