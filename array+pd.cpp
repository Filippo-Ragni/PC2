#include <iostream>>
using namespace std;

const int dimensione = 4, dimensioneTot = 8;
int arrayUno[dimensione], arrayDue[dimensione], arrayTot[dimensioneTot];

void unione(int arrayUno[], int arrayDue[], int arrayTot[]){
	for (int i = 0; i<dimensione; i++){
		arrayTot[i*2] = arrayUno[i];
		arrayTot[i*2+1] = arrayDue[i];
	}
}

int main(){
	for (int i = 0; i<dimensione; i++){
		cout << "array 1[" << i+1 << "]: "; cin >> arrayUno[i];
	}
	for (int i = 0; i<dimensione; i++){
		cout << "array 2[" << i+1 << "]: "; cin >> arrayDue[i];
	}
	
	unione(arrayUno, arrayDue, arrayTot);
	
	for (int i = 0; i<dimensioneTot; i++){
		cout << "array 3[" << i+1 << "]: "; cout << arrayTot[i] << "\n";
	} 
	
	return 0;
}
