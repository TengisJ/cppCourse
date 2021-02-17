#include<iostream>

using namespace std;

int main(){
	
	int s;
	
	cout << "Enter the size: ";
	
	cin >> s;
	
	int x[s];
	
	cout << "Enter elements: ";
	
	for(int i = 0; i < s; i++){
		
		cin >> x[i];
	}
	for(int i = 0; i < s; i++){
		if(x[i] < 0){
		
			cout << x[i] << " ";
		}
	}
	
	
	return 0;
}
