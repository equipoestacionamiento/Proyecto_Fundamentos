//LIBRERIAS
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>

#define ENTER 13
#define ESC 27
using namespace std;

//declaracion de funciones
	void interfaz();
 	void ingresar();
 	void men();
 	void ventana2();
    void mostrar();
    void modificar();
    void eliminar();
    
//variables
 int menu,n,i,j,cont,tecla,tecla2,dato,opc,eliminado,dato1,dato2;
 
//estructura
struct cliente
{
	int id;
	char nombre[100];
	char fechanacimiento[100];
	int edad;
	char correo[100];
	char tipocuenta[100];
	double saldo;
	char domicilio[100];
	char ciudad[50];
}clientes[30];

//funcion main
int main(){
	interfaz();	
	return 0;
	}//main

//funcion interfaz
void interfaz(){
system ("cls");
	cout<<"\t\t ________________________________________________________"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|              RAMON IGNACIO ARIAS MORFIN                |"<<endl;
	cout<<"\t\t|             JOSE JAVIER VILLALVAZO PEREZ               |"<<endl;
	cout<<"\t\t|              MARCO ANTONIO PINON SAUCEDO               |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                UNITEC CAMPUS GUADALAJARA               |"<<endl;
	cout<<"\t\t|               FUNDAMENTOS DE PROGRAMACION              |"<<endl;
	cout<<"\t\t|                  PROFESOR: CESAR PARRA                 |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|         _____________             _________            |"<<endl;
	cout<<"\t\t|        |    ENTER    |           |   ESC   |           |"<<endl;
	cout<<"\t\t|        | (CONTINUAR) |           | (SALIR) |           |"<<endl;
	cout<<"\t\t|        |_____________|           |_________|           |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|________________________________________________________|"<<endl;
	
	tecla = getch();
		if(tecla==ENTER)
	{
		ventana2();
	}
		
		  if(tecla==ESC)
		{
			
		}
	
}//interfaz

//funcion ventana2
void ventana2(){
	system ("cls");
	cout<<"\t\t ________________________________________________________"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|             BANCO DE OCCIDENTE S.A DE C.V              |"<<endl;
	cout<<"\t\t|                    SUCURSAL UNITEC                     |"<<endl;
	cout<<"\t\t|              AV. LAZARO CARDENAS #405                  |"<<endl;
	cout<<"\t\t|              COLONIA PRADOS TLAQUEPAQUE                |"<<endl;
	cout<<"\t\t|                  TLAQUEPAQUE JALISCO                   |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|      _____________      _________      __________      |"<<endl;
	cout<<"\t\t|     |    ENTER    |    | ESPACIO |    |    ESC   |     |"<<endl;
	cout<<"\t\t|     | (CONTINUAR) |    | (SALIR) |    |(REGRESAR)|     |"<<endl;
	cout<<"\t\t|     |_____________|    |_________|    |__________|     |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|________________________________________________________|"<<endl;

	tecla = getch();
		if(tecla==ENTER)
	{
		men();
	}
		
		 else if(tecla==ESC)
		{
			interfaz();
		}	
}//ventana2	
	
//funcion men	
void men(){
	system ("cls");
	cout<<"\t\t ________________________________________________________"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                         MENU                           |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|            1) AGREGAR   REGISTRO DE CLIENTE            |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|            2) ELIMINAR  REGISTRO DE CLIENTE            |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|            3) MODIFICAR REGISTRO DE CLIENTE            |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|            4) MOSTRAR  REGISTRO  DE CLIENTE            |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|            5) SALIR DEL PROGRAMA                       |"<<endl;
	cout<<"\t\t|________________________________________________________|"<<endl;
	
	
	cout<<"\n\n\t\tIngresa una opcion: \t"; cin>>menu;
	
		switch(menu)
	{
	 case 1:
	 	ingresar();
	break;
	 
	 case 2:
	 	eliminar();
	break;
	
	 case 3:
	 	modificar();
	break;
	
	 case 4:
	 	mostrar();
	break;
	 case 5:
		system ("cls");
		cout<<"\n\n\t\tGRACIAS POR UTILIZAR EL PROGRAMA"<<
		"\n\t\t\t\tADIOS"<<endl;	
	break;
	}		
}//men	
	
void ingresar()
{//ingresar
	system("cls");
	fflush(stdin); 
	
	if( i<30)
	{
	fflush(stdin);
	cout<<"Agregar Cliente:"<<endl;
	clientes[i].id = i + 1;
	cout<<"\n          Nombre:  "; 
	cin.getline(clientes[i].nombre , 100, '\n');
	cout<<"\n            Edad:  ";
	cin>>clientes[i].edad;
	fflush(stdin);
	cout<<"\nFecha Nacimiento ";
	cout<<"\n    (DD/MM/AAAA):  ";
	cin.getline(clientes[i].fechanacimiento, 100, '\n');
	fflush(stdin);
	cout<<"\n       Domicilio:  ";
	cin.getline(clientes[i].domicilio, 100, '\n');
	cout<<"\n          Ciudad:  ";
	cin.getline(clientes[i].ciudad, 50, '\n');
	cout<<"\n          Correo:  ";
	cin.getline(clientes[i].correo, 100, '\n');
	fflush(stdin);
	cout<<"\n  Tipo de cuenta:  ";
	cin.getline(clientes[i].tipocuenta, 100, '\n');
	fflush(stdin);
	cout<<"\nSaldo disponible:  ";
	cin>>clientes[i].saldo;
	i++;
	
	cout<<"\n Cliente registrado correctamente \n"<<endl;
    system("pause");
    men();
    } 
	 
else{
    cout<<"\n\n\n\t\tNo hay espacio disponible\n"<<endl;
    system ("pause");
    }
}//ingresar

void mostrar()//mostrar
{
   fflush(stdin);
   system("cls");
   cout<<"Que registro desea ver: "<<endl;
   cin>>dato2;
   dato2=dato2-1;
   
   
   
   if (dato2<30)
   			{
   cout<<"              Id:   "<<clientes[dato2].id				<<endl;
   cout<<"          Nombre:   "<<clientes[dato2].nombre			<<endl;
   cout<<"            Edad:   "<<clientes[dato2].edad			<<endl;
   cout<<"Fecha nacimiento:   "<<clientes[dato2].fechanacimiento<<endl;
   cout<<"       Domicilio:   "<<clientes[dato2].domicilio		<<endl;
   cout<<"          Ciudad:   "<<clientes[dato2].ciudad			<<endl;
   cout<<"          Correo:   "<<clientes[dato2].correo			<<endl;
   cout<<"  Tipo de cuenta:   "<<clientes[dato2].tipocuenta		<<endl;
   cout<<"Saldo Disponible:   "<<clientes[dato2].saldo			<<endl<<endl;
   
   	system("pause");
   	men();	
  			}
  			
  else
  {
  	system("cls");
    cout<<"\n Registro Inexistente \n"<<endl<<endl;
    
    system ("pause");
    men();
  } 
}//mostrar

void modificar()//modificar
{
  system("cls");
  cout<<"Ingresar ID del cliente que desea modificar : "<<endl;	
  cin>>dato;
  dato=dato-1;
  system("cls");
 
  if (dato<30)
  {
   cout<<"              Id:   "<<clientes[dato2].id				<<endl;
   cout<<"          Nombre:   "<<clientes[dato2].nombre			<<endl;
   cout<<"            Edad:   "<<clientes[dato2].edad			<<endl;
   cout<<"Fecha nacimiento:   "<<clientes[dato2].fechanacimiento<<endl;
   cout<<"       Domicilio:   "<<clientes[dato2].domicilio		<<endl;
   cout<<"          Ciudad:   "<<clientes[dato2].ciudad			<<endl;
   cout<<"          Correo:   "<<clientes[dato2].correo			<<endl;
   cout<<"  Tipo de cuenta:   "<<clientes[dato2].tipocuenta		<<endl;
   cout<<"Saldo Disponible:   "<<clientes[dato2].saldo			<<endl<<endl;
   
   fflush(stdin);
    cout<<"\n          Nombre:  "; 
	cin.getline(clientes[i].nombre , 100, '\n');
	cout<<"\n            Edad:  ";
	cin>>clientes[i].edad;
	fflush(stdin);
	cout<<"\n  Fecha Nacimiento ";
	cout<<"\n    (DD/MM/AAAA):  ";
	cin.getline(clientes[i].fechanacimiento, 100, '\n');
	fflush(stdin);
	cout<<"\n       Domicilio:  ";
	cin.getline(clientes[i].domicilio, 100, '\n');
	cout<<"\n          Ciudad:  ";
	cin.getline(clientes[i].ciudad, 50, '\n');
	cout<<"\n          Correo:  ";
	cin.getline(clientes[i].correo, 100, '\n');
	fflush(stdin);
	cout<<"\n  Tipo de cuenta:  ";
	cin.getline(clientes[i].tipocuenta, 100, '\n');
	fflush(stdin);
	cout<<"\nSaldo disponible:  ";
	cin>>clientes[i].saldo;
	cout<<"\n\n\n\t\t Cliente modificado correctamente\n"<<endl<<endl;
	system("pause");
	system("cls");
	men();
	  }	
  else
  {
  	system("cls");
    cout<<"\n Registro Inexistente \n"<<endl;
    
    system ("pause");
    men();
  } 	  
}//modificar

void eliminar()
{//eliminar
    system("cls");
	cout<<"Cual registro desea eliminar : "<<endl;
    cin>>dato1;
    dato1=dato1-1;
        
    if(dato1<30)
    {
    	fflush(stdin);
		clientes[dato1].nombre[0]=0;
    	clientes[dato1].domicilio[0]=0;
    	clientes[dato1].edad=0;
    	clientes[dato1].fechanacimiento[0]=0;
    	clientes[dato1].ciudad[0]=0;
    	clientes[dato1].correo[0]=0;
    	clientes[dato1].saldo=0;
    	clientes[dato1].tipocuenta[0]=0;
    	cout<<"\n\n\n\t\t Cliente eliminado correctamente\n"<<endl<<endl;
    	system("pause");
    	system ("cls");
        men();	
	} 
  else
  {
  	system("cls");
    cout<<"\n Registro Inexistente \n"<<endl;
    
    system ("pause");
    men();
  } 
}//eliminar

