#include <iostream>

using namespace std;

int main(){
	
	int input, temp;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	for(int i = input - 1; i > 0; i--){
		
		input = input  * i;
	}
	
	cout << input;
	return 0;
}
