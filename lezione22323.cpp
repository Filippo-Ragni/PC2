/*
Creare un'applicazione a menù per gestire una lista di prenotazioni 
con struttura dati coda (con informazioni nel nodo: nome, cognome, telefono).

PREVEDERE UN MENU' UTENTE CON:


1) inserisci nuova prenotazione (in coda)
2) ricerca se presente la prenotazione corrispondente a nome e cognome letti da tastiera
3) elimina prenotazione (dalla testa)
4) stampa tutte le prenotazioni
5) uscita

*/
#include <iostream>
using namespace std;

struct nodo {
	string nome;
	string cognome;
	string telefono;
	nodo* prox;
};

//nodo di testa come variabile globale
nodo* testa = NULL;

//funzione di controllo se la lista (coda) è vuota
bool checkListaVuota(){
	
	if (testa == NULL)
		return true; //lista (coda) vuota
	else
		return false; //almeno un elemento presente		
	
}

//funzione di stampa elementi della lista
void visitaLista(){
	

	//controllare se la lista è vuota (stampare "lista vuota")
	//altrimenti
	//stampare il primo elemento presente nella lista
	
	nodo* nodoScorrimento; //variabile di appoggio che contiene l'elmento
	                       //di volta in volta occupato
	if (checkListaVuota())
		cout << "lista vuota !" << endl;
	else{
		nodoScorrimento = testa;
		while(nodoScorrimento != NULL){
			cout << "------------------------------------" << endl;
			cout << nodoScorrimento->nome << endl;
			cout << nodoScorrimento->cognome << endl;
			cout << nodoScorrimento->telefono << endl;
			cout << "------------------------------------" << endl;
			nodoScorrimento = nodoScorrimento->prox;						
		}
	}		

}

//funzione di inserimento nodo, necessaria per caricare valori in lista
//e poter testare la funzione di estrazione ultimo elemento
void inserisciNodo(string nuovoNome, string nuovoCog, string nuovoTel){
	
	nodo* nuovoNodo; //puntatore a nuovo nodo
	nodo* nodoScorrimento; //ultimo nodo presente
	
	nuovoNodo = new nodo(); //alloca spazio in memoria per un nuovo nodo
	
	nuovoNodo->nome = nuovoNome;
	nuovoNodo->cognome = nuovoCog;
	nuovoNodo->telefono = nuovoTel;
	nuovoNodo->prox = NULL;
	
	if (checkListaVuota()){
		testa = nuovoNodo;		
	}else{
		nodoScorrimento = testa;
		while(nodoScorrimento->prox !=NULL){
			nodoScorrimento = nodoScorrimento->prox;
		}
		nodoScorrimento->prox = nuovoNodo;
	}	
}


//funzione di conteggio della posizione occupata da un elemento all'interno della coda
int posizioneElemento(string cercaNome, string cercaCog){
	

	//controllare se la lista è vuota (restituire -1)
	//altrimenti
	//scorrere la lista (coda) alla ricerca dell'elemento passato con i parametri di input
	//se elemento non trovato restituire -1, altrimenti restituire la posizione occupata nella coda

	
	nodo* nodoScorrimento; //variabile di appoggio che contiene l'elmento
	                       //di volta in volta occupato
	int indiceElemento = 0;
	if (checkListaVuota())
		return -1;
	else{
		nodoScorrimento = testa;
		while(nodoScorrimento != NULL){
			if ((nodoScorrimento->nome == cercaNome) && (nodoScorrimento->cognome == cercaCog)){
				return indiceElemento;
			}
			indiceElemento++;
			nodoScorrimento = nodoScorrimento->prox;						
		}
	}	
	//se arrivato qui significa che l'elemento non è stato trovato !
	return -1;	

}

string eliminaNodo(){
	
	//variabile per memorizzare la locazione di memoria
	//del nodo di testa da eliminare
	nodo* oldTesta;
	//informazioni del nodo di testa che verrà eliminato
	string infoTesta="";
	
	if (checkListaVuota())
		//restituisce una stringa vuota
		return infoTesta;
	else{
		//salva le informazioni del nodo di testa che sta per essere eliminato
		infoTesta = testa->nome+" "+testa->cognome;
		//memorizza la locazione di memoria dell'attuale nodo di testa
		oldTesta = testa;
		//testa diventa il prossimo nodo dell'attuale testa
		testa = oldTesta->prox;
		//elimina il vecchio nodo di testa
		delete oldTesta;

		return infoTesta;
	}
		
}

int main(){
	
	
	//numero elementi della coda
	bool nuovoInserimento;
	//variabile di appoggio
	string nome, cognome, telefono, infoNodo;
	int risposta;
	int indiceTrovato;
	
	do{
		cout << "GESTIONE PRENOTAZIONI" << endl;
		cout << "******************************************************" << endl;
		cout << "1) inserisci nuova prenotazione " << endl;
		cout << "2) ricerca prenotazione per nome e cognome " << endl;
		cout << "3) elimina prenotazione" << endl;
		cout << "4) stampa tutte le prenotazioni " << endl;
		cout << "5) uscita " << endl;
		cout << "******************************************************" << endl;
		cout << "seleziona un'opzione: " << endl;
		cin >> risposta;
		switch (risposta){
			
			case 1:	{
				cout << "inserisci nome: " << endl;
				cin >> nome;
				cout << "inserisci cognome: " << endl;
				cin >> cognome;
				cout << "inserisci telefono: " << endl;
				cin >> telefono;
				inserisciNodo(nome, cognome, telefono);
				break;
			}
			
			case 2:{
				//cerca posizione di un elemento
				cout << "inserisci nome da cercare: " << endl;
				cin >> nome;
				cout << "inserisci cognome da cercare: " << endl;
				cin >> cognome;
				
				indiceTrovato = posizioneElemento(nome, cognome);
				if (indiceTrovato == -1) 
					cout << "elemento non trovato: " << endl;
				else
					cout << "elemento trovato in posizione: " << indiceTrovato + 1 << endl;
				break;
			}
			
			case 3:{
				infoNodo = eliminaNodo();
				cout << "rimosso elemento: " << infoNodo << endl;;
				break;
			}
				
			case 4:{
				//stampare a monitor tutti gli elementi inseriti	
				visitaLista();
				break;
			}
			
			case 5:{
				cout << "Uscita avvenuta correttamente !" << endl;
				break;
			}
			
			default:{
				cout << "La scelta selezionata non e' valida, riprova.";				
				break;
			}
			
		}
		
		cout << endl << endl;
		
	}while(risposta!=5);

}
