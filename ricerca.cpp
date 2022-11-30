#include <iostream>
using namespace std;

const int dimensione = 4;
int v[dimensione];
int key, keyIndex = -1;

int main(){
	for (int i=0; i<dimensione; i++){
		cin >> v[i];
	}
	
	cout << endl;
	
	cout << "chiave di ricerca: "; cin >> key;
	
	for (int i=0; i<dimensione; i++){
		if (v[i] == key){
			keyIndex = i;
		}
	}
	
	if (keyIndex == -1){
		cout << "l'elemento non e' presente nella lista";
	}
	else{
		cout << endl << "l'elemento e' all'indice " << keyIndex << " della lista";
	}
	
	return 0;
}
