#include <iostream>

using namespace std;

int main(){
	
	int input, i, j;
	
	cout << "enter a number: ";
	
	cin >> input;
	
	for(i = 1; i <= input; i++){
		
		for(j = 1; j < 0 + i; j++){
			
			cout << " ";
		}
		for(j = 1; j <= input; j++){
			
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
