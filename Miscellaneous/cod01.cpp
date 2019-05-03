#include<iostream>
#include<vector>
#include<stdlib.h>
#include<stdexcept>
using namespace std;

int main()
try
{
	string num;
	vector<string>nums;
	nums.push_back("cero");
	nums.push_back("uno");
	nums.push_back("dos");
	nums.push_back("tres");
	nums.push_back("cuatro");
	nums.push_back("cinco");
	nums.push_back("seis");
	nums.push_back("siete");
	nums.push_back("ocho");
	nums.push_back("nueve");
	
	cout<<"Ingrese el numero en letras"<<endl;
	cin>>num;
	
	for(int i=0;i<nums.size();i++){
		if (num==nums[i]){
			cout<<i<<endl;
		}
		else throw runtime_error("Dato no valido");
	}
}
catch (exception&e){
	cerr<<"error: "<<e.what()<<endl;
	return 1;
}

