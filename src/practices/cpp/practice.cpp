#include <iostream>

using namespace std;

int main()
{
    int year = 0;
    cout << "Please enter a year: ";
    cin >> year;

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << "The year is leap year." << endl;
        }
        else
        {
            cout << "The year is not leap year." << endl;
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            cout << "The year is leap year." << endl;
        }
        else
        {
            cout << "The year is not leap year." << endl;
        }
    }
    return 0;
}