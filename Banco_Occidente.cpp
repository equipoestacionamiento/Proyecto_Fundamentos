#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define ENTER 13
#define ESC 27
using namespace std ;
char tecla,tecla2;
int menu;
void ingresar();
string cliente1[2];
string materia[7] = {"          Nombre:", "       Domicilio:", "Fecha Nacimiento:", "            Edad:","          Correo:", "  Tipo de cuenta:", "Saldo disponible:"};

 main ()
{
system("color 3A");

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



tecla = getch();
if(tecla==ENTER)
{
	goto ventana2;

	}
if(tecla==ESC)
{
	cout<<"ADIOS";
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


tecla2=getch();
if(tecla2==ENTER)
{
	goto ventana3;

	}
if(tecla2==ESC)
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

switch (menu)
{
	case 1:
		 ingresar();
	break;

	case 2:
	//	goto eliminar;
	break;

	case 3:
	//	goto modificar;
	break;

	case 4:
	//	goto mostrar;
	break;
}

/*
eliminar:
	cout<<"hola2";
return 0;
modificar:
	cout<<"hola3";
return 0;
mostrar:
    cout<<"hola4";
return 0;
*/


}

void ingresar()
{
	system("cls");
	cout<<"\t\tIngrese sus datos"<<endl<<endl;
for (int j=0; j<7; j++){
		cout<<materia[j]<<"\t";
		cin>>cliente1[j];
		cout<<"\n";	}

	getch();

}
