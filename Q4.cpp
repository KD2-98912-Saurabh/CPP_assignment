#include<iostream>
using namespace std; 
int main (){
    int m1,m2,m3,oops,java;
    cout<<"enter subject marks : ";
    cin>>m1>>m2>>m3>>oops>>java;

    int total=m1+m2+m3+oops+java;
    if(total >=90) cout<<"EX"<<endl;
    else if(total>=80) cout<<"A"<<endl;
    else if(total>=70) cout<<"B"<<endl;
    else if(total>=60) cout<<"C"<<endl;
    else cout<<"fail";
   
}