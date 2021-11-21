/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 James Karlinski
 */

#include "std_lib_facilities.h"

int main() 
{
  string operatorChar;
  double number1;
  double number2;

  cout << "Enter an operator (+,/,*,%) and two numbers with spaces. Example '+ 10 20': ";

  // get user input
  cin >> operatorChar >> number1 >> number2;
  double result = 0;

  if(operatorChar == "*" || operatorChar == "mul")
    result = number1 * number2;
  else if(operatorChar =="+" || operatorChar == "plus")
    result = number1 + number2;
  else if(operatorChar == "-" || operatorChar == "minus")
    result = number1 - number2;
  else if(operatorChar == "/" || operatorChar == "div")
  {
    if(number2 == 0)
    {
      cout << "Cannot divided by 0" << endl;
      return 0;
    }
    result = number1 / number2;
  }
  else
  {
    cout << "Invalid Operation" << endl;
    return 0;
  }
  cout << number1 << " " << operatorChar << " " << number2 << " = " << result << endl;  

  // wait for use to read the console output
  system("pause");

  return 0;
} 