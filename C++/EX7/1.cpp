#include <iostream>
#include <string>

class Product
{
protected:
   int barcode;
   std::string prodname;

public:
   Product()
   {
      barcode = 0;
      prodname = "NULL";
   }
   int getBarcode()
   {
      return barcode;
   }
   std::string getProdname()
   {
      return prodname;
   }

   virtual void scanner()
   {
      std::cout << "\nEnter the name of the product: ";
      getline(std::cin >> std::ws, prodname);
      std::cout << "Barcode: ";
      std::cin >> barcode;
   }
   virtual void printer()
   {
      std::cout << "\nName of product: " << prodname;
      std::cout << "\nBarcode: " << barcode;
   }
};

class PrepackedFood : public Product
{
   int unitprice;

public:
   void scanner()
   {
      std::cout << "\nEnter the unit price of the product: ";
      std::cin >> unitprice;
   }
   void printer()
   {
      std::cout << "\nUnit price: " << unitprice;
   }
};

class FreshFood : public Product
{
   int weight, KgPrice;

public:
   void scanner()
   {
      std::cout << "Enter the weight of the product(in grams): ";
      std::cin >> weight;
      std::cout << "Enter the price per kg: ";
      std::cin >> KgPrice;
   }
   void printer()
   {
      std::cout << "\nWeight: " << weight;
      std::cout << "\nPrice per kg: " << KgPrice;
   }
};

int main()
{
   Product *ptr1;
   int menu;
   std::cout << "Select the type of food.\n1. Prepacked food\n2. Fresh food\n";
   std::cin >> menu;
   switch (menu)
   {
   case 1:
   {
      ptr1 = new PrepackedFood;
      ptr1->Product::scanner();
      ptr1->scanner();
      ptr1->Product::printer();
      ptr1->printer();
      break;
   }

   case 2:
   {
      ptr1 = new FreshFood;
      ptr1->Product::scanner();
      ptr1->scanner();
      ptr1->Product::printer();
      ptr1->printer();
      break;
   }

   default:
   {
      std::cout << "Invalid option.\nExiting...";
      break;
   }
   }
}