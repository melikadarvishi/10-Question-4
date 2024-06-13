
#include<iostream>
using namespace std;
int main()
{
        int m;
        cout<<"please enter a number"<<endl;
        cin>>m;
        for(int h=0;h<m;h++){
        for(int n=0;n<h+1;n++){    
        cout<<"*";
        }
        cout<<endl;
        }
        return 0;
}