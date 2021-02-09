#include <iostream>

using namespace std;

int main(){
	
	int input, power;
	
	cout << "Enter a number: ";
	
	cin >> input >> power;
	
	for(int i = 1; i < power; i++){
		
		input *= input;
	}
	cout << "Power of the number is " << input;
	return 0;
}
