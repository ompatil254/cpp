#include <iostream>
using namespace std;

class Exterior
{
public:
   int area;

   void setArea(int l, int b, int h)
   {
      area = l * b + 2 * (b * h + l * b);
   }
};

class Paint : public Exterior
{
public:
   int price;
   int menu;
   void setPaint()
   {
      cout << "\nChoose the paint brand\n1. Nerolac(146/L)\n2. Asian Paints(399/L)\n3. Indigo Paints(190/L)\n4. Dulux(304/L)\n";
      cin >> menu;
      switch (menu)
      {

      case 1:
         price = 146;
         break;

      case 2:
         price = 399;
         break;

      case 3:
         price = 190;
         break;

      case 4:
         price = 304;
         break;

      default:
         std::cout << "Invalid option. Exiting...\n";
         break;
      }
   }
};

class Bill : public Paint
{
public:
   float getBill()
   {
      return area * price * 0.01;
   }
};

int main()
{
   int l, b, h;
   Bill b1;
   std::cout << "Enter length, breadth and height\n";
   std::cin >> l >> b >> h;
   b1.setArea(l, b, h);
   b1.setPaint();
   cout << "The total price of paint is " << b1.getBill();
}