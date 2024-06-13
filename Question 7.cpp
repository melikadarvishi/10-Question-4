/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;


const int CARD_LENGTH = 16;

const int PREFIX_LENGTH = 6;


int prefixes[PREFIX_LENGTH] = {4021, 4177, 4514, 4567, 5018, 6277};


bool isValidPrefix(int prefix) {

    for (int i = 0; i < PREFIX_LENGTH; i++) {

        if (prefix == prefixes[i]) {

            return true;

        }

    }

    return false;

}


int main() {

    int cardNumber[CARD_LENGTH];

    int index = 0;


    cout << "Enter your card number (16 digits):" << endl;


    while (index < CARD_LENGTH) {

        int digit;

        cout << "Enter digit " << (index + 1) << ": ";

        cin >> digit;


        if (digit < 0 || digit > 9) {

            cout << "Invalid digit. Please enter a number between 0 and 9." << endl;

            continue;

        }


        cardNumber[index] = digit;

        index++;



        cout << "Entered digits: ";

        for (int i = 0; i < index; i++) {

            cout << cardNumber[i] << " ";

        }

        cout << endl;



        if (index == 4) {

            int prefix = cardNumber[0] * 1000 + cardNumber[1] * 100 + cardNumber[2] * 10 + cardNumber[3];

            if (!isValidPrefix(prefix)) {

                cout << "Invalid card prefix. Please try again." << endl;

                index = 0;

            }

        }

    }



    cout << "Card number: ";

    for (int i = 0; i < CARD_LENGTH; i++) {

        cout << cardNumber[i];

        if ((i + 1) % 4 == 0 && i!= CARD_LENGTH - 1) {

            cout << " ";

        }

    }

    cout << endl;


    return 0;

}