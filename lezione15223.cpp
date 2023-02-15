#include <bits/stdc++.h>
using namespace std;
#define dim 10

struct nodo{
	int numero;
	nodo* prox;
};

bool isEmpty(nodo* head){
	if (head == NULL){
		return true;
	}return false;
}

void print(nodo* head){
	cout << head->numero << endl;
	nodo* testa = head->prox;
	if(head->prox != NULL){
		print(head->prox);
	}
}

void addNodo(nodo* head){
	if(head->prox == NULL){
		head = new nodo();
		head->numero = rand();
		head->prox = NULL;
	}else{
		addNodo(head->prox);
	}
}

int countElement(int counter, int comp, nodo* head){
	if(head->prox == NULL){
		return counter;
	}else{
		if(head->numero == comp){
			counter++;
		}
		countElement(counter, comp, head->prox);
	}
	
	return counter;
}

int main(){
	srand(time(NULL));
	
	nodo* nuovoNodo = new nodo();
	int comparison = rand();
	nuovoNodo->numero = comparison;
	nuovoNodo->prox = NULL;
	
	nodo* pointer = nuovoNodo;
	
	for(int i = 0; i < dim; i++){
		addNodo(pointer);
	}
	
	print(pointer);
	
	cout << endl << countElement(0, comparison, pointer);

    return 0;
}
