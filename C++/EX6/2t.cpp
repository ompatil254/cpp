#include <iostream>
using namespace std;
class book
{
   int pageCt;

public:
   void putc()
   {
      cout << "Page count of the book is: " << pageCt << endl;
   }

   void getc()
   {
      cout << "Enter the page count of the book:";
      cin >> pageCt;
   }
};

class tape
{
   float min;

public:
   void putm()
   {
      cout << "Playing time in minutes of the tape is: " << min << endl;
   }

   void getm()
   {
      cout << "Enter the playing time in minutes: ";
      cin >> min;
   }
};

class publications : public book, public tape
{
   string title;
   float price;

public:
   void putt()
   {
      cout << "Title of the book is: " << title << endl;
   }

   void gett()
   {
      cout << "Enter the title of the book:";
      getline(cin >> ws, title);
   }

   void putp()
   {
      cout << "Price of the book is: " << price << endl;
   }

   void getp()
   {
      cout << "Enter the price of the book:";
      cin >> price;
   }
};

int main()
{
   publications ob1;
   ob1.gett();
   ob1.getc();
   ob1.getm();
   ob1.getp();
   ob1.putt();
   ob1.putc();
   ob1.putm();
   ob1.putp();
}
