#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int num ;
    cout << "Enter num" <<endl;
    cin>> num;

    int sumE = 0;
    int sumO = 0;

    while(num > 0){
        int last = num % 10;

        if(last % 2 == 0){
            sumE += last;
        }
        else{
            sumO += last;
        }

         num = num / 10;
    }
    cout << sumE << " " << sumO <<endl;
	
}
