#include <iostream>

class Fibonacci
{

public:
   int a, b, c;
   void generate(int);
};

void Fibonacci::generate(int n)
{
   a = 0;
   b = 1;

   std::cout << a << " " << b;

   for (int i = 1; i <= n - 2; i++)
   {
      c = a + b;
      std::cout << " " << c;

      a = b;
      b = c;
   }
}

int main()
{
   int n;
   std::cout << "Enter the number of terms to be printed: ";
   std::cin >> n;
   Fibonacci fib;
   fib.generate(n);
   return 0;
}
