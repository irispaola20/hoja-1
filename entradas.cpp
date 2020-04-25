//Iris Paola López Jacobo
// carnet: 9941-19-4682
// Seccion: C






/*HOJA DE TRABAJO 7
EJERCICIO 2
Una persona desea comprar entradas para un concierto que se realizará 
en la explanada de cierto lugar de la ciudad. El precio de la entrada varía 
según la zona elegida, así tenemos que la lista de precios es la siguiente: 

Zona     Identificación Precio 
VIP          V           350.00 
Platea       P           130.00 
Popular      E           50.00
Adicionalmente los precios tendrán un descuento en función del 
número de entradas que se compran, así como si la persona que 
las adquiere es socio o no. 
Se le pide elaborar un programa en C++ que solicite la zona elegida, 
el número de entradas a comprar y consulte si es socio o no y nos 
determine y muestre el monto a pagar por la compra de las entradas. 
Todas las ventas deben de ser grabadas un archivo de datos, así 
mismo el programa de ser capaz de mostrar el monto total de lo 
vendido globalmente y por tipo de entrada mostrando también el
 porcentaje respecto al total global vendido. */
 
 #include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
	int zona;
	float precio;
	int unidades;
	int socio;
	float descuento;
	float descuento2;
	float totalvta;
	float costototal;
	string s;


	cout<<"---------------------------------------------"<<endl;
	cout<<" Ingrese tipo de entrada: "<<endl;
	cout<<"-ZONA----------CATEGORIA---PRECIO----- "<<endl;
	cout<<" 1 - VIP -               V       (Q350.00)   "<<endl;
	cout<<" 2 - PLATEA -            P       (Q130.00)   "<<endl;
	cout<<" 3 - POPULAR -           E       (Q50.00)    "<<endl;
	
	cout<<"Indique tipo de zona: "<<endl;
	cin>>zona;	
	cout<<"Indique el numero de unidades de entradas: "<<endl;
	cin>>unidades;	
	
	
	cout<<" ---ERES SOCIO------"<<endl;
	cout<<"Eres socio------------- Descuento-------"<<endl;
	cout<<" 1 -  si                    (8%) "<<endl;
	cout<<" 2 -  no                    (0%) "<<endl;
	cout<<"Indique si eres socio: "<<endl;
	cin>>socio;
		if(socio==1){
			descuento2 = 0.8;

		}
		else if(socio==2){
			descuento2 = 0;


		}
		
		
		
	if (zona ==1){
		precio = 350.00;
	}
	else if (zona ==2){
		precio = 130.00;		 
	}	
	else if (zona ==3){
		precio = 50.00;
	}

	       	if (unidades <3 > 6){
			descuento= (unidades*precio)*0.95;
			costototal= descuento*descuento2;
			cout<<"El total de pago es de: "<<costototal<<endl;

	}
	if (unidades < 7 > 9) {
			descuento= (unidades*precio)*0.75;
			costototal= descuento*descuento2;
			cout<<"El total de pago es de: "<<costototal<<endl;
	}
	
	if (unidades >9){
			descuento= (unidades*precio)*0.90;
			costototal= descuento*descuento2;
			cout<<"El total de pago es de: "<<costototal<<endl;

	}
	if(unidades < 2){
			descuento= (unidades*precio);
			costototal= descuento*descuento2;
			cout<<"El total de pago es de: "<<costototal<<endl;
	}
		

	
		ofstream grabararchivo;
	

	try {
		grabararchivo.open("entradas.txt",ios::out);
		grabararchivo<<zona<<"\t"<<precio<<"\t"<<unidades<<"\t"<<socio<<endl;
		grabararchivo.close();
		cout<<"Datos grabados en el archivo";
	}
	 catch(exception X){
		cout<<"ERROR EN LA MANIPULACION DEL ARCHIVO"<<endl;

	}


	

	ifstream leerarchivo;
	try {
		leerarchivo.open("entradas.txt",ios::in);				
		while (getline(leerarchivo, s))
			cout<<s<<endl;		
		leerarchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}	 

	
}

	
	
	

