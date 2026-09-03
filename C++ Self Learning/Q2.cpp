#include<iostream>
using namespace std;
inline int fact(int num)
{
  int fact=1;
  for(int i = 1; i <=num; i++)
  {
    fact = fact * i;
  }
  return fact;
}
inline int power(int base , int index)
{
  int result = 1; 
  for(int count = 1 ; count <= index ; count++)
  {
    result = result * base; 
  }
  return result; 
}
int main()
{
  int num,base,index;
  cout<<"Enter a Number :";
  cin>>num;
  cout<<"Factorial of Number :"<<fact(num)<<endl;

  cout<<"Enter a Base Number :";
  cin>>base;
  cout<<"Enter a Index Number :";
  cin>>index;
  cout<<"Power of Number :"<<power(base, index);
  return 0;
}