//Bao Trang
//Computer Science 1 - Professor Benhamin Shelton
//This program will perform simple arithmetic calculations

#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
  int int1, int2;
  char op;

  cout<< "MENU: \n"
      << "Enter + for addition. \n"
      << "Enter - for substraction. \n"
      << "Enter * for multiplication. \n"
      << "Enter / for division. \n"
      << "Enter % for modulus. \n";
  
  cout << "Please enter what operation you would like to do: \n";
  cin >> op;  
  cout << "Please enter an integer: ";
  cin >> int1;
  cout << "Please enter an integer: ";
  cin >> int2;

  if (op == '+')
  {
    cout << int1 <<" + " << int2 << " = " << int1 + int2;
  }
  else if (op == '-')
  {
    cout << int1 <<" - " << int2 << " = " << int1 - int2;
  }
   else if (op == '*')
  {
    cout << int1 <<" * " << int2 << " = " << int1 * int2;
  }
   else if (op == '/')
  {
    cout << int1 << " / " << int2 << " = " << fixed << setprecision(4) << float(int1) / float(int2); // typecasting int1 and int2 to avoid integer division
    //setprecision fuction used with fixed to control the number of decimal places 
  }
   else if (op == '%')
  {
    cout << int1 <<" % " << int2 << " = " << int1 % int2;
  }
  else {cout << "Please enter an operator listed on the menu";} //any input different from menu options will provoke the else statement

  return 0;
}