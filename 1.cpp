#include <iostream>

using namespace std;

int main(){
	
	int input, x, rem, reverse = 0;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	while(input != 0){    
	    rem = input % 10;      
	    reverse = reverse * 10 + rem;    
	    input /= 10;    
}
	for(; reverse != 0; reverse /= 10){
		x = reverse % 10;
		switch(x){
			case 0:
				cout << "Zero ";
				break;
			case 1:
				cout << "One ";
				break;
			case 2:
				cout << "Two ";
				break;
			case 3:
				cout << "Three ";
				break;
			case 4:
				cout << "Four ";
				break;
			case 5:
				cout << "Five ";
				break;
			case 6:
				cout << "Six ";
				break;
			case 7:
				cout << "Seven ";
				break;
			case 8:
				cout << "Eight ";
				break;
			case 9:
				cout << "Nine ";
				break;
			default:
				break;
		}
	}
	return 0;
}
