/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

#include <string>


using namespace std;


class Car {

private:

    string brand;

    string model;

    int distanceDriven;


public:

    Car(string b, string m, int d) {

        brand = b;

        model = m;

        distanceDriven = d;

    }


    void drive(int km) {

        distanceDriven += km;

    }


    void showData() {

        cout << "Brand: " << brand << endl;

        cout << "Model: " << model << endl;

        cout << "Distance driven: " << distanceDriven << "km" << endl;

    }

};


int main() {

    string brand, model;

    int distanceDriven;


    cout << "Enter brand: ";

    getline(cin, brand);


    cout << "Enter model: ";

    getline(cin, model);


    cout << "Enter distance driven: ";

    cin >> distanceDriven;


    Car myCar(brand, model, distanceDriven);


    cout << "Car information:" << endl;

    myCar.showData();


    int km;

    cout << "Enter distance to drive: ";

    cin >> km;

    myCar.drive(km);


    cout << "Car information after driving:" << endl;

    myCar.showData();


    return 0;

}