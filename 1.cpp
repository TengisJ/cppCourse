#include<iostream>

using namespace std;

int main(){
	
	int arr[10] = {1, 10, 20, 1, 25, 1, 10, 30, 25, 1}, count = 0;
	
	for(int i = 0; i < 10; i++){
		for(int j = i + 1; j < 10; j++){
			if(arr[i] == arr[j]){
				count++;
				break;
			}
		}
	}
	cout<<count;
	
	return 0;
}
