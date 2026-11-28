#include <iostream>
using namespace std;

/*
pattern -1

1
1 2
1 2 3

*/

int main() {
    int n ;
    cout << "Enter n";
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}