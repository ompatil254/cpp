#include <iostream>
using namespace std;
class Homes
{
public:
   int home;
   int rooms[4][4] = {{6, 5, 5, 4},
                      {5, 4, 4, 3},
                      {2, 3, 3, 3},
                      {2, 1, 2, 2}};
   int area[4][4] = {{525, 515, 495, 545},
                     {413, 378, 429, 360},
                     {294, 325, 342, 360},
                     {185, 142, 200, 138}};
   void homedisplay(int c)
   {
      cout << endl
           << "Homes :" << endl;
      // cout<<endl<<"Rooms \t\t Area"<<endl;
      cout << "1. " << rooms[c - 1][0] << "BHK of area " << area[c - 1][0] << "sq. mtrs." << endl;
      cout << "2. " << rooms[c - 1][1] << "BHK of area " << area[c - 1][1] << "sq. mtrs." << endl;
      cout << "3. " << rooms[c - 1][2] << "BHK of area " << area[c - 1][2] << "sq. mtrs." << endl;
      cout << "4. " << rooms[c - 1][3] << "BHK of area " << area[c - 1][3] << "sq. mtrs." << endl;
      cin >> home;
      cout << "Selected Home:" << endl;
      // cout<<endl<<"Rooms \t\t Area"<<endl;
      cout << rooms[c - 1][home - 1] << "BHK of area " << area[c - 1][home - 1] << "sq. mtrs." << endl;
   }
};
class Cars
{
public:
   int car;
   string CarNumber[4][3] = {{" MH 03 BR 2690", " MH 48 RG 1290", " MH 48 HF 2938"},
                             {" MH 03 CU 4935", " MH 03 TH 1399", " MH 48 EI 9182"},
                             {" MH 03 CW 7776", " MH 03 JU 4302", " MH 48 RB 2030"},
                             {" MH 03 BU 7717", " MH 48 JK 4021", " MH 03 EF 1234"}};
   string seats[4][3] = {{"   5   ", "   4   ", "   5   "},
                         {"   5   ", "   7   ", "   5   "},
                         {"   5   ", "   4   ", "   5   "},
                         {"   7   ", "   4   ", "   5   "}};
   string model[4][3] = {{"Rolls Royce Phantom    ", "Bentley Continental    ", "Porsche Taycan         "},
                         {"Mercedes-Benz C-Class  ", "Mercedes Benz GLB      ", "Lexus RX               "},
                         {"BMW 2 Series           ", "Toyota Fortuner        ", "Honda City Hybrid      "},
                         {"Alcazar Prestige Turbo ", "Maruti Alto K10        ", "Hyundai Aura           "}};
   string title[3] = {"         Model         ", "        Seating     ", " Number"};
   void cardisplay(int c)
   {
      cout << endl
           << "Cars :" << endl;
      cout << endl
           << title[0] << title[1] << title[2] << endl;
      cout << "1. " << model[c - 1][0] << "\t" << seats[c - 1][0] << "\t" << CarNumber[c - 1][0] << endl;
      cout << "2. " << model[c - 1][1] << "\t" << seats[c - 1][1] << "\t" << CarNumber[c - 1][1] << endl;
      cout << "3. " << model[c - 1][2] << "\t" << seats[c - 1][2] << "\t" << CarNumber[c - 1][2] << endl;
      cout << "4. " << model[c - 1][3] << "\t" << seats[c - 1][3] << "\t" << CarNumber[c - 1][3] << endl;
      cin >> car;
      cout << "Selected Car:" << endl;
      cout << endl
           << title[0] << title[1] << title[2] << endl;
      cout << model[c - 1][car - 1] << "\t\t" << seats[c - 1][car - 1] << "\t" << CarNumber[c - 1][car - 1] << endl;
   }
};
class motorHome : public Homes, public Cars
{
public:
   int c;
   string category[4] = {"Luxury", "First Class", "Middle Class", "Economy"};

   void display(int type)
   {
      if (type == 1 || type == 2)
      {
         cout << endl
              << "In Which Category are you looking for:" << endl;
         cout << "1. " << category[0] << endl;
         cout << "2. " << category[1] << endl;
         cout << "3. " << category[2] << endl;
         cout << "4. " << category[3] << endl;
         cin >> c;
         cout << "Selected Category: " << category[c - 1] << endl;
         switch (type)
         {
         case 1:
            homedisplay(c);
            break;
         case 2:
            cardisplay(c);
            break;
         }
      }
      else if (type == 3)
         cout << "Thank You!" << endl;
      else
         cout << "Invalid Input" << endl;
   }
};
int main()
{
   int type;
   motorHome obj;
   do
   {
      cout << endl
           << "What are you looking for:" << endl;
      cout << "1. Homes" << endl;
      cout << "2. Cars" << endl;
      cout << "3. Exit" << endl;
      cin >> type;
      obj.display(type);
   } while (type != 3);

   return 0;
}
