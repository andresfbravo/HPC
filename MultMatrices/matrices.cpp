#include <math.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <ctime>
//https://es.stackoverflow.com/questions/33290/matriz-como-par%C3%A1metro-c
//https://foro.elhacker.net/programacion_cc/llenar_una_matriz_en_c-t362929.0.html


using namespace std;

int leerDato(){
	int d;
	//cout<<"ingrese tamaño de la matriz: ";
	cin>>d;
	return d;
}

int numeroAleatorio(void){
    //srand(time(NULL));
    return 1 + rand() % 10;
}

/*
int multiplicar(int a, int b){
	return a*b;
} */

void llenarMatriz(vector<vector<int>>& matriz){
	//srand(time(NULL));
    
	for(int i=0; i<matriz.size();i++){
		for(int j=0;j<matriz.size();j++){
			matriz[i][j]=numeroAleatorio();
		}
	}
}

void imprimir(vector<vector<int>>& matriz, int n){
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void multiplicarMatrices(vector<vector<int>>& matA, vector<vector<int>>& matB,vector<vector<int>>& matC, int n){
	for (int g=0;g<n;g++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				matC[g][i] +=  matA[g][j] * matB[j][i];
			}
		}
	}
}

int main(int argc, char *argv[]){
	unsigned t0,t1;
	srand(time(NULL));
	//int n=leerDato();
	int n = atoi(argv[1]);
	//int n = argv[1];
	vector<vector<int>> matA(n,vector<int>(n)),matB(n,vector<int>(n)),matC(n,vector<int>(n));
	llenarMatriz(matA);
	llenarMatriz(matB);
	//cout<<"matA"<<endl<<endl;
	//imprimir(matA,n);
	//cout<<"\nmatB"<<endl<<endl;
	//imprimir(matB,n);
	
	t0=clock();
	multiplicarMatrices(matA,matB,matC,n);
	t1=clock();
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << time << endl;
	//cout<<"\nmatC"<<endl<<endl;
	//imprimir(matC,n);



	//return 0;
}
