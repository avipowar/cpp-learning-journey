#include <iostream>
using namespace std;

/*
pattern - 2 n = 3

* * 1
* 2 3
4 5 6

*/

int main() {
    int n ;
    cout << "Enter n" <<endl;
    cin >> n;

    int i = 1;
    int val = 1;
    while(i <= n){
        int k = 1;
        while(k <= n-i){
            cout << " ";
            k += 1;
        }


        int j = 1;
        while(j <= i){
            cout << val;
            j += 1;
            val += 1;
        }
        cout << endl;
        i += 1;
    }
}