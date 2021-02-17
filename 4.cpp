#include<iostream>

using namespace std;

int main(){
	
	int s, max, min;
	
	cout << "Enter the size: ";
	
	cin >> s;
	
	int x[s];
	
	cout << "Enter elements: ";
	
	
	for(int i = 0; i < s; i++){
		
		cin >> x[i];
	
	}
	
	max = x[0];
	
	min = x[0];
	
	for(int i = 1; i < s; i++){
	
		if(x[i] > max){
			
			max = x[i];
		}
		
		if(x[i] < min){
			
			min = x[i];
		}

	}
	
	cout << "Max: " << max << "\nMin: " << min;
	
	
	return 0;
}
