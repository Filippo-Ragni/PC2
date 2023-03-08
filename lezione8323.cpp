#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

struct prenotazione{
	string nome;
	string cognome;
	prenotazione* next;
};

prenotazione* testa = new prenotazione();



int main(){
	testa = NULL;
	string nome, cognome;
	
	while(true){
		cout << "*****************\n";
		cout << "* 1 - inserisci *\n";
		cout << "* 2 - ricerca   *\n";
		cout << "* 3 - elimina   *\n";
		cout << "* 4 - stampa    *\n";
		cout << "* 5 - esci      *\n";
		cout << "*****************\n";
		
		int choice;
		cout << endl;
		cin >> choice;
		cout << endl;
		
		switch(choice){
			case 1:
				break;
				
			case 2:
				break;
				
			case 3:
				break;
				
			case 4:
				break;
				
			case 5:
				break;
		}
	}
	
	return 0;
}
