#include <iostream>
#include <cmath>
using namespace std;

class Logarithm
{

public:
    float result;
    virtual void Log(int n) = 0;
};
class Log10 : public Logarithm
{
public:
    void Log(int n)
    {

        result = log(n) / log(10);
        cout << result << endl;
    }
};

class LogE : public Logarithm
{
public:
    void Log(int n)
    {
        result = log(n);
        cout << result << endl;
    }
};

class Log2 : public Logarithm
{
    void Log(int n)
    {
        result = log(n) / log(2);
        cout << result << endl;
    }
};
int main()
{

    Logarithm *ptr;
    int n;
    int choice = 0;
    do
    {

        cout << "Choose Logarithm:" << endl;
        cout << "1.Base 2" << endl;
        cout << "2.Base e" << endl;
        cout << "3.Base 10" << endl;
        cout << "4.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter number" << endl;
            cin >> n;
            Log2 obj;
            ptr = &obj;
            ptr->Log(n);
            break;
        }

        case 2:
        {
            cout << "Enter number" << endl;
            cin >> n;
            LogE obj;
            ptr = &obj;
            ptr->Log(n);
            break;
        }

        case 3:
        {
            cout << "Enter number" << endl;
            cin >> n;
            Log10 obj;
            ptr = &obj;
            ptr->Log(n);
            break;
        }
        case 4:
            cout << "Invalid input!!" << endl;
        default:
            cout << "Invalid input!!" << endl;
        }
    } while (choice != 4);
}
