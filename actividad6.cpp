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
                	cout<<"USUARIO: Piedra"<<endl;
                    cout<<"COMPUTADORA: Tijeras"<<endl;
					cout<<"--> GANASTE"<<endl;
					cout<<"---------------------------"<<endl;
                    i++;
                }else{
					if(num==2){
						cout<<"USUARIO: Piedra"<<endl;
                		cout<<"COMPUTADORA: Papel"<<endl;
                    	cout<<"--> PERDISTE"<<endl;
                    	cout<<"---------------------------"<<endl;
                    	j++;
                	}else{
                		cout<<"USUARIO: Piedra"<<endl;
                		cout<<"COMPUTADORA: Piedra"<<endl;
                    	cout<<"--> EMPATE"<<endl;
                    	cout<<"---------------------------"<<endl;
                	}
				}
                break;  
            case 2:
                if(num==1){
                	cout<<"USUARIO: Papel"<<endl;
                	cout <<"COMPUTADORA: Piedra"<<endl;
                    cout <<"--> GANASTE"<<endl;
                    cout <<"---------------------------"<<endl;
                    i++;
                }else{
					if(num==3){
						cout<<"USUARIO: Papel"<<endl;
                		cout<<"COMPUTADORA: Tijeras"<<endl;
                    	cout<<"--> PERDISTE"<<endl;
                    	cout<<"---------------------------"<<endl;
                    	j++;
                	}else{
                		cout<<"USUARIO: Papel"<<endl;
                		cout<<"COMPUTADORA: Papel"<<endl;
                    	cout<<"--> EMPATE" <<endl;
                    	cout<<"---------------------------"<<endl;
                	}
				}
                break;
            case 3:
                if(num==2){
                	cout<<"USUARIO: Tijeras"<<endl;
                	cout<<"COMPUTADORA: Papel"<<endl;
                    cout<<"--> GANASTE"<<endl;
                    cout<<"---------------------------"<<endl;
                    i++;
                }else{
					if(num==1){
						cout<<"USUARIO: Tijeras"<<endl;
                		cout <<"COMPUTADORA: Piedra"<<endl;
                    	cout << "--> PERDISTE" <<endl;
                    	cout << "---------------------------" <<endl;
                    	j++;
                	}else{
                		cout<<"USUARIO: Tijeras"<<endl;
                		cout <<"COMPUTADORA: Tijeras"<<endl;
                    	cout << "--> EMPATE" <<endl;
                    	cout << "---------------------------" <<endl;
                	}
            	}
                break;
        }
    }while(i!=3&&j!=3);
	cout << "-------RONDAS GANADAS------" <<endl;
    cout<<"USUARIO: "<<i<<endl;
    cout<<"COMPUTADORA: "<<j<<endl;
    return 0;
}