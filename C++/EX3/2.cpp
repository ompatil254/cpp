#include <iostream>

using namespace std;

class area
{
public:
   float a;
   area()
   {
      a = 0;
   }

   area(float radius)
   {
      a = 3.14 * radius * radius;
      cout << "Area of the Circle : " << a << endl;
   }

   area(float length, float breadth)
   {
      a = length * breadth;
      cout << "Area of the Rectangle : " << a << endl;
   }

   area(float length, float breadth, float height)
   {
      a = (2 * length * breadth) + (2 * height * breadth) + (2 * length * height);
      cout << "Area of Cuboid : " << a << endl;
   }
};

int main()
{
   float r, l, b, h;
   int x;
   cout << "Select the Geometric Shape." << endl;
   cout << "1. Circle\n"
        << "2. Rectangle\n"
        << "3. Cuboid\n";
   cin >> x;

   switch (x)
   {
   case 1:
   {
      cout << "Value of Radius : ";
      cin >> r;
      area a1(r);
      break;
   }

   case 2:
   {
      cout << "Value of Length : ";
      cin >> l;
      cout << "Value of Breadth : ";
      cin >> b;
      area a2(l, b);
      break;
   }

   case 3:
   {
      cout << "Value of Length : ";
      cin >> l;
      cout << "Value of Breadth : ";
      cin >> b;
      cout << "Value of Height : ";
      cin >> h;
      area a3(l, b, h);

      break;
   }

   default:
   {
      cout << "Invalid option. Exiting...";
      break;
   }
   }

   return 0;
}
