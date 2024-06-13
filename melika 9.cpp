#include<iostream>
using namespace std;
int d(int b){
    if(b<10){
        return b;
    }
    else{
     cout<<b%10;
     return d(b/10);
    }
}
int main()
{
    int i;
    cout<<"enter b num";
    cin>>i;
    cout<<d(i);
    return 0;
}