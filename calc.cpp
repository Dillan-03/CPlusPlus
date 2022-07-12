#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int num1,num2;
   char operation;

   cout << "Enter first number: ";
   cin >> num1;

   cout << "Enter operation: ";
   cin >> operation;

   cout << "Enter second number: ";
   cin >> num2;

    if (operation == '+'){cout << "Result is " << (num1 + num2) << endl;}
    else if (operation == '-'){cout << "Result is " << (num1 - num2) << endl;}
    else if (operation == '/'){cout << "Result is " << (num1 / num2) << endl;}
    else if (operation == '*'){cout << "Result is " << (num1 * num2) << endl;}
    else {cout << "Wrong Operation" << endl;}


    return 0;
}