#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c ;
	cout << "Enter a character" << endl;
	cin >> c;

	int valueOfChar = c ;
	// cout << "c: " << valueOfChar;

	if(valueOfChar >= 65 && valueOfChar <= 90){
		cout << 1 << endl;
	}
	else if(valueOfChar >= 97 && valueOfChar <= 122){
		cout << 0 << endl;
	}
	else{
		cout << -1 << endl;
	}
	
}
