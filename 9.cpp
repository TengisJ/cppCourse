#include <iostream>

using namespace std;

int main(){
	
	int input, temp, lD, x;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	temp = input;
	
	for(; input > 0; input /= 10){
		
		lD = input % 10;
		
		x += (lD * lD * lD);
	}
	if(x == temp){
		
		cout << "Number is an Armstrong";
		
	}
	else{
		
		cout << "Number is not an Armstrong";
	}
	return 0;
}
