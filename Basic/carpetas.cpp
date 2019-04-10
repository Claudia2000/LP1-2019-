#include<iostream>
using namespace std;

int main(){
	int N=0;
	int M=0;
	
	cout<<"Ingrese el numero de filas y columnas"<<endl;
	cin>>N>>M;
	
	if(N==0||M==0){
		cout<<"No se puede";
	}
	if (N%2==0||M%2==0){
		cout<<"Si se puede"<<endl;
	}
	else
		cout<<"No se puede"<<endl;
		
	return 0;
}
