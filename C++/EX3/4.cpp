#include <iostream>
#include <math.h>

class cube
{
public:
   int a;
   float b;
   cube()
   {
   }

   cube(int a)
   {
      std::cout << (int)pow(a, 3) << " ";
   }

   cube(float b)
   {
      std::cout << (float)pow(b, 3) << " ";
   }
};
int main()
{
   cube c1;
   int t;
   std::cout << "Select the number to be cubed.\n1. Integer\n2. Decimal\n";
   std::cin >> t;
   switch (t)
   {
   case 1:
      std::cout << "Enter the number\n";
      std::cin >> c1.a;
      cube(c1.a);
      break;

   case 2:
      std::cout << "Enter the number\n";
      std::cin >> c1.b;
      cube(c1.b);
      break;

   default:
      std::cout << "Invalid option. Exiting...\n";
      break;
   }
}