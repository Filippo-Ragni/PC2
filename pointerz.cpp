#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void creaArray(int* p, int dim){
	for (int i = 0; i < dim; i++){
		*p++ = rand()%6+1;
	}
}

void stampaArray(int* p, int dim){
	for (int i = 0; i < dim; i++){
		cout << *p++ << endl;
	}
}

int main() {
/*
    int a = 10;
    int* p = &a;

    cout << "&a: " << p << endl;
    cout << "a: " << *p << endl;
    
    *p = 28;

    cout << "&a: " << p << endl;
    cout << "a: " << *p << endl;
*/
/*	srand(time(NULL));

	int dimensione = 10;
	int array[dimensione];
	
	int* pointer = array;
	creaArray(pointer, dimensione);
	
	pointer = array;
	stampaArray(pointer, dimensione);
*/
	ofstream f;
	
	f.open("fileTestuale.txt");
	if (!f){
		cout << "problema in apertura del file" << endl;
	}
	else{
		string stringa;
		
		do {
			cin >> stringa;
			f << stringa << endl;
		} while (stringa != "esci");
		
		f.close();
	}
	
    return 0;
}
