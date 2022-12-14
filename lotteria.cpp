#include <iostream>
#include <stdlib.h>
#include <time.h>
#define dimensione 4
using namespace std;

struct biglietto{
	int numeroBiglietto;
	string nome;
	string cognome;
};

biglietto biglietto1;
biglietto biglietto2;
biglietto biglietto3;
biglietto biglietto4;

biglietto arrayBiglietti[dimensione] = {biglietto1, biglietto2, biglietto3, biglietto4};

void leggiDati(biglietto a[]){
	for (int i = 0; i < dimensione; i++){
		cout << "nome: ";
		cin >> a[i].nome;
		cout << "cognome: ";
		cin >> a[i].cognome;
		a[i].numeroBiglietto = i+1;
		cout << endl;
		}
	}

void scriviDati(biglietto a[]){
	for (int i = 0; i < dimensione; i++){
		cout << a[i].nome << " " << a[i].cognome << " ; " << a[i].numeroBiglietto << endl;
		}
	}

int main(){
	srand(time(NULL));
	
	leggiDati(arrayBiglietti);
	scriviDati(arrayBiglietti);
	
	int numeroEstratto = rand()%dimensione;
	
	cout << endl << "il vincitore della lotteria e' il numero " << numeroEstratto << ", " << arrayBiglietti[numeroEstratto-1].nome << " " << arrayBiglietti[numeroEstratto-1].cognome;
	
	return 0;
}
