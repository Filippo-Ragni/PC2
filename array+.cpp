#include <iostream>
using namespace std;

const int dimensioneUno = 3, dimensioneDue = 4, dimensioneTot = dimensioneUno+dimensioneDue;
int arrayUno[dimensioneUno], arrayDue[dimensioneDue], arrayTot[dimensioneTot];

int main(){
	for (int i = 0; i<dimensioneUno; i++){
		cout << "array 1[" << i+1 << "]: "; cin >> arrayUno[i];
	}
	for (int i = 0; i<dimensioneDue; i++){
		cout << "array 2[" << i+1 << "]: "; cin >> arrayDue[i];
	}
	
	for (int i = 0; i<dimensioneUno; i++){
		arrayTot[i] = arrayUno[i];
	}
	for (int i = dimensioneUno; i<dimensioneTot; i++){
		arrayTot[i] = arrayDue[i-dimensioneUno];
	}
	
	for (int i = 0; i<dimensioneTot; i++){
		cout << "array 3[" << i+1 << "]: "; cout << arrayTot[i] << "\n";
	} 
	
	return 0;
}
