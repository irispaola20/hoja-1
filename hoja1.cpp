#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>


using namespace std;

int opcion,ret,ret2,ret3,salir, confirm1;
void codigo_programa();
	
	int codprod;
	string nombre;
	int nivelminimo;
	int nivelactual;
	string proveedor;
	float precio;
	

int main(){
	
	codigo_programa();
	
	
	system("PAUSE");
	return 0;
		  }




void codigo_programa(){
				
				do{
				
				
	system("CLS");

	cout<<"\n  1. ingreso de productos:"<<endl;
	cout<<"\n  2. consulta de productos:"<<endl;
	cout<<"\n  3. Salir."<<endl;
	int opcion = 0;
	cin >> opcion;

	switch(opcion){
						
    case 1: 	
 system("CLS");
	do{
	cout<<"\n  Ingreso de productos"<<endl;
	cout<<"\n  Ingrese el codigo del producto: "<<endl;
	cin>>codprod;
	fflush(stdin);
	cout<<"\n  Ingrese el nombre del producto: "<<endl;
	getline(cin,nombre,'\n');
	cout<<"\n  Ingrese el nivel minimo que desea poseer del producto: "<<endl;
	cin>>nivelminimo;
	cout<<"\n  Ingrese el nivel actual que posee del producto: "<<endl;
	cin>>nivelactual;
	cout<<"\n  Ingrese el proveedor: "<<endl;
	fflush(stdin);
	getline(cin,proveedor,'\n');
	cout<<"\n Ingrese el precio del producto: "<<endl;
	cin>>precio;	
	cout<<"\n  La informacion ingresada es la siguiente: "<<endl;
	cout<<"Codigo: "<<codprod<<"\t"<<"Nombre: "<<nombre<<"\t"<<"\t minimo deseado: "<<nivelminimo<<"\t"<<"estado actual: "<<nivelactual<<"\t"<<"Proveedor: "<<proveedor<<"\t"<<"\t Precio: "<<"Q"<<precio<<endl;
	
	cin>>confirm1;
									
	if(confirm1==1){
		  cout<<"\n \t comprobando archivo: "<<endl;
			ofstream archivo;
 		archivo.open("almacen.txt",ios::app);
				
		if(archivo.fail()){
					
		cout<<"\t no se puede abrir el archivo"<<endl;
		exit(1);
}
		  	cout<<"\n \t Ingresando datos..."<<endl;
				archivo<<"Codigo: "<<codprod<<"\t"<<"Nombre: "<<nombre<<"\t"<<"\t minimo deseado: "<<nivelminimo<<"\t"<<"estado actual: "<<nivelactual<<"\t"<<"Proveedor: "<<proveedor<<"\t"<<"\t Precio: "<<"Q"<<precio<<endl;
				cout<<"\n \t Ingreso correcto..."<<endl;
				fflush(stdin);
				archivo.close();
																}
												
			else{	cout<<"\n \t opcion incorrecta, presione 0 para repetir menu"<<endl;	}
												
									
					cout<<"\n \t Si desea otro ingreso en la base de datos presione 1, para salir presione 0"<<endl;
      				cin>>ret2;
      				system("CLS");
				} while(ret2==1 && ret2<2);
    				break;
 				case 2: 
    				system("CLS");
					do{
					cout<<"\n \t \t \t \t \t \t Consulta de productos"<<endl;
									
	ifstream archivo; 
	archivo.open("almacen.txt",ios::in);
				
	if(archivo.fail()){
					
	cout<<"\t no se puede abrir el archivo"<<endl;
		exit(1);}
																
    	else{
		char linea[128];
  		long contador = 0L;
    	while(!archivo.eof()) {
    	archivo.getline(linea, sizeof(linea));
  		cout << linea << end;
       	if (nivelactual==nivelminimo){
				   
    	cout<<"Nivel Minimo"<<endl;
																							}
    		else{
			cout<<"Todo Ok"<<endl;
																	}
																	
									cout<<" Si desea una consuta seleccione 1 ";
      								cin>>ret3;
      								system("CLS");
									} while(ret3==1 && ret3<2);
									
    					break;
    					case 3:		
    					
                              		cout<<"Si desea salir presione (1), si desea regresar al menu anterior presione (0) y posteriormente presione (1) "<<endl;
                              		cin>>salir;
                                    if(salir==1){ exit (-1);}
                        break;
    					
    					
    					default: 
									cout<<"Usted ha ingresado una opci�n incorrecta"<<endl;
								}
				
				
				
					cout<<"\n Si desea volver al menu principal presione 1, para salir presione cualquier tecla \n";
      				cin>>ret;

				 } while(ret==1 && ret<2);

}
