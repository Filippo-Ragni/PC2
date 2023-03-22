#include <iostream>
using namespace std;

int lunghezza(string str){
	int index = 0;
	while (str[index] != '\0'){
		index++;
	}
	
	return(index);
}

string parolaCambiata(string word, char charSostituito, char charSostituente, int index){
		for (int i = 0; i < index; i++){
		if(word[i] == charSostituito){
			word[i] = charSostituente;
		}
	}
	
	return(word);
}

int main(){
	
	string key;
	getline(cin, key);
	
	int index = lunghezza(key);
	
	cout << "la stringa ha " << index << " elementi";
	cout << endl << "quale carattere vuoi sostituire? e con quale lo vuoi sostituire?" << endl;
	
	char letteraDaSostituire, letteraSostituta;
	cin >> letteraDaSostituire;
	cin >> letteraSostituta;
	
	string parolaNuova = parolaCambiata(key, letteraDaSostituire, letteraSostituta, index);
	
	cout << parolaNuova;
		
	return 0;
	
}
