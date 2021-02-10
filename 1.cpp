#include <iostream>

using namespace std;

int main(){
	
	int input, i, j;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	for(i = 1; i <= input; i++){
		
		for(j = 1; j <= input - i; j++){
			
			cout << " ";
		}
		
		for(j = 1; j <= input; j++){
			
			if(i == 1 || j == 1 || j == input || i == input){
				
				cout << "*";
			}
			else{
				
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
