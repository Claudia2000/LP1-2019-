#include<iostream>
using namespace std;
//Mio
int main(){
  int f=0;
  int c=0;
  int r=0;  
  int total=0;
  cin>>f>>c>>r;
  
  if((f==1&&c==1)||(f==1&&c==8)||(f==8&&c==1)||(f==8&&c==8))
	{
	    r=r+1;
	    total=r*r;
	   	cout<<"("<<f<<","<<c<<"), "<<r-1<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
  	}
    else if((f==1&&c==2)||(f==2&&c==1)||(f==1&&c==7)||(f==7&&c==1)||(f==2&&c==8)||(f==8&&c==2)||(f==7&&c==8)||(f==8&&c==7))
  	{
    	if(r==1){
      		total=6;
    		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>1&&r<7){
      		total=(r+1)*(r+2);
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if (r>=7){
      		total=(r+1)*(r+1);
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  	}
  	else if((f==1&&c==3)||(f==3&&c==1)||(f==1&&c==6)||(f==6&&c==1)||(f==3&&c==8)||(f==8&&c==3)||(f==6&&c==8)||(f==8&&c==6))
	{
    	if(r==1){
      		total=6;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>1&&r<5){
      		total=(r+1)*(r+3);
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if (r==5){
      		total=48;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>5&&r<8){
      		total=(r+1)*8;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  		}
  	else if((f==1&&c==4)||(f==4&&c==1)||(f==1&&c==5)||(f==5&&c==1)||(f==4&&c==8)||(f==8&&c==4)||(f==5&&c==8)||(f==8&&c==5))
	  {
    	if(r==1){
      		total=6;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r==2){
      		total=15;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if (r==3){
      		total=36;
     		 cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>3&&r<8){
      		total=(r+1)*8;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  		}
  	else if((f==2&&c==2)||(f==2&&c==7)||(f==7&&c==7)||(f==5&&c==7))
	  {
    	if(r>0&&r<7){
      		total=(r+2)*(r+2);
     		 cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  	  }
  	else if((f==2&&c==3)||(f==3&&c==2)||(f==2&&c==6)||(f==6&&c==2)||(f==3&&c==7)||(f==7&&c==3)||(f==6&&c==7)||(f==7&&c==6))
	  {
    	if(r==1){
      		total=9;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
   	 	}
    	else if(r==4){
      		total=42;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if (r>1&&r<4){
      		total=r*10;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>4&&r<7){
      		total=(r+2)*8;
     		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  		}
  	else if((f==2&&c==4)||(f==4&&c==2)||(f==2&&c==5)||(f==5&&c==2)||(f==4&&c==7)||(f==7&&c==4)||(f==5&&c==7)||(f==7&&c==5))
	  {
    	if(r==1){
      		total=9;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r==2){
      		total=20;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if (r==3){
      		total=35;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>3&&r<7){
      		total=(r+2)*8;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  	  }
  	else if((f==3&&c==3)||(f==3&&c==6)||(f==6&&c==3)||(f==6&&c==6))
	  {
    	if(r==1){
      		total=9;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>1&&r<6){
      		total=(r+3)*(r+3);
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  		}
  	else if((f==3&&c==4)||(f==4&&c==3)||(f==3&&c==5)||(f==5&&c==3)||(f==4&&c==6)||(f==6&&c==4)||(f==5&&c==6)||(f==6&&c==5))
	  {
    	if(r==1){
      		total=9;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r==2){
      		total=25;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if (r==3){
      		total=42;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>3&&r<6){
      		total=(r+3)*8;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  		}
  	else if((f==4&&c==4)||(f==4&&c==5)||(f==5&&c==4)||(f==5&&c==5))
	  {
    	if(r==1){
      		total=9;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r==2){
      		total=25;
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else if(r>2&&r<5){
      		total=(r+4)*(r+4);
      		cout<<"("<<f<<","<<c<<"), "<<r<<" movimientos, se puede mover "<<total<<" espacios"<<endl;
    	}
    	else
      		cout<<"Imposible";
  		}
}
