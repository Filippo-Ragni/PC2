#include <iostream>
#include <stdlib.h>

using namespace std;

/*
struct atleta{
	string nome;
	string cognome;
//	int eta;
	int numeroMaglia;
//	string squadra;
};

void statAtleta(atleta atleta){
	cout << atleta.nome << " " << atleta.cognome << " " << atleta.numeroMaglia << endl;
}

void registraAtleta(atleta &atleta){
	cin >> atleta.nome;
	cin >> atleta.cognome;
	cin >> atleta.numeroMaglia; 
}

int main(){
	atleta cl7;
	cl7.nome = "cristiano";
	cl7.cognome = "lorenzo";
	cl7.numeroMaglia = 7; 
	
	atleta nuovoAtleta;
	registraAtleta(nuovoAtleta);
	
	cout << endl;
	statAtleta(nuovoAtleta);
	statAtleta(cl7);
	
	return 0;
}
*/

struct biglietto{
	string nome;
	string cognome;
	int numeroBiglietto;
};

void datiBiglietto(biglietto ticket){
	cout << ticket.nome << " " << ticket.cognome << " " << ticket.numeroBiglietto << endl;
}

biglietto registraBiglietto(){
	biglietto ticket;
	
	cin >> ticket.nome;
	cin >> ticket.cognome;
	cin >> ticket.numeroBiglietto;
	
	return ticket;
}

int main(){
	biglietto biglietto1 = registraBiglietto();
	
	cout << endl;
	datiBiglietto(biglietto1);
	
	return 0;
}
