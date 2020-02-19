#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace::std;


void insertarNodo(char dIntr);
void desplegarListaPU(); //Funcion enla ventana ListaDoble
void multiplicar(int a);

//void crearArchivo()//Funcion en la ventana Menu

void crearArchivo(){
cout <<"------------------------------------------------------------------------------------------------------"<<"\n";
cout <<" w(Buscar y Remplazar)                     c(Reportes)                      s(Guardar)"<<"\n";
cout <<"------------------------------------------------------------------------------------------------------"<<"\n";

}


void Menu(){
   int opcion_menu=0;
   int dato = 0;
   char letra = 'a';
   do
	{

        cout <<"------------------------------------------------------------------------------------------------------"<<"\n";
        cout << "       UNIVERSIDAD DE SAN CARLOS DE GUATEMALA"<<"\n";
        cout << "       FACULTAD DE INGENIERIA"<<"\n";
        cout << "       ESCUELA DE CIENCIAS Y SISTEMAS"<<"\n";
        cout << "       Angel Dimas Lopez Sanchez"<<"\n";
        cout << "       Carne: 201708958"<<"\n";
        cout << "       \n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";


		cout <<"              MENU"<<"\n";
		cout <<"        1. Crear Archivo"<<"\n";
		cout <<"        2. Abrir Archivo"<<"\n";
		cout <<"        3. Archivos Recientes"<<"\n";
		cout <<"        4. Salir"<<"\n";
		cout <<"------------------------------------------------------------------------------------------------------"<<"\n";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion_menu;

switch(opcion_menu){
		case 1:
			//cout << "\n\n Ingrese el valor: ";
		    //cin >> dato;
            //multiplicar(dato);
            system("cls");

            crearArchivo();
            insertarNodo(letra);



			break;
		case 2:

            desplegarListaPU();
			break;
		case 3:






			break;
		case 4:
		     system("cls");
			cout << "\n\n Programa finalizado...";
			break;

		default:

			cout << "\n\n Opcion No Valida \n\n";
		}

		//system("cls");
	} while (opcion_menu != 4);





}
