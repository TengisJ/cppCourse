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
	
	for(int i = z + 1; i >= 0; i++){
		
		if(i % x == 0 && i % y == 0){
			cout << "LCM is " << i;
			break;
		}
	}
	
	return 0;
}
