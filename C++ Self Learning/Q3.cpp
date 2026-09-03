#include<iostream>
using namespace std;
class Student
{
  private:
  int rollNo;
  int marks;
  public:
  Student(void): rollNo(0), marks(0)
  {  }
  Student(int rollNo, int marks): rollNo(rollNo), marks(marks)
  {  }
  void acceptRecord(void)
  {
    cout<<"Enter a Roll No :";
    cin>>rollNo;
    cout<<"Enter a Marks :";
    cin>>marks;
  }
  void displayRecord(void)
  {
    cout<<"Roll no :"<<rollNo<<endl;
    cout<<"Marks :"<<marks<<endl;
  }
  int getMarks(void)
  {
    return marks;
  }
};
int main()
{
  int size;
  cout<<"Enter Number of Students :";
  cin>>size;
  Student *ptr = new Student[size];
  for(int i = 0; i < size; i++)
  {
    ptr[i].acceptRecord();
  }
  cout << "\nStudent Records :" << endl;
  for(int i = 0; i < size; i++)
  {
    ptr[i].displayRecord();
  }
  int highest = ptr[0].getMarks();
  for(int i = 1; i < size; i++)
  {
    if(ptr[i].getMarks() > highest)
    {
      highest = ptr[i].getMarks();
    }
  }
  cout << "Highest Marks : " << highest << endl;
  delete[] ptr;
  ptr = NULL;
  return 0;
}