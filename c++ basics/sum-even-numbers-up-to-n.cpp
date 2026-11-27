
#include<iostream>
using namespace std;


int main(){
  int n;
  cout << "Enter n" << endl;
  cin >> n;

  int start = 1;
  int sum = 0;

  while(start <= n){
	if(start % 2 == 0){
    	sum += start;
    }
	start +=1;
  }
  cout << sum << endl;
  
}