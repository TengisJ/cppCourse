#include<iostream>

using namespace std;

int main(){
	
	int arr[6] = {10, 5, 16, 35, 500, 600}, s = sizeof(arr)/sizeof(arr[0]), i;
	
	for(i = 0; i < s; i++){
		if(i >= s / 2){
			break;
		}
		int temp = arr[i];
		arr[i] = arr[(s - 1) - i];
		arr[(s - 1) - i] = temp;
	}
	for(int i = 0; i < s; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
