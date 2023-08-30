#include <iostream>

class complex
{
private:
   int a, b;

public:
   complex()
   {
   }

   complex(int a1, int b1)
   {
      a = a1;
      b = b1;
   }

   void addComp(int a1, int b1, int a2, int b2)
   {
      a = a1 + a2;
      b = b1 + b2;
      std::cout << "The addition of the given Complex numbers is " << a << "+i" << b;
   }
};

int main()
{
   int a1, a2, b1, b2;
   complex c1, c2, c3;
   std::cout << "Enter first complex number\n";
   std::cin >> a1;
   std::cin >> b1;
   std::cout << "Enter second complex number\n";
   std::cin >> a2;
   std::cin >> b2;
   c1 = complex(a1, b1);
   c2 = complex(a2, b2);
   c3.addComp(a1, b1, a2, b2);
}