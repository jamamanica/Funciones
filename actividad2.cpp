#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int n,max,num;
    srand(time(0));
	cout<<"--Numeros aleatorio--"<<endl;
	cout<<"Cantidad de numeros aleatorios: ";cin>>n;
	cout<<"Valor maximo permitido: ";cin>>max;
    for(int i=0;i<n;i++){
        num=rand()%(max+1);
        cout<<num<<endl;
    }
    return 0;
}