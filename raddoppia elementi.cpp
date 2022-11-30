#include <iostream>

using namespace std;

void doppio(int array[], int indice){
	for (int i = 0; i < indice; i++){
		array[i] *= 2;
	}
}

void stampaArray(int array[], int indice){
	for (int i = 0; i < indice; i++){
		cout << array[i] << "\n";
	}
}

int main()
{
	int indx;
	cin >> indx;
	int arr[indx];
	
	for (int i = 0; i < indx; i++){
		int n;
		cin >> n;
		
		arr[i] = n;
	}
	
	doppio(arr, indx);
	stampaArray(arr, indx);
	
	return 0;
}
