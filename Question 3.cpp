/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
bool isEqual(int a, int b) {

    return a == b;

}
int main() {

    int a = 5;

    int b = 5;

    if (isEqual(a, b)) {

        cout << "a and b are equal." << endl;

    } else {

        cout << "a and b are not equal." << endl;

    }

    return 0;

}