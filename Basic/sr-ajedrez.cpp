#include<iostream>
using namespace std;

int check(int x){
	if(x>8){
		x=8;
	}
	if(x<1){
		x=1;
	}
	return x;
}
int main(){
	int f, c, r;
	cin>>f>>c>>r;
	
	int b1=(f+r);
	b1=check(b1);
	int b2=(f-r);
	b2=check(b2);
	int a1=(c+r);
	a1=check(a1);
	int a2=(c-r);
	a2=check(a2);
	
/*	if(b1>=8){
		b1=8;
	}
	if(a1>=8){
		a1=8;
	}
	if(b2<=1){
		b2=1;
	}
	if(a2<=1){
		a2=1;
	}*/
	
	int base=(b1-b2+1);
	int altura=(a1-a2+1);
	
	cout<<base*altura;
}
