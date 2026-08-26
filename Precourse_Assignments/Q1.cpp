#include<iostream>
using namespace std; 
int main(){
    int n; 
    cout<<"Enter number of no : "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number at idx "<<i<<" : "<<endl;
        cin>>arr[i];
    }

    int maxx=-1;
    for(int i=0;i<n;i++){
        if(maxx<arr[i])maxx=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
cout<<" max number is : "<<maxx<<endl;

}