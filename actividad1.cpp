#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float r,a;
    cout<<"--Area de un circulo--"<<endl;
    cout<<"Radio: ";cin>>r;
    a=M_PI*pow(r,2);
    cout<<"Area: "<<a;
    return 0;
}