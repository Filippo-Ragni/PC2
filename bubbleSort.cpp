#include <iostream>
#include <stdlib.h>
#include <time.h>
#define index 1000

using namespace std;

void bubbleSort(int a[]){
	for (int i = index; i > 0; i--){
		for (int j = 1; j < i; j++){
			if (a[j-1]>a[j]){
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
}

void printArray(int a[]){
	for (int i = 0; i < index; i++){
		cout << a[i] << endl;
	}
}

int main(){
	srand(time(NULL));
	
	int array[index];
	for (int i = 0; i < index; i++){
		array[i] = rand();
	}
	
	bubbleSort(array);
	
	printArray(array);
	
	return 0;
}
