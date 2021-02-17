#include<iostream>

using namespace std;

int main(){
	
	int s, total = 0;
	
	cout << "Enter the size: ";
	
	cin >> s;
	
	int x[s];
	
	cout << "Enter elements: ";
	
	for(int i = 0; i < s; i++){
		
		cin >> x[i];
		total = total + x[i];
	}
	cout << total;
	
	
	return 0;
}
