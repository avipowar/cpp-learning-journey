#include <iostream>
using namespace std;

int main() {
    int f;
    cout << "Enter Fah Value" <<endl;
    cin >> f;

    int c = (5 * (f-32))/ 9;
    cout << "Fah Value :" <<  c << endl;
}