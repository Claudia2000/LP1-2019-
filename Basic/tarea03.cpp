#include<iostream>
using namespace std;
//Imprimir los char desde a hasta z con su valor entero
int main(){
	char a='a';
	int cambio=a;
	while(a<='z'){
		cambio=a;
		cout<<a<<"     "<<cambio<<endl;
		a++;
	}
}
