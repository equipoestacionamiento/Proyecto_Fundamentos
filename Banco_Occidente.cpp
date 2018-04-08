#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>

#define ENTER 13
#define ESC 27

struct cliente{
	char nombre[100];
	char fechanacimiento[100];
	int edad;
	char correo[100];
	char tipocuenta[100];
	double saldo;
	char domicilio[100];
	char ciudad[50];
}clientes[5];

//string materia[7] = {"          Nombre:", "       Domicilio:", "Fecha Nacimiento:", "            Edad:","          Correo:", "  Tipo de cuenta:", "Saldo disponible:"};

using namespace std;

int main(){

	int tecla,tecla2;
	int menu,n,i;
ventana1:
	system ("cls");
	cout<<"\t\t _____________________________________________________________"<<endl;
	cout<<"\t\t|                                                             |"<<endl;
	cout<<"\t\t|                 RAMON IGNACIO ARIAS MORFIN                  |"<<endl;
	cout<<"\t\t|                JOSE JAVIER VILLALVAZO PEREZ                 |"<<endl;
	cout<<"\t\t|                 MARCO ANTONIO PINON SAUCEDO                 |"<<endl;
	cout<<"\t\t|                                                             |"<<endl;
	cout<<"\t\t|                                                             |"<<endl;
	cout<<"\t\t|                   UNITEC CAMPUS GUADALAJARA                 |"<<endl;
	cout<<"\t\t|                  FUNDAMENTOS DE PROGRAMACION                |"<<endl;
	cout<<"\t\t|                     PROFESOR: CESAR PARRA                   |"<<endl;
	cout<<"\t\t|                                                             |"<<endl;
	cout<<"\t\t|                                                             |"<<endl;
	cout<<"\t\t|       ____________________             _______              |"<<endl;
	cout<<"\t\t|      | PRESIONE UNA TECLA |           |  ESC  |             |"<<endl;
	cout<<"\t\t|      |   PARA CONTINUAR   |           |(SALIR)|             |"<<endl;
	cout<<"\t\t|      |____________________|           |_______|             |"<<endl;
	cout<<"\t\t|                                                             |"<<endl;
	cout<<"\t\t|                                                             |"<<endl;
	cout<<"\t\t|_____________________________________________________________|"<<endl;


//ventana2
tecla = getch();
if(tecla==ENTER)
{
	goto ventana2;
	
	}	
else if(tecla==ESC)
{
	return 0;
	}
	
	ventana2:
system ("cls");
cout<<"\t\t _____________________________________________________________"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                BANCO DE OCCIDENTE S.A DE C.V                |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                   DESEA INGRESAR AL SISTEMA                 |"<<endl;
cout<<"\t\t|                   (PRESIONE CUALQUIER TECLA)                |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                          REGRESAR                           |"<<endl;
cout<<"\t\t|                       (Presione ESC)                        |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|_____________________________________________________________|"<<endl;

tecla = getch();
if(tecla==ENTER)
{
	goto ventana3;
	
	}	
else if(tecla==ESC)
{
	goto ventana1;
	}
	ventana3:
system ("cls");
cout<<"\t\t _____________________________________________________________"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                             MENU                            |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                 1) INGRESAR NUEVO CLIENTE                   |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                 2) ELIMINAR REGISTRO DE CLIENTE             |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                 3) MODIFICAR REGISTRO DE CLIENTE            |"<<endl;
cout<<"\t\t|                                                             |"<<endl;
cout<<"\t\t|                 4) MOSTRAR REGISTRO  DE CLIENTE             |"<<endl;
cout<<"\t\t|_____________________________________________________________|"<<endl;
cin>>menu;

switch(menu)
	{
	 case 1:
	 	system("cls");
	  
	  for( i=0; i<2; i++){
	  	fflush(stdin);
	cout<<"cliente # "<<i+1<<endl;
	cout<<"\n           Nombre: \t"; 
	cin.getline(clientes[i].nombre , 100, '\n');
	cout<<"\n        Domicilio: \t ";
	cin.getline(clientes[i].domicilio, 100, '\n');
	cout<<"\n	Fecha Nacimiento:(DD/MM/AAAA) \t ";
	cin.getline(clientes[i].fechanacimiento, 100, '\n');
	    
					}
					
	
	break;
	 
	 case 2:
	break;
	
	 case 3:
	break;
	
	 case 4:
	break;
	}	


	

		
	return 0;
	
	}
	
