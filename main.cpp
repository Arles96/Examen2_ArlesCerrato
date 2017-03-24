#include "seres.h"
#include "fruta_diablo.h"
#include "marina.h"
#include "piratas.h"
#include "revolucionarios.h"
#include "paramecia.h"
#include "zoan.h"
#include "logia.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

//funcion para la seleccion de la raza de los seres
string seleccionRaza();
//funcion para la seleccion de rango
string seleccionRango();
//funcion para la seleccion de oceano
string seleccionOceano();
//funcion para la seleccion del tipo de fruta zoan
string seleccionTipo();
//funcion para escribir en archivo de texto
void escribir(seres*);

int main()
{

  return 0;
}

string seleccionRaza()
{
  string opcion;
  while (true){
    cout << "MENU DE Raza" << endl << endl;
    cout << "1. gyojin" << endl;
    cout << "2. kyojin" << endl;
    cout << "3. ningyo" << endl;
    cout << "4. humano" << endl;
    cout << "5. mink" << endl;
    cout << "6. skypieans" << endl;
    cout << "Ingrese una opcion: ";
    cin>>opcion;
    if (opcion=="1") {
      return "gyojin";
    }else if (opcion=="2"){
      return "kyojin";
    }else if (opcion=="3") {
      return "ningyo";
    }else if (opcion=="4") {
      return "humano";
    }else if (opcion=="5") {
      return "mink";
    }else if (opcion=="6") {
      return "skypieans";
    }
  }
}
