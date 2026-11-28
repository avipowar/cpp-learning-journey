#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= (n - i))
        {
            cout << " ";
            space += 1;
        }

        int j = 1;
        int k = i;
        while (j <= i)
        {
            cout << k;
            j += 1;
            k += 1;
        }
        cout << endl;
        i += 1;
    }
}
