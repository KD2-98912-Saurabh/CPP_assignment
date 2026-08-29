
/*Assignment 5
Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate should be of
type Date.
Create a class Student with data members id, marks, course and joining date, end date. The joining
date and end date should be of type date.
Implement above classes. Test all functionalities in main().
(Note - Only Perform the Association in the above case. No need of Inheritance)
*/

#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date():day(0),month(0),year(0){

    }

    Date(int day,int month,int year):day(day),month(month),year(year){

    }

    void acceptData(){
        cout<<"Enter day : "<<endl;
        cin>>day;
        cout<<"Enter month : "<<endl;
        cin>>month;
        cout<<"Enter year : "<<endl;
        cin>>year;
    }

    void display(){
        cout<<"day : "<<day<<" "<<"month : "<<month<<" "<<"year : "<<year<<endl;
    }

};
class Person{
    private:
    string name;
    string address;
    Date dob;
    public:

    Person():name(""),address(""),dob(){

    }

    Person(string name,string address,Date dob):name(name),address(address),dob(){

    }

    
    void acceptData(){
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter address : "<<endl;
        cin>>address;
        cout<<"Enter dob : "<<endl;
        dob.acceptData();
    }

void display(){
        cout<<"name : "<<name<<" "<<"address : "<<address<<endl;

        cout<<"dob  : "<<endl;
        dob.display();
        cout<<endl;

    }

};

class Student{
    private:
    int id;
    int marks;
    string course;
    Date Jdate;
    Date Edate;

    public:

    Student():id(0),marks(0),course(""),Jdate(),Edate(){

    }

    Student(int id,int marks,string course,Date Jdate,Date Edate):id(id),marks(marks),course(course),Jdate(),Edate(){

    }
    
    void acceptData(){
        cout<<"Enter id : "<<endl;
        cin>>id;
        cout<<"Enter Marks : "<<endl;
        cin>>marks;
        cout<<"Enter Course : "<<endl;
        cin>>course;
        cout<<"Enter Joining Date : "<<endl;
        Jdate.acceptData();
        cout<<"Enter End-Date"<<endl;
        Edate.acceptData();
    }


       void display(){
        cout<<"id : "<<id<<" "<<"Marks : "<<marks<<"course : "<<endl;

        cout<<"Joining Date  : "<<endl;
        Jdate.display();
        cout<<"End-Date : "<<endl;
        Edate.display();
        cout<<endl;
        
    }
};
int main(){
    Person p;
    Student s;
    Date d;
    int choice;
    do{
        cout<<"0.Exiting program : "<<endl;
        cout<<"1.Accept Persons details : "<<endl;
        cout<<"2.Display Persons details : "<<endl;
        cout<<"3.Accept Students details : "<<endl;
        cout<<"4.Display Students details : "<<endl;
         cout<<"Enter Choice : "<<endl;
      cin>>choice;

        switch(choice){
            case 0: cout<<"Exiting ..........................."<<endl;
            break;

            case 1 : cout<<"Enter persons details : "<<endl;
            p.acceptData();
            break;

            case 2 : cout<<"Display Persons details : "<<endl;
            p.display();
            break;

            case 3: cout<<"Enter Students details : "<<endl;
            s.acceptData();
            break;

            case 4: cout<<"Display Students details : "<<endl;
            s.display();
            break;
    }

}while(choice!=0);
}