#include <iostream>

class mobile
{
public:
   int brand;
   mobile()
   {
      int menu;
      std::cout << "Welcome to the mobile store!\nPlease select the type of mobile you want to buy.\n1. Android.\n2.IOS\n";
      std::cin >> menu;
      switch (menu)
      {
      case 1:
      {
         std::cout << "Choose the brand.\n1. Samsung\n2. Xiaomi\n3. Google\n4. OnePlus\n";
         std::cin >> brand;
         break;
      }
      case 2:
      {
         brand = 5;
         break;
      }
      defualt:
      {
         std::cout << "Invalid Option. Exiting...\n";
         break;
      }
      }
   }
};

class model : public mobile
{

public:
   int price;
   model()
   {
      switch (brand)
      {
      case 1:
      {
         int menu;
         std::cout
             << "Choose the model.\n1. Galaxy S23 Ultra\n2. Galaxy S22\n3. Galaxy S22\n4. Galaxy S22 Ultra\n";
         std::cin >> menu;
         switch (menu)
         {
         case 1:
         {
            price = 100000;
            break;
         }

         case 2:
         {
            price = 130000;
            break;
         }

         case 3:
         {
            price = 80000;
            break;
         }

         case 4:
         {
            price = 120000;
            break;
         }

         default:
         {
            std::cout << "Invalid option.\nExiting...";
            break;
         }
         }
         break;
      }
      case 2:
      {
         int menu;
         std::cout
             << "Choose the model.\n1. Redmi Note 11\n2. Xiaomi 12\n3. Xiaomi 12 pro\n4. Redmi note K52\n";
         std::cin >> menu;
         switch (menu)
         {
         case 1:
         {
            price = 100000;
            break;
         }

         case 2:
         {
            price = 130000;
            break;
         }

         case 3:
         {
            price = 80000;
            break;
         }

         case 4:
         {
            price = 120000;
            break;
         }

         default:
         {
            std::cout << "Invalid option.\nExiting...";
            break;
         }
         }
         break;
      }

      case 3:
      {
         int menu;
         std::cout
             << "Choose the model.\n1. Pixel 5\n2. Pixel 4\n";
         std::cin >> menu;
         switch (menu)
         {
         case 1:
         {
            price = 100000;
            break;
         }

         case 2:
         {
            price = 130000;
            break;
         }

         default:
         {
            std::cout << "Invalid option.\nExiting...";
            break;
         }
         }
         break;
      }

      case 4:
      {
         int menu;
         std::cout
             << "Choose the model.\n1. Iphone 14\n2. Iphone 14 Pro\n3. Iphone 13\n4. Iphone 13 Pro\n";
         std::cin >> menu;
         switch (menu)
         {
         case 1:
         {
            price = 100000;
            break;
         }

         case 2:
         {
            price = 130000;
            break;
         }

         case 3:
         {
            price = 80000;
            break;
         }

         case 4:
         {
            price = 120000;
            break;
         }

         default:
         {
            std::cout << "Invalid option.\nExiting...";
            break;
         }
         }
         break;
      }

      case 5:
      {
         int menu;
         std::cout
             << "Choose the model.\n1. Iphone 14\n2. Iphone 14 Pro\n3. Iphone 13\n4. Iphone 13 Pro\n";
         std::cin >> menu;
         switch (menu)
         {
         case 1:
         {
            price = 100000;
            break;
         }

         case 2:
         {
            price = 130000;
            break;
         }

         case 3:
         {
            price = 80000;
            break;
         }

         case 4:
         {
            price = 120000;
            break;
         }

         default:
         {
            std::cout << "Invalid option.\nExiting...";
            break;
         }
         }
         break;
      }
      default:
      {
         std::cout << "Invalid option.\nExiting...";
         break;
      }
      }
   }
};
class bill : public model
{
public:
   bill()
   {
      std::cout << "Your bill is Rs " << price;
   }
};

int main()
{
   bill b1;
}