/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;


class Time {

private:

    int hour;

    int minute;

    int second;


public:

    Time(int h, int m, int s) {

        if (h < 0 || h > 23) {

            cout << "Invalid hour!" << endl;

            exit(1);

        }

        if (m < 0 || m > 59) {

            cout << "Invalid minute!" << endl;

            exit(1);

        }

        if (s < 0 || s > 59) {

            cout << "Invalid second!" << endl;

            exit(1);

        }

        hour = h;

        minute = m;

        second = s;

    }


    void printTime() {

        cout << second << ":" << minute << ":" << hour << endl;

    }


    Time operator-(const Time& other) {

        int totalSeconds1 = hour * 3600 + minute * 60 + second;

        int totalSeconds2 = other.hour * 3600 + other.minute * 60 + other.second;

        int diffSeconds = totalSeconds1 - totalSeconds2;

        int diffHour = diffSeconds / 3600;

        int diffMinute = (diffSeconds % 3600) / 60;

        int diffSecond = diffSeconds % 60;

        return Time(diffHour, diffMinute, diffSecond);

    }

};


int main() {

    int hour, minute, second;

    cout << "Enter hour: ";

    cin >> hour;

    cout << "Enter minute: ";

    cin >> minute;

    cout << "Enter second: ";

    cin >> second;

    Time time1(hour, minute, second);


    cout << "Enter hour: ";

    cin >> hour;

    cout << "Enter minute: ";

    cin >> minute;

    cout << "Enter second: ";

    cin >> second;

    Time time2(hour, minute, second);


    cout << "Time 1: ";

    time1.printTime();

    cout << "Time 2: ";

    time2.printTime();


    Time diffTime = time1 - time2;

    cout << "Difference: ";

    diffTime.printTime();


    return 0;

}