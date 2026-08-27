#include<iostream>
using namespace std;
class Cylinder
{
private:
double radius;
double height;
static constexpr double pi=3.14159;
public:
Cylinder():radius(0.0),height(0.0){

}

Cylinder(double radius,double height){
    
}

int getRadius(){
    return radius;
}
int getHeight(){
    return height;
}
void setRadius(int radius){
    this->radius=radius;
}

void setHeight(int height){
this->height=height;
}

double calculateVolume(){
    return pi*radius*radius*height;
}
};
int main(){
Cylinder c1;
c1.setHeight(5.0);
c1.setRadius(5.0);
cout<<"get Radius : "<<c1.getHeight()<<endl;
cout<<"get Height : "<<c1.getRadius()<<endl;
cout<<"volume of cylinder : "<<c1.calculateVolume();

}