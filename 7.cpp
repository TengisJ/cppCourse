#include <iostream>

using namespace std;

int main(){
	
	int input, x;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	for(int i = 2; i < input; i++){
		
		if(input % i == 0){
			cout << "Number is Not Prime. ";
			break;
		}
		else{
			cout << "Number is Prime. ";
		}
	}
	
	return 0;
}
