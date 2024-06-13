
#include <iostream>
using namespace std;
int main(void)
{
   string password;
   string Entrance;
   cout << "Enter Password:" << endl;
   cin >> password;
   cout << "Guess the Password" << endl;
   do
   {
      cin >> Entrance;
      if (Entrance != password)
      {
         cout << "Wrong guess, try again:)" << endl;
      }
   } while (Entrance != password);
   cout << "You guessed right, you are welcome❤" << endl;
   return 0;
}