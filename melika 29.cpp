#include<iostream>
using namespace std;
int main()
{
        int m,j;
        cout<<"Enter any num :";
        cin>>m;
        for(int i=1;i<2*m;i++){
        for(j=1;j<=2*m+i;j++){
        cout<<' ';  
        } 
        for(int i=1;i<=m;i++){
        cout<<'*';
        }
        cout<<endl;
        }
        for(int i=1;i<=5*m;i++){
        cout<<'*';   
        }
        cout<<endl;
        for(int i=1;i<(2*m);i++){
        for(int c=j-i;c>0;c--){
        cout<<' ';   
        }
        for(int i=1;i<=m;i++){
        cout<<'*';  
        }
        cout<<endl;
        }
        return 0;
}