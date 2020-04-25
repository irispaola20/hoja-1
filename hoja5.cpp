/*En la region de la sierra de los cuchumantes la compañia Xterminio s.a tiene las siguientes tarifas:
	tipo    servicio     costo X hectarea
	1       mala hierva    10.00
	2       longostas      20.00
	3       gusanos        30.00
	4       todo lo anterios 50.00
además del área a fumigar es mayor a 500.00 hectarias se tiene un descuento del 5%. adicionalmente, si el 
total a pagar por el sercio es mayor a Q1500.00 se tiene un descuento adicional del 10% sobre el excedente.
La  compañia necesita las estadisticas de los servicios que ha ofrecido a un grupo de agricultores durante
 un periodo del tiempo. por ecada sercio debe ingresar los datos siquitnes: tipo de fumigacion(1 a 4) y el 
 numero de hectareas, toda esta informacion debera almacenarse en una base de datos(archivo plano).
Se le pide que realice un programa en c++ que solicite el ingreso de la informacion de cada servicio realizado
a un grupo de agricultores. el programa debera de leer los datos del archivo que tiene al informacion antes
almacen y mostrar la cantidad de servicios de cada tipo de fumigaciion, deterinar el tipo servicios con maor 
demanda y el monto total pagado poe los clientes.*/

#include<fstream> //constructor del archivo de lectura, escritura
#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>

using namespace std;  

struct ventas{
	int tipoh;
	float descuento;
	float area;
	float precio;
	float unidades;
	float totalvta;
};

void venta();
void reporte();
int main(){
	venta();
	//reporte();
}

void venta(){
	int tipoh;
	float descuento;
	float area;
	float precio;
	float unidades;
	float totalvta;
	string s; 
	
	cout<<"------------------------------------------"<<endl;
	cout<<"-----TARIFAS------"<<endl;
	cout<<"  1. Mala Hierva  (10.00)"<<endl;
	cout<<"  2. Langostas  (20.00)"<<endl;
	cout<<"  3. Gusanos    (30.00  "<<endl;
	cout<<"  4. Todo lo anterior (50.00) "<<endl;
	cin>>tipoh;
	cout<<"Indique el numero unidades a comprar:   "<<endl;
	cin>>unidades;
	if (tipoh==1){
		precio= 10.00;

	}
	else if (tipoh==2){
		precio= 20.00;
	}
	else if (tipoh==3){
		precio= 30.00;
	}
	else if (tipoh==4){
		precio=50.00;
	}
		
	if(area>=500){
		area=0.5;
		totalvta= area*precio;
	}
	if(area>1500){
		area=0.10;
		totalvta=area*precio;
	}
	cout<<"tipo hectarias:"<<tipoh<<"Descuento  : "<<descuento<<"Área: "<<area<<"precio: "<<precio<<"unidades: "<<unidades<<"total de ventas: "<<totalvta
		
	
}
	

