#include <iostream>
#include <string>

class Posting
{

public:
   int courseWork, AptTest, Techtest, interview;

   Posting()
   {
   }

   Posting(int courseWork, int AptTest, int TechTest, int interview)
   {
      if (courseWork + AptTest + TechTest + interview >= 80)
      {
         std::cout << "Congratulation! You've been selected.\n";
      }
      else
      {
         std::cout << "Sorry you've been rejected\n";
      }
   }

   Posting(int TechTest, int interview)
   {
      if (TechTest + interview >= 85)
      {
         std::cout << "Congratulation! You've been selected.\n";
      }
      else
      {
         std::cout << "Sorry you've been rejected\n";
      }
   }

   Posting(int interview)
   {
      if (interview >= 90)
      {
         std::cout << "Congratulation! You've been selected.\n";
      }
      else
      {
         std::cout << "Sorry you've been rejected\n";
      }
   }
};

int main()
{
   int t;
   Posting e1;
   std::cout
       << "Which post do you want to apply?\n1. Programmer\n2. Team Leader\n3. Project Manager\n";
   std::cin >> t;

   switch (t)
   {
   case 1:
      std::cout << "Enter the following details.\nCourse Work: ";
      std::cin >> e1.courseWork;
      std::cout << "Aptitude Test: ";
      std::cin >> e1.AptTest;
      std::cout << "Techtest: ";
      std::cin >> e1.Techtest;
      std::cout << "Interview: ";
      std::cin >> e1.interview;
      Posting(e1.courseWork, e1.AptTest, e1.Techtest, e1.interview);
      break;

   case 2:
      std::cout << "Enter the following details.\nTech Test: ";
      std::cin >> e1.Techtest;
      std::cout << "Interview: ";
      std::cin >> e1.interview;
      Posting(e1.Techtest, e1.interview);
      break;

   case 3:
      std::cout << "Enter the following details.\nInterview: ";
      std::cin >> e1.interview;
      Posting(e1.interview);
      break;

   default:
      break;
   }
}