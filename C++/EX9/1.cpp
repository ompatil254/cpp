#include <bits/stdc++.h>
using namespace std;

class Add
{
public:
   void add(float x, float y)
   {
      cout << x + y;
   }
};

class Subtract
{
public:
   void sub(float x, float y)
   {
      cout << x - y;
   }
};

class Multiply
{
public:
   void multiply(float x, float y)
   {
      cout << x * y;
   }
};

class Division
{
public:
   void divide(float x, float y)
   {
      cout << x / y;
   }
};

class Log
{
public:
   void log(float x, float y)
   {
      cout << log10(x);
   }
};

class Power
{
public:
   void power(float x, float y)
   {
      cout << pow(x, y);
   }
};

class Calc : public Add, public Subtract, public Multiply, public Division, public Log, public Power
{
public:
   float x, y, result;

   int chkop(string c)
   {
      if (c == "+" || c == "-" || c == "*" || c == "/" || c == "log" || c == "^")
      {
         return 0;
      }
      else
      {
         return 1;
      }
   }

   int is_digits(string s)
   {
      for (int i = 0; i < s.length(); i++)
      {
         if (isdigit(s[i]) || s[i] == '.')
         {
            return 0;
         }
      }
      return 1;
   }

   int chkinput(string a, string b, string c)
   {
      int g = 1;
      try
      {
         if (is_digits(a) == 1 || is_digits(b) == 1)
         {
            throw g;
         }
      }
      catch (int g)
      {
         cout << "Input value is not a number\nPlease enter the data in the format: x (operator) y\n";
         return 1;
      }

      try
      {
         if (chkop(c) == 1)
         {
            throw g;
         }
      }
      catch (int g)
      {
         cout << "Invalid Operator " << c << endl
              << "Please enter the operator correctly\n";
         return 1;
      }

      try
      {
         if (a == "+" || b == "+" || a == "-" || b == "-" || a == "*" || b == "*" || a == "/" || b == "/" || a == "log" || b == "log" || a == "^" || b == "^")
         {
            throw g;
         }
      }
      catch (int g)
      {
         cout << "Input value is not a number\nPlease enter the data correctly in the format: x (operator) y\n";
         return 1;
      }

      return 0;
   }

   float convstr(string a)
   {
      float x = stof(a);
      return x;
   }
};

int main()
{
   string a, b, c;
   cout << "Enter the equation.\n";
input:
   cin >> a >> c >> b;
   Calc c1;
   if (c1.chkinput(a, b, c))
   {
      goto input;
   }

   if (c == "+")
   {
      c1.add(c1.convstr(a), c1.convstr(b));
   }

   if (c == "-")
   {
      c1.sub(c1.convstr(a), c1.convstr(b));
   }

   if (c == "*")
   {
      c1.multiply(c1.convstr(a), c1.convstr(b));
   }

   if (c == "/")
   {
      try
      {
         if (b == "0")
         {
            throw b;
         }
      }
      catch (...)
      {
         cout << "The number cannot be 0\nPlease enter the values again.\n";
         goto input;
      }
      c1.divide(c1.convstr(a), c1.convstr(b));
   }

   if (c == "log")
   {
      try
      {
         if (a == "0")
         {
            throw a;
         }
      }
      catch (...)
      {
         cout << "The number cannot be 0\nPlease enter the values again.\n";
         goto input;
      }

      c1.log(c1.convstr(a), c1.convstr(b));
   }

   if (c == "^")
   {
      c1.power(c1.convstr(a), c1.convstr(b));
   }
}