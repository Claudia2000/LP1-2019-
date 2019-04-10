#include<iostream>
using namespace std;

int main(){
	const double yen=0.0090;
	const double euro=1.12;
	const double libra=1.30;
	const double yuan=0.15;
	const double shekel=0.28;
	char unit1;
	char unit2;
	double num;
	
	cout<<"Ingrese la moneda que transformara, y si son yenes, e si son euros, l si son libras, u si es yuan, s si son shekels o d si son dolares"<<endl;
	cin>>unit1;
	cout<<"Ingrese el monto"<<endl;
	cin>>num;
	
	switch (unit1){
		case 'y':
			cout<<num*yen<<" dolares."<<endl;
			break;
		case 'e':
			cout<<num*euro<<" dolares."<<endl;
			break;
		case 'l':
			cout<<num*libra<<" dolares."<<endl;
			break;
		case 'u':
			cout<<num*yuan<<" dolares."<<endl;
			break;
		case 's':
			cout<<num*shekel<<" dolares."<<endl;
			break;
		case 'd':
			cout<<"Ingrese la moneda a la que realizará el cambio, y si son yenes, e si son euros o l si son libras, u si es yuan o s si son shekels"<<endl;
			cin>>unit2;
			switch (unit2){
				case 'y':
					cout<<num/yen<<" yenes."<<endl;
					break;
				case 'e':
					cout<<num/euro<<" euros."<<endl;
					break;
				case 'l':
					cout<<num/libra<<" libras."<<endl;
					break;
				case 'u':
					cout<<num/yuan<<" yuanes."<<endl;
					break;
				case 's':
					cout<<num/shekel<<" shekels."<<endl;
					break;
				default:
					cout<<"No existe este tipo de conversión";
					break;
			}
			break;
		default:
			cout<<"No existe ese tipo de conversión";
			break;
	}
	return 0;
}
