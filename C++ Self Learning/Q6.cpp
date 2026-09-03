#include<iostream>
using namespace std;
class BankAccount
{
  private:
  int accountNumber;
  string accountHolderName;
  double balance;
  public:
  BankAccount(void): accountNumber(0),accountHolderName(" "), balance(0.0)
  {  }
  BankAccount(int accountNumber, string accountHolderName, double balance): accountNumber(accountNumber), accountHolderName(accountHolderName), balance(balance)
  {  }
  void accpetDetail(void)
  { 
    cout<<"Account Number :";
    cin>>accountNumber;
    cout<<"Account Holder Name :";
    cin>>accountHolderName;
    cout<<"Current Balance :";
    cin>>balance;
  }
  void deposit(void)
  {
    double amount;
    cout<<"Enter a Amount for Deposit :";
    cin>>amount;
    balance = balance + amount;
  }
  void withDraw(void)
  {
    double amount;
    cout<<"Enter a Amount for Withdraw :";
    cin>>amount;
    if(amount <= balance)
    {
      balance = balance - amount;
    }
    else
    {
      cout<<"Insufficient Balance "<<endl;
    }
  }
  void displayBalance(void)
  { 
    cout<<"Account Number :"<<accountNumber<<endl;
    cout<<"Account Holder Name :"<<accountHolderName<<endl;
    cout<<"Current Balance :"<<balance<<endl;
  }
};
int main()
{
  BankAccount b1;
  b1.accpetDetail();
  b1.deposit();
  b1.withDraw();
  b1.displayBalance();
  return 0;
}