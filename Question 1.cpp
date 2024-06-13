/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int random,guess,gc=0;
    cout<<"Enter Random Number:";
    cin>>random;
    do{
        if(gc!=0){
            if(guess>random){
                cout<<"Random is smaller";}
            }else if(guess<<random){
                cout<<"Random is bigger";
            }
        cin>>guess;
        gc++;
}
while(guess!=random);
if(gc<10){
    cout<<"lucky in allround the world";
}
if(gc>=10&&gc<=50){
    cout<<"Normal & mini unlock!";
}
if(gc>50){
    cout<<"unlock";
}
return 0;
    }