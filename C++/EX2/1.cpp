#include <iostream>
#include <string>
#include <algorithm>

class Employee
{
private:
   std::string name;
   int salary;

public:
   int age;
   Employee()
   {
      name = "Unknown";
      age = 18;
      salary = 20000;
   }

   int getAge()
   {

      return age;
   }

   std::string getName()
   {

      return name;
   }

   int getSalary()
   {

      return salary;
   }

   void setName(std::string name)
   {
      this->name = name;
   }

   void setAge(int age)
   {
      this->age = age;
   }

   void setSalary(int salary)
   {
      this->salary = salary;
   }
};

int main()
{
   Employee e[2];
   std::string name;
   int age, salary;
   for (int i = 0; i < 3; i++)
   {
      std::cout << "Name: ";
      std::getline(std::cin >> std::ws, name);
      e[i].setName(name);
      std::cout << "Age: ";
      std::cin >> age;
      e[i].setAge(age);
      std::cout << "Salary: ";
      std::cin >> salary;
      e[i].setSalary(salary);
   }

   std::sort(std::begin(e), std::end(e),
             [](Employee const &a, Employee const &b) -> bool
             { return a.age < b.age; });

   for (int i = 0; i < 3; i++)
   {
      std::cout << e[i].getName() << std::endl
                << e[i].getAge() << std::endl
                << e[i].getSalary() << std::endl;
   }
}