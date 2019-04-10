#include<iostream>
using namespace std;
//Conversiones de tipo no seguras
int main(){
	double d=0;
	while(cin>>d){
		int i=d;//intenta hacerlo entrar en un entero
		char c=i;
		int i2=c;//obtiene el valor entero del char
		cout<<"d= "<<d<<" i= "<<i<<" i2= "<<i2<<" char("<<c<<")\n";
	}
	double x=2.7;
	int y=x; //y se convierte en 2
	int a=1000;
	char b=a;
	cout<<b;
return 0;
}
