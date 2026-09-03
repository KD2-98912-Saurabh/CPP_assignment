#include<iostream>
using namespace std;
int mystrlen(const char* str)
{
  int length = 0;
  while(str[length] != '\0')
  {
    length++;
  }
  return length;
}
void mystrcpy(char *start, const char *end)
{
  int i = 0;
  while(end[i] != '\0')
    {
      start[i] = end[i];
      i++;
    }
  start[i] = '\0';
}
int main()
{
  char str1[100];
  char str2[100];
  cout << "Enter a String : ";
  cin >> str1;
  cout << "Length : " << mystrlen(str1) << endl;
  mystrcpy(str2, str1);
  cout << "Copied String : " << str2 << endl;
  return 0;
}