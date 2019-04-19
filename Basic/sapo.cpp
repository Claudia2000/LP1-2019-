#include<iostream>
#include<vector>
using namespace std;

int main(){
	int F[150];
	int S[150];
	F[0]=0;
	F[1]=2;
	F[2]=12;
	S[0]=1;
	S[1]=11;
	S[2]=30;
	int cont=10;
	int jumps;
	
	for(int i=2;i<150;i++){
		cont=cont+9;
		F[i+1]=F[i]+cont;
	}
	cont=19;
	
	for(int j=2;j<150;j++){
		cont=cont+9;
		S[j+1]=S[j]+cont;
	}
	
	cout<<"Ingrese la cantidad de metros saltados"<<endl;
	cin>>jumps;

	for(int k=0;k<150;k++){
		if(jumps>=F[k]&&jumps<=S[k])
			cout<<k+1<<" saltos";
	}
}
