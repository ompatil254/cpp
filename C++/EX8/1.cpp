#include <iostream>

class Vehicle
{
public:
   int wheels, enginecap;

   Vehicle()
   {
      wheels = 0;
      enginecap = 0;
   }
   virtual ~Vehicle()
   {
      std::cout << "Base Destructor called" << std::endl;
   }

   virtual void spec() = 0;
   virtual void display_stats() = 0;
};

class LMV : public Vehicle
{
   int speed, mileage, rpm;

public:
   LMV()
   {
      speed = 0;
      mileage = 0;
      rpm = 0;
   }
   ~LMV()
   {
      std::cout << "Derived Destructor called" << std::endl;
   }
   void spec()
   {
      wheels = 4;
      std::cout << "Engine capacity: ";
      std::cin >> enginecap;
      std::cout << "Speed: ";
      std::cin >> speed;
      std::cout << "Mileage: ";
      std::cin >> mileage;
      std::cout << "RPM: ";
      std::cin >> rpm;
   }
   void display_stats()
   {
      std::cout << "Type of vehicle: Light Motor Vehicle" << std::endl
                << "No. of wheels: " << wheels << std::endl
                << "Engine capacity: " << enginecap << std::endl
                << "Speed: " << speed << std::endl
                << "Mileage: " << mileage << std::endl
                << "RPM: " << rpm << std::endl;
   }
};

class HMV : public Vehicle
{
   int speed, mileage, rpm;

public:
   HMV()
   {
      speed = 0;
      mileage = 0;
      rpm = 0;
   }
   ~HMV()
   {
      std::cout << "Derived Destructor called" << std::endl;
   }
   void spec()
   {
      std::cout << "Wheels: ";
      std::cin >> wheels;
      std::cout << "Engine capacity: ";
      std::cin >> enginecap;
      std::cout << "Speed: ";
      std::cin >> speed;
      std::cout << "Mileage: ";
      std::cin >> mileage;
      std::cout << "RPM: ";
      std::cin >> rpm;
   }
   void display_stats()
   {
      std::cout << "Type of vehicle: Heavy Motor Vehicle" << std::endl
                << "No. of wheels: " << wheels << std::endl
                << "Engine capacity: " << enginecap << std::endl
                << "Speed: " << speed << std::endl
                << "Mileage: " << mileage << std::endl
                << "RPM: " << rpm << std::endl;
   }
};

class TW : public Vehicle
{
   int speed, mileage, rpm;

public:
   TW()
   {
      speed = 0;
      mileage = 0;
      rpm = 0;
   }
   ~TW()
   {
      std::cout << "Derived Destructor called" << std::endl;
   }
   void spec()
   {
      std::cout << "Wheels: ";
      std::cin >> wheels;
      std::cout << "Engine capacity: ";
      std::cin >> enginecap;
      std::cout << "Speed: ";
      std::cin >> speed;
      std::cout << "Mileage: ";
      std::cin >> mileage;
      std::cout << "RPM: ";
      std::cin >> rpm;
   }

   void display_stats()
   {
      std::cout << "Type of vehicle: Two Wheeler" << std::endl
                << "Engine capacity: " << enginecap << std::endl
                << "Speed: " << speed << std::endl
                << "Mileage: " << mileage << std::endl
                << "RPM: " << rpm << std::endl;
   }
};

int main()
{
   Vehicle *v[5];
   int menu;
   std::cout << "Select the type of the vehicle.\n1. LMV\n2. HMV\n3. TW\n";
   std::cin >> menu;
   switch (menu)
   {
   case 1:
   {
      v[0] = new LMV;
      v[0]->spec();
      v[0]->display_stats();
      v[0]->~Vehicle();
      break;
   }

   case 2:
   {
      v[1] = new HMV;
      v[1]->spec();
      v[1]->display_stats();
      v[1]->~Vehicle();
   }

   case 3:
   {
      v[2] = new TW;
      v[2]->spec();
      v[2]->display_stats();
      v[2]->~Vehicle();
      break;
   }

   default:
      std::cout << "Invalid Option. Exiting...";
      break;
   }
}