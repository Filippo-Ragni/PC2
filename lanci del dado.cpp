#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;



int main(){
	srand(time(NULL));
	int dimensione = 10, key, indice = -1;
	int arrayLanci[dimensione];	
	
	for (int i = 0; i < dimensione; i++){
		arrayLanci[i] = (rand()%6+1);
	}
	
	cin >> key;
	cout << endl;
	
	for (int i = 0; i < dimensione; i++){
		if (arrayLanci[i] == key){
			indice = i;
			break;
		}
	}
	
	if (indice == -1){
		cout << "l'elemento non è presente nella lista";
	}
	else{
		cout << "l'elemento è alla posizione " << indice+1 << " della lista";
	}
	
	cout << endl;
	for (int i = 0; i < dimensione; i++){
		cout << arrayLanci[i] << endl;
	}
	
	return 0;
}
