#include <iostream>

using namespace std;

struct nodo{
	string value;
	nodo* next;
};

void book(nodo* head){
	if(head->next != NULL){
		book(head->next);
	}else{
		nodo* newNodo;
		newNodo = new nodo();
		
		string value;
		cin >> value; 
		
		head->value = value;
		head->next = newNodo;
	}
}

void read(nodo* head){
	if(head->next != NULL){
		cout << endl << head->value;
		read(head->next);
	}else{
		cout << endl << head->value;
	}
}

void deleteElement(nodo* head, string element){
	nodo* testa;
	testa = head;
	while ((head->next->value != element) && (head->next->next != NULL)){
		head = head->next;
	}
	head->next = head->next->next;
}

string lookUp (nodo* head, string element){
}

int main(){
	nodo* head;
	head = new nodo();
	
	
	
	return 0;
}
