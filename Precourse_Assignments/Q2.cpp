#include<iostream>
using namespace std; 
int main(){
    int m; 
    cout<<"Enter number : "<<endl; 
    cin>>m; 
 
    int fact=1;
    for(int i=1;i<=m;i++){
        fact*=i;
    }

    cout<<"factorial of "<<m<<" is : "<<fact<<endl;
    
}