#include <iostream>

using namespace std;

void hw(int n){
	
	if (n > 0){
		cout << "hello world" << "\n";
	}
	
	n -= 1;
	hw(n);
}

int main()
{
	int n;
	cin >> n;
	
	hw(n);
	
	return 0;
}
