#include<iostream>

using namespace std;

int main(){
	
	int s, countEven = 0, countOdd = 0;
	
	cout << "Enter the size: ";
	
	cin >> s;
	
	int x[s];
	
	cout << "Enter elements: ";
	
	for(int i = 0; i < s; i++){
		
		cin >> x[i];
	}
	for(int i = 0; i < s; i++){
		
		if(x[i] % 2 == 0){
			
			countEven++;
		}
		else if(x[i] % 2 != 0){
			
			countOdd++;
		}
	}
	cout << "Even: " << countEven << "\nOdd: " << countOdd;
	
	
	return 0;
}
