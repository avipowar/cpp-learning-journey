
#include <iostream>
using namespace std;

int main() {
    int start, end, step;
    cin >> start >> end >> step;

    int currentFahrenheitValue = start;

    while (currentFahrenheitValue <= end) {
        int celsiusValue = (5.0 / 9) * (currentFahrenheitValue - 32);

        cout << currentFahrenheitValue << " "
             << celsiusValue << endl;

        currentFahrenheitValue = currentFahrenheitValue + step;
    }

    return 0;
}
