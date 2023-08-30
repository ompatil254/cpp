#include <iostream>
using namespace std;

class Shape
{
private:
   int peri;

public:
   void perimeter(int edge)
   {
      peri = edge * 4;
      cout << "Perimeter of square: " << peri << endl;
   }
   void perimeter(int length, int breadth)
   {
      peri = 2 * (length + breadth);
      cout << "Perimeter of rectangle: " << peri << endl;
   }
   void perimeter(int a, int b, int c)
   {
      peri = a + b + c;
      cout << "Perimeter of cuboid: " << peri << endl;
   }
};

int main()
{
   int choice = 0;
   Shape s;
   int x, y, z;
   do
   {
      cout << endl
           << "Menu: " << endl;
      cout << "1.Perimeter of square" << endl;
      cout << "2.Perimeter of rectangle" << endl;
      cout << "3.Perimeter of triangle" << endl;
      cout << "4.Exit" << endl;
      cout << "Enter your choice: ";
      cin >> choice;
      switch (choice)
      {
      case 1:
      {
         cout << "Enter edge of square: ";
         cin >> x;
         s.perimeter(x);
         break;
      }
      case 2:
      {
         cout << "Enter length: ";
         cin >> x;
         cout << "Enter breadth: ";
         cin >> y;
         s.perimeter(x, y);
         break;
      }
      case 3:
      {
         cout << "Enters side 1: ";
         cin >> x;
         cout << "Enter side 2: ";
         cin >> y;
         cout << "Enter side 3: ";
         cin >> z;
         s.perimeter(x, y, z);
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
