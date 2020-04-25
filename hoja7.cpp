//////////////////////////////////////////////////////////////////////////////////////////7777777777777777
// HOJA DE TRABAJO 7

/*La empres necesita llevar el control de los datos 
personales de sus 10 empleados contratados, por la motivo la empresa lo ha controlado 
para la impleentacion de estes proyectos los datos a almacen son;  
	codigo del empleado
	nombre del empleado 
	puesto 
	departamento 
	salario 
existen 3 departamentos, 1 general, 2 administraiso y 3 produccion. 
el programa debera  de desplegar
la lista del empleados almacenados y el total de la planilla 
nota se debe utilizar ciclos, punteros, arreglos y estructura. */


#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<sstream>

using namespace std;
struct almacen{
	int codigo;
	string nombre;
	string puesto;
	string departamento;
	float salario;	
};

int main (){
system("color 0a"); 
//color verde a las letras	
	int n, i;
	int  total=0.00; //sirve para mostrar el total 
	almacen *base;
	cout<<"Cuantos almacenes desea ingresar: "<<endl;
	cin>>n;
	int arreglos[n];
	base= new almacen[n];
	for(i=0;i<n;i++){
		
		cout<<"El empleado # "<<i+1<<"  Ingrese el codigo del empleado: "<<endl;
		cin>>base[i].codigo;
		cout<<"ingrese el nombre del empleado: "<<endl;
		cin>>base[i].nombre;
		cout<<"ingrese el puesto del empleado: "<<endl;
		cin>>base[i].puesto;
		cout<<"depatamento del empleado - GENERAL -  ADMINISTRATIVO - PRODUCCION: "<<endl;
		cin>>base[i].departamento;
		cout<<"ingrese el salario del empleado:  "<<endl;
		cin>>base[i].salario;
		total+=base[i].salario;
		cout<<"-----------------------------------------------------------------"<<endl;
}
	
	cout<<"El total de los salarios es de: "<<total<<endl;
	delete [] base; //borrados de datos de tipo puntero;

		
}
