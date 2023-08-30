#include <iostream>
#include <windows.h>
#include <iomanip>

int main()
{
   int h, m, s, a, err;
   err = a = 0;
   while (err == 0)
   {
      std::cout << "Enter\nHour: ";
      std::cin >> h;
      std::cout << "Minutes: ";
      std::cin >> m;
      std::cout << "Seconds: ";
      std::cin >> s;
      if (h < 24 && m < 60 && s < 60)
         err++;
      else
         system("cls");
   }
   while (a == 0)
   {
      system("cls");
      std::cout << std::setw(2) << std::setfill('0') << h << ":" << std::setw(2) << std::setfill('0') << m << ":" << std::setw(2) << std::setfill('0') << s << std::endl;
      Sleep(1000);
      s++;
      if (s > 59)
      {
         s = 0;
         m++;
      }
      if (m > 59)
      {
         m = 0;
         h++;
      }
      if (h > 24)
      {
         h = 0;
      }
   }
   return 0;
}