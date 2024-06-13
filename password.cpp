/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string password;
    cout << "Please enter the password: ";
    cin >> password;

    int score = 0;

    if (password.length() >= 6) {
        score += 20;
    }

    bool hasDigit = false;
    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
            break;
        }
    }
    if (hasDigit) {
        score += 20;
    }

    bool hasSpecialChar = false;
    for (char c : password) {
        if (!isalnum(c)) {
            hasSpecialChar = true;
            break;
        }
    }
    if (hasSpecialChar) {
        score += 20;
    }

    bool hasUpper = false;
    for (char c : password) {
        if (isupper(c)) {
            hasUpper = true;
            break;
        }
    }
    if (hasUpper) {
        score += 20;
    }

    bool hasLower = false;
    for (char c : password) {
        if (islower(c)) {
            hasLower = true;
            break;
        }
    }
    if (hasLower) {
        score += 20;
    }

    if (score == 100) {
        cout << "Password difficulty: very strong" <<endl;
    } else if (score >= 80) {
        cout << "Password difficulty: Strong" <<endl;
    } else if (score >= 60) {
        cout << "Password difficulty: medium" <<endl;
    } else {
        cout << "Password difficulty: Weak"<<endl;
    }

    return 0;
}
