#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    float d,x1,x2;
    cout<<"--Raices--"<<endl;
    cout<<"Termino cuadratico: ";cin>>a;
    cout<<"Termino lineal: ";cin>>b;
    cout<<"Termino independiente: ";cin>>c;
    d=pow(b,2)-4*a*c;
    if(d>0){
    	cout<<"Las raices son reales"<<endl;
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"Raiz 1: "<<x1<<endl;
        cout<<"Raiz 2: "<<x2<<endl;
        
    } else if(d==0){
        cout<<"Las raices reales son iguales"<<endl;
        x1=(-b+sqrt(d))/(2*a);
        x2=x1;
        cout<<"Raiz 1: "<<x1<<endl;
        cout<<"Raiz 2: "<<x2<<endl;
    } else {
    	cout<<"Las raices son complejas"<<endl;
	}
    return 0;
}