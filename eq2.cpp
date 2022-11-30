#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a,b,c,x1,x2;
    cout<<"coeff x**2: ";
    cin>>a;
    cout<<"coeff x: ";
    cin>>b;
    cout<<"termine noto: ";
    cin>>c;
    
    x1 = float(((-b- sqrt((b*b)-(4*a*c))) /(2*a)));
    x2 = float(((-b+ sqrt((b*b)-(4*a*c))) /(2*a)));
    
    cout<<"x1: " << x1 << ";  x2: " << x2;
    
    return 0;
}
