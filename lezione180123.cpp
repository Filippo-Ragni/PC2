#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

#define dimensione 10

int binSearch(int array[], int value, int low, int high){
    int mid;
	while((0 < high) && (low != high)){
        mid = (low + high)/2;
        if(value == array[mid]){
			return mid;
		} else if(value > array[mid]){
           low = mid + 1;
		} else{
           high = mid - 1;
		}
	}
	return -1;
}

void viewArray(int array[]){
	cout << endl;
	for (int i = 0; i < dimensione; i++){
		cout << array[i] << endl;
	}
	cout << endl;
}

void fillArray(int array[]){
	for(int i = 0; i < dimensione; i++){
		array[i] = rand();
	}
}

void Sort(int array[]){
	int temp;
	for (int i = dimensione-1; i > 0; i--){
		for (int j = 0; j < i; j++){
			if (array[j] > array[i]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main(){
	srand(time(NULL));
	
	int array[dimensione];
	fillArray(array);
	viewArray(array);
	
	Sort(array);
	viewArray(array);
	
	int request;
	cin >> request;
	cout << endl << endl;
	
	int research = binSearch(array, request, 0, dimensione);
	if(research == -1){
	cout << "l'elemento non e' nell'array";
	}
	else{
		cout << "l'elemento e' all'indice " << research;
	}
}
