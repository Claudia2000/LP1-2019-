#include<iostream>
using namespace std;
//Calcula e imprime la tabla de cuadrados de 0 a 99
int square(int x)
{
	return x*x;
}
int main(){
	int i=0;
	while(i<100){
		cout<<i<<'\t'<<square(i)<<'\n';
		i++;
	}
}
