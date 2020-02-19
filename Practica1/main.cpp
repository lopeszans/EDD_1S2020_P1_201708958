#include <iostream>
using namespace::std;

void Menu();
int main() {

   char Saludo[200] = "HOLA";
   for(int i = 0; i <200; i = i + 1){

    //cout<< Saludo[i];

    if (!Saludo[i]){
   cout<< i <<"  ya no hay datos";

    }

   }
   Menu();


   /*
      char nombre[40];
      cout <<  "Introduce nombre y apellidos: ";
      cin.getline(nombre,40);  //lectura incluyendo espacios
      cout << "Hola " << nombre << endl;
      cout <<  "Introduce nombre y apellidos: ";
      cin >> nombre;  //lectura sin incluir espacios
      cout << "Hola " << nombre << endl;
      //system("pause");
*/






    return 0;
}






