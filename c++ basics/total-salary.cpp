#include <iostream>
using namespace std;

int main()
{
    long long salary;
    char grade;

    cin >> salary >> grade;

    int allow;

    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }

    long long total_salary = (salary * 159 + 50) / 100 + allow;

    cout << total_salary;
}