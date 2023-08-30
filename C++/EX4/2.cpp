
#include <iostream>
#include <math.h>
using namespace std;

class Number
{
public:
   void absolute(int num)
   {
      if (num < 0)
         num = num * (-1);
      cout << "Absolute value = " << num << endl;
   }
   void absolute(float num)
   {
      if (num < 0)
         num = num * (-1);
      cout << "Absolute value = " << num << endl;
   }
   void absolute(double num)
   {
      if (num < 0)
         num = num * (-1);
      cout << "Absolute value = " << num << endl;
   }
};

int main()
{
   int choice = 0;
   Number no;
   do
   {
      cout << endl
           << "Menu: " << endl;
      cout << "1.Integer number" << endl;
      cout << "2.Float number" << endl;
      cout << "3.Double number" << endl;
      cout << "4.Exit" << endl;
      cout << "Enter your choice: ";
      cin >> choice;
      switch (choice)
      {
      case 1:
      {
         int n;
         cout << "Enter number: ";
         cin >> n;
         no.absolute(n);
         break;
      }
      case 2:
      {
         float n;
         cout << "Enter number: ";
         cin >> n;
         no.absolute(n);
         break;
      }
      case 3:
      {
         double n;
         cout << "Enter number: ";
         cin >> n;
         no.absolute(n);
         break;
      }
      case 4:
      {
         cout << "Thank You!!";
         break;
      }
      default:
         cout << "Invalid Choice!!" << endl;
      }
   } while (choice != 4);
   return 0;
}
