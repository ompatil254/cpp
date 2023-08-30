#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
   int emp_id;
   string name;

public:
   // constructor
   Employee(int id, string n)
   {
      emp_id = id;
      name = n;
   }
   // getter methods
   int getId()
   {
      return emp_id;
   }
   string getName()
   {
      return name;
   }
};
class FullTimeEmployee : public Employee
{
private:
   int basicSal, dallowance, hra, monthlysal;

public:
   FullTimeEmployee(int eid, string n, int bsal, int da, int HRA) : Employee(eid, n)
   {
      basicSal = bsal;
      dallowance = da;
      hra = HRA;
   }
   void calculateSalary()
   {
      monthlysal = basicSal + dallowance + hra;
      cout << "Employee ID: " << getId();
      cout << "Name: " << getName();
      cout << "Monthly Salary = " << monthlysal;
   }
};
class PartTimeEmployee : public Employee
{
private:
   int rate, hours;
   float dailyWages;

public:
   PartTimeEmployee(int eid, string n, int r, int hrs) : Employee(eid, n)
   {
      rate = r;
      hours = hrs;
   }
   void calculateWages()
   {
      dailyWages = (rate * hours) / 30.0;
      cout << "Employee ID: " << getId();
      cout << "Name: " << getName();
      cout << "Daily Wages = " << dailyWages;
   }
};
int main()
{
   int eid, da, hra, bsal, r, hrs;
   string n;
   int choice = 0;
   while (choice != 3)
   {
      cout << endl
           << "Type of Employee: " << endl;
      cout << "1.Part Time" << endl;
      cout << "2.Full Time" << endl;
      cout << "3.Exit" << endl;
      cout << "Enter your choice: ";

      cin >> choice;
      switch (choice)
      {
      case 1:
      {
         cout << "Enter Employee ID: ";
         cin >> eid;
         cout << "Enter Employee name: ";
         cin >> n;
         cout << "Enter Basic Salary: ";
         cin >> bsal;
         cout << "Enter Dearness Allowance: ";
         cin >> da;
         cout << "Enter HRA: ";
         cin >> hra;
         FullTimeEmployee obj(eid, n, bsal, da, hra);
         obj.calculateSalary();
         break;
      }
      case 2:
      {
         cout << endl;
         cout << "Enter Employee ID: ";
         cin >> eid;
         cout << "Enter Employee name: ";
         cin >> n;
         cout << "Enter Rate: ";
         cin >> r;
         cout << "Enter Hours worked: ";
         cin >> hrs;
         PartTimeEmployee obj(eid, n, r, hrs);
         obj.calculateWages();
         break;
      }
      case 3:
      {
         cout << "Thank You!!";
         break;
      }
      default:
         cout << "Invalid Choice!!" << endl;
         break;
      }
   }
   return 0;
}
