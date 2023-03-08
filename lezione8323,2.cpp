#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

struct carico{
	string value;
	carico* next;
};

carico* testa = new carico();
carico* nuovoNodo = new carico();

void add(carico* carico, string value){
	while(carico->next != NULL){
		carico = carico->next;
	}
	nuovoNodo = carico->next;
	nuovoNodo->value = value;
	nuovoNodo->next = NULL;
}

int main(){
	testa = NULL;
	string value;
	int choice;
	
	while(true){
		cout << "*****************\n";
		cout << "* 1 - inserisci *\n";
		cout << "* 2 - elimina   *\n";
		cout << "* 3 - conta     *\n";
		cout << "* 4 - stampa    *\n";
		cout << "* 5 - esci      *\n";
		cout << "*****************\n";
		
		cout << endl;
		cin >> choice;
		cout << endl;
		
		switch(choice){
			case 1:
				cin >> value;
				add(testa, value);
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
