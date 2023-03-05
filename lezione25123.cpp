#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

#define size 10

int array[size];
void fillArray(int array[]){
    for (int i = 0; i < size; i++){
        array[i] = rand();
    }
}

void coutArray(int array[]){
    cout << endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
}

int main(){
    srand(time(NULL));
    fillArray(array);
    coutArray(array);
    

    return 0;
}
