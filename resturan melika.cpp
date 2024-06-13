#include <iostream>
using namespace std;
class Restaurant
{
private:
    bool menuEnabled;
    int valueAddedTax;
public:
    Restaurant(): menuEnabled(true),
        valueAddedTax(9){}

                void disableMenu(){
                    menuEnabled = false;
                }
                void setValueAddedTax(int taxRate){
                valueAddedTax = taxRate;
                }

               void displaylnfo(){
                   cout<<"Menu Enabled:"<<
                    (menuEnabled?"Yes":"No")<<endl;
                   cout<<"Value Added Tax Rate:"<<valueAddedTax<<"%"<<endl;
               }
};
int main(){
    Restaurant myRestaurant;
    myRestaurant.displaylnfo();
    myRestaurant.disableMenu();
    myRestaurant.setValueAddedTax(12);
    myRestaurant.displaylnfo();


            return 0;
};
