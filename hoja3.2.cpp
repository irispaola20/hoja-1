/*Ejercicio # 2:
En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del dia y
determinar el total de lo vendido por producto, mostrando tambien el porcentaje
con relacion al total.
*/
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

void guardar ();
int main(){
	guardar();
}


void guardar() {
	int tipo;
	//string servicio;
	int costo;
	int area;
	float exedente=0;
	float costototal=0;
	string s;

	cout<<"-----MENU PRINCIPAL------"<<endl;
	cout<<"1. Modelo..........10.00"<<endl;
	cout<<"2. MODELO..........15.00"<<endl;
	cout<<"3. MODELO..........18.00"<<endl;
	cout<<"4. MODELO..........25.00"<<endl;
	
	cout<<"INGRESE EL TIPO DE SERVICIO: "<<endl;
	cin>>tipo;


	if (tipo==1){
		costo = 10;	
	}
	else if (tipo==2){
		costo = 20;
	}else if (tipo==3){
		costo = 30;
	}else if (tipo==4){
		costo = 50;
	}
	

	
	if (area > 500){
		costototal= (costo*area)*0.95;
		cout<<"El total de pago con el descuento de  5% es de : "<<costototal<<endl;
	}else {
		costototal=costo*area;
		cout<<"TOTAL A PAGAR: "<<costototal<<endl;
	}
	
	if (costototal>1500){
		exedente=(costototal-1500)*0.90;
		cout<<"EL toal de pago con el descuento del  10% es de: "<<exedente<<endl;
	}else{
		exedente= 0;
		cout<<"EL TOTAL NO CONTIENE EXCEDENTE: "<<exedente<<endl;
		
		
		
		
	}
		ofstream archivo;
	archivo.open("fumigacion.text",ios::app);
		if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	archivo<<tipo<<"\t"<<costo<<"\t"<<area<<"\t"<<costototal<<"\t"<<exedente<<endl;
	archivo.close();

ifstream leerarchivo;
try{
	leerarchivo.open("fumigacion.txt",ios::in);
	
	while (getline(leerarchivo, s))
		cout<<s<<endl;
		leerarchivo.close();
	}
catch(exception X){
	cout<<"ERROR EN LA MANIPULACION DEL ARCHIVO"<<endl;
}

}

void reporte(){
	ifstream db;
	float tp,c,a,ex,co=0;
	float sumatotal=0;
	float tp1=0;
	float tp2=0;
	float tp3=0;
	float tp4=0;
	
	try{
	db.open("fumigacion.txt",ios::in);
	
	while(db >>tp >>c >>a >>ex >>co){
		sumatotal = co + sumatotal;
		if (tp==1)
			tp1+=co;
		else if (tp==2)
			tp2+=co;
		else if (tp==3)
			tp2+=co;
		else if (tp==4)
			tp2+=co;
}
	db.close();
	
	}
	catch(exception X){
		cout<<"error para abrir archivo"<<endl;
		exit(1);
	}
	
	
}

	
	



