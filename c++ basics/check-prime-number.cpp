#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter n number" <<endl;

    cin >> n;
    int d = 2;
    bool prime = false;
    while(d < n){
        if(n % d == 0){
            cout << "N is not prime" << endl;
            prime = true;
            d = n;
        }
        d += 1;
    }

    if(!prime){
        cout << "N is prime" <<endl;
    }

}