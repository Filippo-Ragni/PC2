#include <iostream>

using namespace std;

const int giorno = (3600000*24);
const int ora = 3600000;
const int minuto = 60000;
const int secondo = 1000;

int main()
{
	int a,b,d, ore, min, sec;
    cout<<"ms: ";
    cin>>a;
    
	d = a/giorno;
	b = a-(d*giorno);
	ore = b/ora;
	min=(b%ora)/minuto;
	sec=((b%ora)%minuto)/secondo;
	
    cout<<"orario: "<< ore <<":"<< min <<":"<< sec;
    
    return 0;
}
