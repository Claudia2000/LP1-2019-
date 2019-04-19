#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	
	string palabra;
	vector<string>no_gusta;
	no_gusta.push_back("shit");
	no_gusta.push_back("fuck");
	no_gusta.push_back("booty");
	no_gusta.push_back("wtf");
	no_gusta.push_back("ass");
	no_gusta.push_back("idiot");
	
	vector<string>palabras;
	cout<<"Ingrese las palabras"<<endl;
	while (palabra!="/"){
		cin>>palabra;
		palabras.push_back(palabra);
	}
	
	for(int i=0;i<palabras.size();i++){
		for(int j=0; j<no_gusta.size();j++){
			if(palabras[i]==no_gusta[j]){
				palabras[i]="piiii";
			}
		}
	}
	
	for(int k=0;k<palabras.size();k++){
		cout<<palabras[k]<<" ";
	}
	
	
}
