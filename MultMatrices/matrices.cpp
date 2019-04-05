#include <math.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
//https://es.stackoverflow.com/questions/33290/matriz-como-par%C3%A1metro-c
//https://foro.elhacker.net/programacion_cc/llenar_una_matriz_en_c-t362929.0.html

using namespace std;

int leerDato(){
	int d;
	cout<<"ingrese tamaño de la matriz: ";
	cin>>d;
	return d;
}

int numeroAleatorio(void){
    srand(time(NULL));
    return 1 + rand() % 1000;
}

/*
int multiplicar(int a, int b){
	return a*b;
} */

void llenarMatriz(vector<int>& matriz){
	for(int i=0; i<matriz.size();i++){
		matriz[i]=numeroAleatorio();
	}
}

void imprimir(vector<int>& matriz, int n){
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i*n+j]<<"\t";
		}
		cout<<endl;
	}
}

void multiplicarMatriz(){

}

int main(){
	int n=leerDato();
	vector<int> matA(n*n,0),matB(n*n,0);
	llenarMatriz(matA);
	llenarMatriz(matB);
	imprimir(matA,n);
	//multiplicarMatrices(matA,matB);


	//return 0;
}