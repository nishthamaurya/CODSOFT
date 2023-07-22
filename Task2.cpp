#include<iostream>
using namespace std;

                 //  <------------ T A S K 2 ------------>
  
// Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.

int main()
{
    // Initializing number 1
    double num1;
    cout<<"Please enter the first number"<<endl;
    cin >> num1;
    // Initializing number 2
    double num2;
    cout<<"Please enter the second number"<<endl;
    cin >> num2;
    

    double result;
    char operation;

    cout<<"Please enter the operation that you want to perform : ";
    cin>>operation;

    switch(operation)
    {
        // for adding two numbers
        case '+':
            result = num1 + num2 ;
            cout<<"Addition of two number is "<<result<<endl;
            break;

        //  for subtracting two numbers
        case '-':
            result = num1 - num2 ;
            cout<<"Subtraction of two number is "<<result<<endl;
            break;
             
        //  for multipying two numbers     
        case '*':
            result = num1 * num2 ;
            cout<<"Multiplication of two number is "<<result<<endl;
            break;

        //  for dividing two numbers  
        case '/':
           if(num2 !=0)
           {
             result = num1 / num2 ;
             cout<<"Division of two number is "<<result<<endl;
              break;
           }
           else{
              cout<<"Please enter the number greater than 0";
              break;
           }
             
        default :
        // If the operation is other than +,-,*,/,then ,the default case is executed.
            cout<<"Please enter valid operation";
            break;
             
    }

        return 0;
}

