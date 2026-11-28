#include <iostream>
using namespace std;
/*
1
23
345
4567
*/

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
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
