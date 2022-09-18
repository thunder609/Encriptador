#include "EcuacionSegundo-Clases-Angelica Sardiña.h"
#include <iostream>

using namespace std;

//MENU PRINCIPAL
int main(){
	int opcion, opcionmenu;
	EcuacionSeg EC(12,0,0);
	opcion=1;
	while(opcion==1){
		system ("cls");
		cout<<" ***Ecuacion***"<<endl;
		cout<<"1-Insertar Valores"<<endl;
		cout<<"2-Mostrar Solucion/nes"<<endl;
		cout<<"3-Salir"<<endl;
		cout<<"Opcion:";
		cin>>opcionmenu;
		system ("cls");
	
		switch (opcionmenu){
			
			case 1:
				EC.pedir_numero();
			break;
			
			case 2:
				EC.Calcule_raiz();
				system ("pause");
			break;
			
			case 3:
				system ("cls");
				cout<<"Cerrando..."<<endl;
				opcion=2;
			break;
			
			default : 
				cout << "Debio equivocarse"<<endl; 	
		}
	}
	
			
	return 0;	
}
//
