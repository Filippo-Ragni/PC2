#include <iostream>

using namespace std;

int scambio_celle(int arr[], int a){
	int somma;
	for (int i = 0; i < a; i++){
		somma = somma + arr[i];
	}
	return somma;
}

int main()
{
	const int dim = 10;
	int arr[dim];
	
	for (int i = 0; i < dim; i++){
		cin >> arr[i];
	}
	
	
	cout << "somma: " << scambio_celle(arr, dim);
	
	return 0;
}
