/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;


class Calculator {

private:

    double num1, num2, result;


public:

    void setNumbers(double n1, double n2) {

        num1 = n1;

        num2 = n2;

    }


    double add() {

        return num1 + num2;

    }


    double subtract() {

        return num1 - num2;

    }


    double multiply() {

        return num1 * num2;

    }


    double divide() {

        if (num2 == 0) {

            cout << "Error: Division by zero!" << endl;

            return 0;

        }

        return num1 / num2;

    }


    double modulus() {

        if (num2 == 0) {

            cout << "Error: Division by zero!" << endl;

            return 0;

        }

        return (int)num1 % (int)num2;

    }


    double power() {

        return powRecursive(num1, num2);

    }


    double powRecursive(double base, double exponent) {

        if (exponent == 0) {

            return 1;

        }

        return base * powRecursive(base, exponent - 1);

    }


    void printResult(char op) {

        switch (op) {

            case '+':

                cout << "Result: " << add() << endl;

                break;

            case '-':

                cout << "Result: " << subtract() << endl;

                break;

            case '*':

                cout << "Result: " << multiply() << endl;

                break;

            case '/':

                cout << "Result: " << divide() << endl;

                break;

            case '%':

                cout << "Result: " << modulus() << endl;

                break;

            case '^':

                cout << "Result: " << power() << endl;

                break;

            default:

                cout << "Error: Invalid operator!" << endl;

                break;

        }

    }

};


int main() {

    Calculator calc;

    double num1, num2;

    char op;


    cout << "Enter first number: ";

    cin >> num1;

    cout << "Enter operator (+, -, *, /, %, ^): ";

    cin >> op;

    cout << "Enter second number: ";

    cin >> num2;


    calc.setNumbers(num1, num2);

    calc.printResult(op);


    return 0;

}
     
 
    

   

