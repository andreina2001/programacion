#include <iostream>
using namespace std;
int main()
{
	int d, e ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> d;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> e;
	if (d==e)
		cout<<"Son iguales"<<endl;
	else
		if (d>e)
			cout<<d<<" es mayor"<<endl;
		else
			cout<<e<<" es mayor"<<endl;
	
	return 0;
}
