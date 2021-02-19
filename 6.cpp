#include<iostream>

using namespace std;

int main(){
	
	int input, s;
	
	cout<<"Input size of array: ";
	cin>>s;
	
	int arr[s];
	
	cout<<"Enter elements: ";
	for(int i = 0; i < s; i++){
		cin>>arr[i];
	}
	
	for(int i = 0; i < s; i++){
		for(int j = i + 1; j < s; j++){
			if(arr[i]> arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i < s; i++){
		cout<<arr[i]<<" ";
	}
}
