#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    float c;
    cout<<"--Hipotenusa--"<<endl;
    cout<<"Cateto a: ";cin>>a;
    cout<<"Cateto b: ";cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<"La hipotenusa es: "<<c<<endl;
    return 0;
}