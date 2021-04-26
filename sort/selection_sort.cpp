#include <iostream>
using namespace std;

void selection(int* arr, int n){

	for(int i=0; i < n; i++){
		int min = arr[i];
		int location = i;
		for(int j=i+1; j<n; j++){
			if(min>arr[j]){
				min = arr[j];
				location = j;
			}
		}
		int tmp;
		tmp = arr[i];
		arr[i] = arr[location];
		arr[location] = tmp;
	}

}


int main(){

	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	selection(arr, n);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << "\n";	
	return 0;
}
