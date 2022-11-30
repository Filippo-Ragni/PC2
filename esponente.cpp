#include <iostream>

using namespace std;

int ris(int base, int esponente, int risultato){
	
	if (esponente > 0){
		risultato = risultato * base;
		esponente -= 1;
		return ris(base, esponente, risultato);
	}
	return risultato;
}

int main()
{
	int b, e, r = 1;
	cin >> b;
	cin >> e;
	
	cout << ris(b, e, r);
	
	return 0;
}
