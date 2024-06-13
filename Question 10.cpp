/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;


int sumDigits(int num) {

    int sum = 0;

    while (num != 0) {

        sum += num % 10;

        num /= 10;

    }

    return sum;

}


bool isDivisibleByThree(int num) {

    return num % 3 == 0;

}


int main() {

    int num;

    cout << "Enter a 5-digit number: ";

    cin >> num;


    int sum = sumDigits(num);

    cout << "Sum of digits: " << sum << endl;


    if (isDivisibleByThree(sum)) {

        cout << "The sum is divisible by 3." << endl;

    } else {

        cout << "The sum is not divisible by 3." << endl;

    }


    return 0;

}