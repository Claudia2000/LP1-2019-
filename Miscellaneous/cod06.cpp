#include<iostream>
using namespace std;

int potencia(int x){
	long int z=1;
	if(x==0)return 0;
	for(int i=0;i<=x-1;i++){
		z=10*z;
	}
	return z;
}

int main(){
	int nums;
	int A[nums];
	int B[nums];
	int d=0;
	cout<<"Ingrese la cantidad de digitos"<<endl;
	cin>>nums;
	int nums1=nums;
	cout<<"Ingrese los numeros"<<endl;
	for(int i=0;i<nums;i++){
		cin>>A[i];
	}
	for(int j=0;j<nums;j++){
		B[j]= potencia(nums1-1)*A[j];
		nums1--;
	}
	for(int k=0;k<nums;k++){
		d=B[k]+d;
	}
	cout<<d+A[nums-1];
}
