#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int num,op,i=0,j=0;
    srand(time(0));
    do{
    	srand(time(0));
        num=rand()%3+1;
		cout << "--Piedra, papel o tijeras--" << endl;
        cout<<"1. Piedra"<<endl;
        cout<<"2. Papel"<<endl;
        cout<<"3. Tijeras"<<endl;
        cout<<"Opcion: ";cin>>op;
        switch(op){
            case 1:
                if(num==3){
                    cout<<"Computadora: Tijeras"<<endl;
					cout<<"GANASTE"<<endl;
                    i++;
                }else{
					if(num==2){
                		cout<<"Computadora: Papel"<<endl;
                    	cout<<"PERDISTE"<<endl;
                    	j++;
                	}else{
                		cout<<"Computadora: Piedra"<<endl;
                    	cout<<"EMPATE"<<endl;
                	}
				}
                break;  
            case 2:
                if(num==1){
                	cout <<"Computadora: Piedra"<<endl;
                    cout <<"GANASTE"<<endl;
                    i++;
                }else{
					if(num==3){
                		cout<<"Computadora: Tijeras"<<endl;
                    	cout<<"PERDISTE"<<endl;
                    	j++;
                	}else{
                		cout<<"Computadora: Papel"<<endl;
                    	cout<<"EMPATE" <<endl;
                	}
				}
                break;
            case 3:
                if(num==2){
                	cout<<"Computadora: Papel"<<endl;
                    cout<<"GANASTE"<<endl;
                    i++;
                }else{
					if(num==1){
                		cout <<"Computadora: Piedra"<<endl;
                    	cout << "PERDISTE" <<endl;
                    	j++;
                	}else{
                		cout <<"Computadora: Tijeras"<<endl;
                    	cout << "EMPATE" <<endl;
                	}
            	}
                break;
        }
    }while(i!=3&&j!=3);
	cout << "-------RONDAS GANADAS------" <<endl;
    cout<<"Usuario: "<<i<<endl;
    cout<<"Computadora: "<<j<<endl;
    return 0;
}