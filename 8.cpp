#include<iostream>

using namespace std;

int main(){
	
	int s, i;
	
	cout << "How much you wanna order: ";
	
	cin >> s;
	
	cout << "What do you wanna order: " << endl;
	
	string menu[s];
	
	cin.ignore();
	
	for(i = 0; i < s; i++){
		
		cout << i + 1 << ". ";
		getline(cin, menu[i]);
	}
	
	
	cout << "What you have ordered: " << endl;
	
	for(i = 0; i < s; i++){
		
		cout << menu[i] << " ";
	}
	
	
	return 0;
}
