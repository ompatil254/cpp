#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
   int rno;
   string name;
   Student()
   {
      cout << "Please enter the following details\nStudent's name: ";
      getline(cin >> ws, name);
      cout << "Roll no: ";
      cin >> rno;
   }
};

class Exam : public Student
{
public:
   int em, ec, psoop, eb, dsm, cs;
   Exam()
   {
      cout << "\nEnter the marks obtained out of 100.\nEM: ";
      cin >> em;
      cout << "EC: ";
      cin >> ec;
      cout << "PSOOP: ";
      cin >> psoop;
      cout << "EB: ";
      cin >> eb;
      cout << "DSM: ";
      cin >> dsm;
      cout << "CS";
      cin >> cs;
   }
};

class Results : public Exam
{
public:
   int totmarks;
   float percentage;
   Results()
   {
      totmarks = em + ec + psoop + eb + dsm + cs;
      percentage = totmarks / 6;
      cout << "Total marks: " << totmarks << "\nPercentage: " << percentage;
   }
};

int main()
{
   Results s1;
}