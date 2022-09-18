/*Implemente una clase llamada raizes donde se representara una ecuacion de segundo grado 
, se tiene 3 coeficientes como atrivutos A,B y C.*/
#ifndef ecuacionSeg
#define ecuacionSeg
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

//CLASE
class EcuacionSeg{
	float A,B,C,Ux,Dx;
	float Raiz;
	public:	
		EcuacionSeg(int, int, int);
		void obtener_raiz();
		void obtener_raizes();
		float Discriminante(float);
		void pedir_numero();
		void Calcule_raiz();
		bool Tiene_Raices(int);
		bool Tiene_Raiz(int);
};
//

//Constructora
EcuacionSeg::EcuacionSeg(int a, int b, int c){
	A=a;
	B=b;
	C=c;
}
//

//FUNCIONES
bool EcuacionSeg::Tiene_Raices(int cod){
	EcuacionSeg::Discriminante(Raiz);
	return Raiz>0;
}

bool EcuacionSeg::Tiene_Raiz(int codi){
	EcuacionSeg::Discriminante(Raiz);
	return Raiz==0;
}

void EcuacionSeg::pedir_numero(){
	do{
		cout<<"Ingrese A"<<endl;
		cin>>A;
		if(A==0){
			cout<<"A no puede ser 0, por que no resolveria el problema"<<endl;
			cout<<"Vuelva a intentarlo"<<endl;
		}
	}while(A==0);
	cout<<"Ingrese B"<<endl;
	cin>>B;
	cout<<"Ingrese C"<<endl;
	cin>>C;
}

float EcuacionSeg::Discriminante(float Raiz){
	Raiz=pow(B,2)-4*A*C;
	return Raiz;
}

void EcuacionSeg::Calcule_raiz(){
	bool cod=false;
	bool codi=false;
	
	if(EcuacionSeg::Tiene_Raices(cod)){
        EcuacionSeg::obtener_raizes();
    }
	else if(EcuacionSeg::Tiene_Raiz(codi)){
        EcuacionSeg::obtener_raiz();
    }
	else{
       cout<<"No tiene soluciones"<<endl;
    }
}

void EcuacionSeg::obtener_raizes(){
	EcuacionSeg::Discriminante(Raiz);
	Ux=(-B+sqrt(Raiz))/(2*A);		
	Dx=(-B-sqrt(Raiz))/(2*A);	
	
	cout<<"Solucion 1 :"<<Ux<<endl;
	cout<<"Solucion 2 :"<<Dx<<endl;
}

void EcuacionSeg::obtener_raiz(){
	float x;
	x=(-B)/(2*A);
    cout<<"Solucion unica :"<<x<<endl;
}

//
#endif
