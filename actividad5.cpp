#include<iostream>
#include<cmath>
using namespace std;

void calcularRaices(int a,int b,int c,float& x1,float& x2,bool& reales){
    float d=pow(b,2)-4*a*c;
    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        reales=true;
        
    } else if(d==0){
        x1=(-b+sqrt(d))/(2*a);
        x2=x1;
        reales=true;
    } else{
    	reales=false;
	}
}
int main(){
    int a,b,c;
    float x1,x2;
    bool reales;
    cout<<"--Raices--"<<endl;
    cout<<"Termino cuadratico: ";cin>>a;
    cout<<"Termino lineal: ";cin>>b;
    cout<<"Termino independiente: ";cin>>c;
    calcularRaices(a,b,c,x1,x2,reales);
    if(reales){
    	cout<<"Las raices son reales"<<endl;
		cout<<"Raiz 1: "<<x1<<endl;
        cout<<"Raiz 2: "<<x2<<endl;
	} else{
		cout<<"Las raices son complejas"<<endl;
	}
    return 0;
}