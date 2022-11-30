#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
    cout<<"ore: ";
    cin>>a;
    cout<<"minuti: ";
    cin>>b;
    cout<<"secondi: ";
    cin>>c;

    cout<<"millisecondi: " << ((3600000*a)+(60000*b)+(1000*c));
    
    return 0;
}
