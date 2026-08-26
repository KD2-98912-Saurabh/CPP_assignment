#include<iostream>
#include<string>
using namespace std; 
int main(){
    string name ; 
    getline(cin,name);

    int n=name.length();
    int upcount=0;
    int lowcount=0;
    int digits=0;
    int other=0;
    for(int i=0;i<n;i++){
        if(isupper(name[i])){
            upcount++;
        }
        else if(islower(name[i])) lowcount++;
        else if(isdigit(name[i])) digits++;
        else other++;
    }

    cout<<"uppercase count : "<<upcount<<endl;
    cout<<"lowercase Count : "<<lowcount<<endl;
    cout<<"digits count : "<<digits<<endl; 
    cout<<"other count : "<<other<<endl; 
    
}