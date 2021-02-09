#include <iostream>

using namespace std;

int main(){
	
	int input, i, z, j, k;
	
	cout << "Enter a number: ";
	
	cin >> input;
	
	for(i = 1; i < input; i++){
		
		k = 0;
		
		for(j = 2; j < i; j++){
			if(i % j == 0){
				k++;
			}
		}
		if(k == 0){
			cout << i << " ";
		}	
	}
	
	return 0;
}
