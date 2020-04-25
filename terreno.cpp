//Iris Paola López Jacobo
// carnet: 9941-19-4682
// Seccion: C

/*Clase # 7  Hoja# 5
Ejercicio # 1
Realice un programa que genere la venta de compra de un terreno/casa/departamento. Este programa
debe realizar los cálculos de acuerdo con la tabla abajo listada: 
 
comercial                
 A      terreno       2200        		B      terreno       1300
 		casa          2500                     casa          2500
 		departamento  2100                     departamento  1200
RESICENCIAL 
A       terreno       2100        		B      terreno       1500       C    terreno       1100
 		casa          2500                     casa          1600            casa          1300
 		departamento  2100                     departamento  1300            departamento  1000
Dada la categoría, zona, tipo y el área del terreno o inmueble determine a cuánto asciende el monto que
deberá pagar para comprar el inmueble. El programa desarrollado deberá de ser capaz de generar un
reporte de el total vendido por categoría, zona y tipo de inmble.*/ 
		

	
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
struct venta{
	int categoria;
	int zona;
	int a,b,c;
	float precio;
	float tipov;
};

void venta();
void reporte();
int main(){
	venta();
	reporte();
}

void venta(){
	int categoria;
	int zona;
	int a,b,c;
	float precio;
	float tipov;
	string s;

	
	
	cout<<"----- <<TERRENOS>> -----"<<endl;
	cout<<" ..CATEGORIAS...........- "<<endl;
	cout<<" 1 - COMERCIAL       "<<endl;
	cout<<" 2 - RESIDENCIAL    "<<endl;
	cout<<" --------------------------"<<endl;
	

	cout<<"Indique Tipo de categorias: "<<endl;
	cin>>categoria;
	
	if (categoria ==1){
		cout<<"----- <<TIPOS DE ZONAS>> -----"<<endl;
		cout<<" A               "<<endl;
		cout<<" B                  "<<endl;
		cout<<" --------------------------"<<endl;
		
		cout<<"Ingrese tipo de zona:  "<<endl;
		cin>>zona;
			
			if (zona ==a){
				cout<<"----- <<TIPOS DE VENTAS >> -----"<<endl;
				cout<<" 1- Terreno          (2200.00)   "<<endl;
				cout<<" 2 - Casa            (2500.00)   "<<endl;
				cout<<" 3 - Departamento    (2100.00)   "<<endl;
				cout<<" --------------------------------"<<endl;
		
				cout<<"Ingrese tipo de inmueble:    "<<endl;
				cin>>tipov;
				
					if (tipov ==1){
						precio= 2200;
						
					}
						else if(tipov ==2){
							precio = 2500;
						}
							else if(tipov ==3){
							precio = 2100;
						}
					}
			}
			else if (zona==b){
				cout<<"----- <<TIPOS DE VENTAS >> -----"<<endl;
				cout<<" 1- Terreno          (1300.00)   "<<endl;
				cout<<" 2 - Casa            (1500.00)   "<<endl;
				cout<<" 3 - Departamento    (2100.00)   "<<endl;
				cout<<" --------------------------------"<<endl;
				
				
				cout<<"Ingrese tipo de inmueble:    "<<endl;
				cin>>tipov;
				
					if (tipov ==1){
						precio= 1300;
					}
						else if(tipov ==2){
							precio = 1500;
						}
							else if(tipov =03){
							precio = 2100;
						}
			}
	
		if (categoria =2){
		cout<<"----- <<TIPOS DE ZONAS>> -----"<<endl;
		cout<<" A -                 "<<endl;
		cout<<" B -                 "<<endl;			cout<<" c -                 "<<endl;
		cout<<" -----------------------------"<<endl;
			
		cout<<"Ingrese tipo de zona:  "<<endl;
		cin>>zona;
					if (zona==a){
				cout<<"----- <<TIPOS DE VENTAS >> -----"<<endl;
				cout<<" 1- Terreno          (2100.00)   "<<endl;
				cout<<" 2 - Casa            (2500.00)   "<<endl;
				cout<<" 3 - Departamento    (2100.00)   "<<endl;
				cout<<" --------------------------------"<<endl;
		
			
				cout<<"Ingrese tipo de inmueble:    "<<endl;
				cin>>tipov;
				
					if (tipov ==1){
						precio= 2100;
					}
						else if(tipov ==2){
							precio = 2500;
						}
							else if(tipov ==3){
							precio = 2100;
						}
			}
			else if (zona==b){
				cout<<"----- <<TIPOS DE VENTAS >> -----"<<endl;
				cout<<" 1- Terreno          (1500.00)   "<<endl;
				cout<<" 2 - Casa            (1600.00)   "<<endl;
				cout<<" 3 - Departamento    (1300.00)   "<<endl;
				cout<<" --------------------------------"<<endl;					cout<<"Ingrese tipo de inmueble:    "<<endl;
			
			
				cout<<"Ingrese tipo de inmueble:    "<<endl;
				cin>>tipov;
				
					if (tipov ==1){
						precio= 1500;
					}
						else if(tipov ==2){
							precio = 1600;
						}
							else if(tipov ==3){
							precio = 1300;
						}
		}
			else if (zona ==c){
				cout<<"----- <<TIPOS DE VENTAS >> -----"<<endl;
				cout<<" 1- Terreno          (1100.00)   "<<endl;
				cout<<" 2 - Casa            (1300.00)   "<<endl;
				cout<<" 3 - Departamento    (1000.00)   "<<endl;
				cout<<" --------------------------------"<<endl;
			
			
				cout<<"Ingrese tipo de inmueble:    "<<endl;
				cin>>tipov;
				
					if (tipov ==1){
						precio= 1100;
					}
						else if(tipov ==2){
							precio = 1300;
						}
							else if(tipov ==3){
							precio = 1000;
						}
		}
		cout<<"categoria: "<<categoria<<"zona: "<<zona<<"precio: "
		<<precio<<"total de venta: "<<tipov;
		ofstream grabararchivo;
		try{
			grabararchivo.open("terreno.txt",ios::app);
			grabararchivo<<categoria<<"\t"<<zona<<"\t"<<precio<<"\t"<<tipov<<endl;
				grabararchivo.close();
			}
			catch(exception X){
			
			cout<<"Error en la manipulacion del archivo"<<endl;
		}
		
		
}
}

void reporte(){
	//mostrar el total glbal de la venta del dia
	//determiar el total de lo vendido por producto
	ifstream db;
	float c, z , p, tv=0;
	float sumatotal=0;
	float c1=0;
	float c2=0;

	try{
		db.open("terreno.txt",ios::in);
		
		while(db>>c>>z>>p>>tv){
			sumatotal = tv + sumatotal;
			if (c==1)
				c1+=tv;
				else if(c==2)
					c2+=tv;
	
		}
		db.close();
		cout<<setprecision(5)<<"Total de venta"<<sumatotal<<endl;
		cout<<"setprecision(5)"<<"comercial  "<<c1<<"El total de las compras es de: "<<setprecision(3)<<c1+sumatotal<<endl;	
		cout<<"setprecision(5)"<<"residenciales  "<<c2<<"El total de las compras es de: "<<setprecision(3)<<c1+sumatotal<<endl;	

	}
	catch(exception X){
		cout<<"ERROR PARA ABRIR ARCHIVO"<<endl;
		exit(1);
	}
}




	
	
	
