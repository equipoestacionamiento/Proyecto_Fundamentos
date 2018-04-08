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
 
//variables
 int menu,n,i,cont,tecla,tecla2;
 
//estructura
struct cliente{
	int id;
	char nombre[100];
	char fechanacimiento[100];
	int edad;
	char correo[100];
	char tipocuenta[100];
	double saldo;
	char domicilio[100];
	char ciudad[50];
}clientes[2];

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
	cout<<"\t\t|        |    ENTER    |           | ESPACIO |           |"<<endl;
	cout<<"\t\t|        | (CONTINUAR) |           | (SALIR) |           |"<<endl;
	cout<<"\t\t|        |_____________|           |_________|           |"<<endl;
	cout<<"\t\t|                                                        |"<<endl;
	cout<<"\t\t|________________________________________________________|"<<endl;
	
	tecla = getch();
		if(tecla==ENTER)
	{
		ventana2();
	}
		
		 else if(tecla==27)
		{
			getch();
			system("pause");
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
	cout<<"\t\t|         _____________             _________            |"<<endl;
	cout<<"\t\t|        |    ENTER    |           | ESPACIO |           |"<<endl;
	cout<<"\t\t|        | (CONTINUAR) |           | (SALIR) |           |"<<endl;
	cout<<"\t\t|        |_____________|           |_________|           |"<<endl;
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
	cout<<"\t\t|            5)  SALIR DEL PROGRAMA                      |"<<endl;
	cout<<"\t\t|________________________________________________________|"<<endl;
	cin>>menu;
	
		switch(menu)
	{
	 case 1:
	 	ingresar();
	break;
	 
	 case 2:
	 	//eliminar();
	break;
	
	 case 3:
	 	//modificar();
	break;
	
	 case 4:
	 	//mostrar();
	break;
		 case 5:
		system ("cls");
		cout<<"\n\n\t\tGRACIAS POR UTILIZAR EL PROGRAMA"<<
		"\n\t\t\t\tADIOS"<<endl;
		//modificar();
	break;
	}	
		
}//men	
	
void ingresar(){//ingresar
	system("cls");
	  
	  if( i<2){
	fflush(stdin);
	cout<<"Agregar Cliente:"<<endl;
	clientes[i].id = i + 1;
	cout<<"\n          Nombre: \t"; 
	cin.getline(clientes[i].nombre , 100, '\n');
	cout<<"\n       Domicilio: \t ";
	cin.getline(clientes[i].domicilio, 100, '\n');
	cout<<"\nFecha Nacimiento \t ";
	cout<<"\n    (DD/MM/AAAA): \t ";
	cin.getline(clientes[i].fechanacimiento, 100, '\n');
		i++;
	cout<<"\nCliente registrado correctamente\n"<<endl;
     system("pause");
     system("cls");
    		men();
}
else {
    cout<<"\nNo hay espacio disponible\n"<<endl;
    system ("pause");
  }
}//ingresar









