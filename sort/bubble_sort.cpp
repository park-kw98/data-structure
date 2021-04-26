#include <iostream>
using namespace std;


void bubble(int* arr, int n){
	int tmp;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	int tmp;
	int *arr = new int[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	bubble(arr, n);
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}	

