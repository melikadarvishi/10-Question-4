#include <iostream>
using namespace std;
int main()
{
    int GPA;
    cout<<"please enter gpa:"<<endl;
    cin>>GPA;
    if(GPA>=17&&GPA<=20){
    cout<<"A."<<"Excellent, you are not on parole😍";
    }
    else if(GPA>=14&&GPA<17){
    cout<<"B."<<"GOOD, you are not conditional😊";
    }
    else if(GPA<14&&GPA>=10){
    cout<<"C."<<"you were lucky. It can be conditional😢 ";
    }
    else if(GPA<10&&GPA>=0){
    cout<<"D."<<"Unfortunately, you were put on probation💔 ";
    }
    else{
    cout<<"error";    
    }
    return 0;
}