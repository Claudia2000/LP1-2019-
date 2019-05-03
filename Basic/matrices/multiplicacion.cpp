//multiplicacion de matrices
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<stdexcept>
using namespace std;

int main()
try
{
	int filas, columnas, filas1, columnas1;
	cout<<"Ingrese las filas y columnas de la primera matriz"<<endl;
	cin>>filas>>columnas;
	int A[filas][columnas];
	cout<<"Ingrese las filas y columnas de la segunda matriz"<<endl;
	cin>>filas1>>columnas1;
	cout<<endl;
	int B[filas1][columnas1];
	srand(time(NULL));
	
	{if(columnas!=filas1) throw runtime_error("No es posible multiplicar las matrices");}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			A[i][j]= rand()%9+1;
			cout<<A[i][j]<<" ";
		}	
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=0;i<filas1;i++){
		for(int j=0;j<columnas1;j++){
			B[i][j]= rand()%9+1;
			cout<<B[i][j]<<" ";
		}	
		cout<<endl;
	}
	cout<<endl<<endl;
	int C[filas][columnas1];
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas1;j++){
			C[i][j]=0;
			for(int h=0;h<filas1;h++){
				C[i][j]+= (A[i][h]*B[h][j]);
			}
		}	
	}
	for(int i=0; i<filas;i++) {
      for(int j=0;j<columnas1;j++) {
        cout<<C[i][j]<<" ";
      }
      cout << endl;
    }
	
}
catch (exception&e){
	cerr<<"error: "<<e.what()<<endl;
	return 1;
}
