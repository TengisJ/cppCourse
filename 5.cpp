#include <iostream>

using namespace std;

int main(){
	
	int x, y, z;
	
	cout << "Enter numbers: ";
	
	cin >> x >> y;
	
	if(x > y){
		z = x;
	}
	else{
		z = y;
	}
	
	for(int i = z; i >= 0; i--){
		
		if(x % i == 0 && y % i == 0){
			cout << "HCF is " << i;
			break;
		}
	}
	
	return 0;
}
