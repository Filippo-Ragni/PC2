#include <iostream>

using namespace std;

int main()
{
	int voto;
	cin>>voto;
	
	switch (voto)  {
    case 4:
        cout << "voto gravemente insufficente";
        break;
        
        
    case 5:
        cout << "voto insufficente";
        break;
        
    case 6:
        cout << "voto sufficente";
        break;
        
    case 7:
        cout << "voto discreto";
        break;
        
    case 8:
        cout << "voto buono";
        break;
        
    case 9:
        cout << "voto distinto";
        break;
        
    case 10:
        cout << "voto ottimo";
        break;
        
    default:
        cout << "il voto non può essere maggiore di 10 o minore di 4";
	}
}
