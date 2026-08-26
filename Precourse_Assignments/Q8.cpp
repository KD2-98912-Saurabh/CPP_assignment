#include<iostream>
using namespace std;
class students{
    private: 
string name;
string roll;
int totalMarks;
public:
void setName(string name){
    (*this).name=name;
}
void setRoll(string n){
    roll=n;
}
void setTotalMarks(int m){
    totalMarks=m;
}

string outName(){
    return name;
}
string outRoll(){
    return roll;
}

int outMarks(){
    return totalMarks;
}
};
int main(){
students st;
st.setName("saurabh chikte");
st.setRoll("98912");
st.setTotalMarks(85);

cout<<st.outName()<<endl;
cout<<st.outRoll()<<endl;
cout<<st.outMarks()<<endl;


}