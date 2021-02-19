#include<iostream>

using namespace std;

int main(){
	
	int arr[10] = {10, 20, 10, 1, 100, 10, 2, 1, 5, 10},j, count = 0, s = sizeof(arr)/sizeof(arr[0]);
	
	for(int i = 0; i < s; i++){
		for(j = i + 1; j < s; j++){
			if(arr[i] == arr[j]){
				for(int o = j; o < s; o++){
					arr[o] = arr[o + 1];
				}
				s--;
			}
		}
	}
	for(int i = 0; i < s; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
