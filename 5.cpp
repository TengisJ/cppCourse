#include <iostream>

using namespace std;

int main(){
	
	int input, i, j;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	for(i = 1; i <= input; i++){
		
		for(j = 1; j <= i; j++){
			
			if(i == 1 || i == 2 || i == input || i == j || j == 1){
				
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
