#include <iostream>

using namespace std;

int main(){
	
	int input;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	cout << "Factors of " << input << endl;
	for(int i = 1; i <= input; i++){
		
		if(input % i == 0){
			cout << i << endl;
		}
	}
	
	return 0;
}
