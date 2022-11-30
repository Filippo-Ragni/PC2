#include <iostream>

using namespace std;

void scambio_celle(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a: " << &a << "; b: " << &b << "\n";
}

void ciao(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a: " << a << "; b: " << b << "\n";
}

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << "\n";
	
	ciao(a, b);
	scambio_celle(a, b);
	
	return 0;
}
