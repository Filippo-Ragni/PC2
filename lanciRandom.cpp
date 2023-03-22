#include <iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
	int lanci, testa=0, croce=0;
	
	cin >> lanci;
	cout << endl;
	
	for(int i=0;i<lanci;i++){
		if ((rand()%2) == 0){
			testa += 1;
		}
		else{
			croce += 1;
		}
	}
	
	cout << "testa: " << testa << endl << "croce: " << croce;
	
	return 0;
}
