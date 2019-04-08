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
    //srand(time(NULL));
    return 1 + rand() % 1000;
}

/*
int multiplicar(int a, int b){
	return a*b;
} */

void llenarMatriz(vector<int>& matriz){
	//srand(time(NULL));
    
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

void multiplicarMatrices(vector<int>& matA, vector<int>& matB,vector<int>& matC, int n){
	for (int g=0;g<n*n;g++){
		int aux;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				
			}
		}
		matC=
	}

}

int main(){
	srand(time(NULL));
	int n=leerDato();
	vector<int> matA(n*n,0),matB(n*n,0),matC(n*n*n,0);
	llenarMatriz(matA);
	llenarMatriz(matB);
	cout<<"matA"<<endl<<endl;
	imprimir(matA,n);
	cout<<"\nmatB"<<endl<<endl;
	imprimir(matB,n);
	
	multiplicarMatrices(matA,matB,matC,n);


	//return 0;
}
