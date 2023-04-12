#include <bits/stdc++.h>

using namespace std;

void printa(int array[], int dimensione){
	int indice = 0;
	while(indice < dimensione){
		cout << array[indice] << endl;
		indice++;
	}
}

int esorb(int dimensione){
	int indice = 0;
	int ni = 1;
	while(indice < dimensione){
		indice++;
		ni = ni*indice;
	}
	
	return ni;
}

void probabili(string tanti[], int dimensione, int counter, int number, int contatore, int max){
	if((counter < dimensione) && (contatore < max)){
	}
}


int main(){
	int dimensione;
	do{
		cin >> dimensione;
	}while((dimensione < 2) || (dimensione > 10));
	cout << endl;
	
	int es = esorb(dimensione);
	string comb[es];
	probabili(comb, dimensione, 0, 1, 0, es);
	printa(comb, es);
	
	return 0;
}
