#include <math.h>
#include <iostream>

using namespace std;

int leerDato(){
	int d;
	cout<<"ingrese valor: ";
	cin>>d;
	return d;
}

int numeroFilas(){
	int f;
	f = leerDato();
	return f;
}

int numeroCol(){
	int c;
	c = leerDato();
	return c;
}

int main(){
	int filas = numeroFilas();
	
	return 0;
}