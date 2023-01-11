#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

#define dimensione 100000

void creaArray(int array[]){
	for (int i = 0; i < dimensione; i++){
		array[i] = rand();
	}
}

void printArray(int array[]){
	for (int i = 0; i < dimensione; i++){
		cout << array[i] << endl;
	}
}

void selectionSort(int array[]){
	for (int i = 0; i < dimensione; i++){
		int minore = array[i];
		int index = i;
		for (int j = i+1; j < dimensione; j++){
			if (array[j] < minore){
				minore = array[j];
				index = j;
			}
		}
		int temp = array[index];
		array[index] = array[i];
		array[i] = temp;
	}
}








































void mergeSort(int array[]){
	int dimMini = sizeof(array)/2;
	while(dimMini > 1){
		
	}
}











































void timeExe(int array[]){
	clock_t start,end;
	
	start = clock();
	mergeSort(array);
	end = clock();
	
	double tempo = (end-start)/CLOCKS_PER_SEC;
	cout << endl << tempo << endl;
} 



int main(){
	srand(time(NULL));
	int array[dimensione];
	creaArray(array);
	
	timeExe(array);
	
	return 0;
}
