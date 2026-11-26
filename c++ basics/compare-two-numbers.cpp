#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout << "Enters two numbers" << endl;

    cin >> a >> b;

    if(a == b) {
        cout << "Hey numbers are equal" << endl;
    }
    else {
        if(a < b){
            cout << "a  is less" << endl;
        }else{
            cout << "a is grater" << endl;
        }
    }

}