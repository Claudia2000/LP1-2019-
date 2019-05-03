#include<iostream>
#include<vector>
using namespace std;

int main(){
	int wrong=0;
	int loc=0;
	int num;
	int contador=0;
	int players=0;
	cout<<"Ingrese la cantidad de jugadores"<<endl;
	cin>>players;
	int A[players];
	
	while(loc<players){
		cout<<"Ingrese el mensaje del jugador "<<loc+1<<endl;
		cin>>num;
		A[loc]=num;
		loc++;
	}
	
	for(int i=0;i<players-1;i++){
		if(A[i]!=A[i+1]){
			wrong=contador+1;
			contador++;
			cout<<wrong+1<<" errores."<<endl;
			}
		else{
			wrong=0;
			cout<<wrong<<" errores."<<endl;
			}
	}
}
