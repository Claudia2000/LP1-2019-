#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

int main()
{
    int A[4]={0,0,0,0};
    int B[4];
    int C[4];
    srand(time(NULL));
    int toro;
    int i=0;
    int b=0;
    int z;
    while(i!=4)
    {b=  1 + rand() % (10 - 1);
    z=0;
        while(z!=4)
    {
     	if (b==A[z]){
     		b= 1 + rand() % (10 - 1);
     		z=0;
		 }
		 z++;}
		 A[i]=b;
		 i++;
	}
   	
	while(toro!=4){
		
		cout<<"Ingrese los numeros seguidos de espacios"<<endl;
    	cin>>B[0]>>B[1]>>B[2]>>B[3];
    	int vaca=0;
   		toro=0;
		for(int g=0;g!=4;g++){
			if(B[g]==A[g]){
			toro++;
		}
		}
		
		if(B[0]==A[1]||B[0]==A[2]||B[0]==A[3]){
			vaca++;
		}
		if(B[1]==A[0]||B[1]==A[2]||B[1]==A[3]){
			vaca++;
		}
		if(B[2]==A[0]||B[2]==A[1]||B[2]==A[3]){
			vaca++;
		}
		if(B[3]==A[0]||B[3]==A[1]||B[3]==A[2]){
			vaca++;
		}
		
		cout<<toro<<" toros y "<<vaca<<" vacas"<<endl;
	}
	
	
    return 0;
}




