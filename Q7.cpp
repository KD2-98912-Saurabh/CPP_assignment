#include<iostream>
using namespace std; 
int main(){
    int a,b;
    cout<<"enter 1st : "<<endl;
    cin>>a;
    cout<<"enter 2nd : "<<endl;
    cin>>b;

    for(int i=a;i<=b;i++){
        for(int j=1;j<=10;j++){
            cout<<i*j<<"  "<<endl;

        }
        cout<<endl;
    }


}