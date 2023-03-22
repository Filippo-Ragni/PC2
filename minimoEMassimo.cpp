#include <iostream>

using namespace std;

int massimo(int array[], int indice){
	int massimo = array[0];
	for (int i = 1; i < indice; i++){
		if (array[i] > massimo){
			massimo = array[i];
		}
	}
	return massimo;
}

int minimo(int array[], int indice){
	int minimo = array[0];
	for (int i = 1; i < indice; i++){
		if (array[i] < minimo){
			minimo = array[i];
		}
	}
	return minimo;
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
	
	cout << "massimo: " << massimo(arr, indx) << "; minimo: " << minimo(arr, indx);
	
	return 0;
}
