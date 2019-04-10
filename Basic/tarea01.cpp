#include<iostream>
using namespace std;

int main(){
	const double yen=0.0090;
	const double euro=1.12;
	const double libra=1.30;
	char unit1;
	char unit2;
	double num;
	
	cout<<"Ingrese la moneda que transformará, y si son yenes, e si son euros, l si son libras o d si son dólares"<<endl;
	cin>>unit1;
	cout<<"Ingrese el monto"<<endl;
	cin>>num;
	
	if (unit1=='y'){
		cout<<num*yen<<" dolares."<<endl;
	}
	else if (unit1=='e'){
		cout<<num*euro<<" dolares."<<endl;
	}
	else if (unit1=='l'){
		cout<<num*libra<<" dolares."<<endl;
	}
	else if (unit1=='d'){
		cout<<"Ingrese la moneda a la que realizará el cambio, y si son yenes, e si son euros o l si son libras"<<endl;
		cin>>unit2;
		if (unit2=='y'){
		cout<<num/yen<<" yenes."<<endl;
		}
		else if (unit2=='e'){
		cout<<num/euro<<" euros."<<endl;
		}
		else if (unit2=='l'){
		cout<<num/libra<<" libras."<<endl;
		}
		else{
			cout<<"Error";
		}
	}
	else{
		cout<<"Error"<<endl;
	}
	
	return 0;
}
