#include<iostream>
using namespace std;

int main()
{
	int i=0,A;
	float l=0,t;
	cout<<"Ingrese la cantidad de valor a sumar : ";
	cin>>A;
	do{
	cout<<"Ingrese el elemento "<<i+1;
		cin>>t;
		i=i+1;
		l=l+t;
	}while (i<A);
	cout<<"La suma de los elementos fue : "<<l<<endl;

	return(0);
}
