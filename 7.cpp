#include<iostream>

using namespace std;

int main(){
	
	int s;
	
	cout << "Enter the size: ";
	
	cin >> s;
	
	int array1[s], array2[s];
	
	cout << "Enter elements: ";
	
	for(int i = 0; i < s; i++){
		
		cin >> array1[i];
		
	}
	
	cout << "Array1: ";
	
	for(int i = 0; i < s; i++){
		
		
		
		cout << array1[i] << " ";
	}
	
	cout << "\nArray2: ";
	for(int i = 0; i < s; i++){
	
		array2[i] = array1[i];
		
		cout << array2[i] << " ";
	
	}
	
	return 0;
}
