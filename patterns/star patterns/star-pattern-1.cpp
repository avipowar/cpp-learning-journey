#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int space = 1;
        while (space <= (n - (i + 1)))
        {
            cout << " ";
            space += 1;
        }

        int j = 1;
        char k = '*';
        while (j <= (2 * i) + 1)
        {
            cout << k;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
