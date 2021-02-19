#include<iostream>

using namespace std;

int main(){
	
	int input, s, i;
	
	cout<<"Input size of array: ";
	cin>>s;
	
	int arr[s];
	
	cout<<"Enter elements: ";
	for(i = 0; i < s; i++){
		cin>>arr[i];
	}
	cout<<"Element to search: ";
	cin>>input;
	
	for(i = 0; i < s; i++){
		if(arr[i] == input){
			break;
		}
	}
		cout<<"Element was found in: "<< i + 1;
	return 0;
}
