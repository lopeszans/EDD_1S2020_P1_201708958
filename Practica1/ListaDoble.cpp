#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace::std;

struct nodo{
	public: char dato[10];;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;


void insertarNodo(char dIntr);
void desplegarListaPU();

void insertarNodo(char dIntr){
	nodo* nuevo = new nodo();
	cout << "->";
    cin>>nuevo->dato;

    if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}

void desplegarListaPU(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){

		while(actual!=NULL){
			cout << "\n " << actual->dato;
			actual = actual->siguiente;
		}

	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}
