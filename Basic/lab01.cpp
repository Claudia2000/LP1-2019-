#include<iostream>
using namespace std;
//Conversiones impl�citas

int main(){
	double d=2.5;
	int i=2;
	double d2= d/i; //d2=1.25
	int i2= d/i;
	d2= d/i;
	i2= d/i;
	{	double dc;
		cin>>dc;
		double df = 9/5*dc+32;
	}
	{
		double dc;
		cin>>dc;
		double df= (9.0/5)*dc+32;
		cout<< df;
	}
	return 0;
}
