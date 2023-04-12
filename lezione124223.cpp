#include <bits/stdc++.h>

using namespace std;


struct nodo {
	string nomeRamo;
	
	nodo* child1;
	nodo* child2;
};


bool checkAlberoVuoto(nodo* scoiattolo){
	if (scoiattolo == NULL)
		return true; 
	else
		return false;
}

void visitaAlbero0(nodo* scoiattolo){
	if (scoiattolo != NULL){
		cout << scoiattolo->nomeRamo << endl;
		visitaAlbero0(scoiattolo->child1);
		visitaAlbero0(scoiattolo->child2);
	}
}

void visitaAlbero1(nodo* scoiattolo){
	if (scoiattolo != NULL){
		visitaAlbero1(scoiattolo->child1);
		visitaAlbero1(scoiattolo->child2);
		cout << scoiattolo->nomeRamo << endl;
	}
}

void visitaAlbero2(nodo* scoiattolo){
	if (scoiattolo != NULL){
		visitaAlbero2(scoiattolo->child1);
		cout << scoiattolo->nomeRamo << endl;
		visitaAlbero2(scoiattolo->child2);
	}
}


int main(){
	nodo* rossi;
	nodo* bianchi;
	nodo* losi;
	nodo* ferrari;
	nodo* verdi;
	
	rossi = new nodo();
	rossi->nomeRamo = "rossi";
	
	bianchi = new nodo();
	bianchi->nomeRamo = "bianchi";
	
	losi = new nodo();
	losi->nomeRamo = "losi";
	
	ferrari = new nodo();
	ferrari->nomeRamo = "ferrari";
	
	verdi = new nodo();
	verdi->nomeRamo = "verdi";
	
	rossi->child1 = bianchi;
	rossi->child2 = losi;
	bianchi->child1 = ferrari;
	bianchi->child2 = verdi;
	
	cout << "visita anticipata:" << endl;
	visitaAlbero0(rossi);
	cout << endl;
	
	cout << "visita differita:" << endl;
	visitaAlbero1(rossi);
	cout << endl;
	
	cout << "visita simmetrica:" << endl;
	visitaAlbero2(rossi);
	cout << endl;
	
	return 0;
}
