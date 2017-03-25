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
#include <fstream>
#include <sstream>
#include <typeinfo>

using namespace std;

//funcion para la seleccion de la raza de los seres
string seleccionRaza();
//funcion para la seleccion de rango
string seleccionRango();
//funcion para la seleccion de oceano
string seleccionOceano();
//funcion para la seleccion del tipo de fruta zoan
string seleccionTipo();
//funcion de seleccion de booleanos
bool seleccionBool();
//funcion para escribir en archivo de texto
void escribir(seres*);
//funcion que retorna una posicion del vector de frutas
int posicionFrutas(vector<fruta_diablo*>);

int main()
{
  string respuesta="s";
  vector<seres*> personajes;
  vector<fruta_diablo*> frutas;
  while (respuesta=="s") {
    string principal;
    cout << endl;
    cout << "MENU PRINCIPAL DE AGREGAR" << endl << endl;
    cout << "1. fruta del diablo" << endl;
    cout << "2. seres" << endl;
    cout << "Ingrese una opcion: ";
    cin>>principal;
    cout << endl;
    if (principal=="1") {//agregar frutas y su MENU
      string opcion_fruta;
      cout << "MENU DE AGREGAR FRUTAS DEL DIABLO" << endl << endl;
      cout << "1. paramecia" << endl;
      cout << "2. zoan" << endl;
      cout << "3. logia" << endl;
      cout << "Ingrese una opcion: ";
      cin>>opcion_fruta;
      while (opcion_fruta!="1" && opcion_fruta!="2" && opcion_fruta!="3") {
        cout << "Error en la opcion" << endl;
        cout << "Ingrese una opcion: ";
        cin>>opcion_fruta;
      }
      cout << endl;
      string nombre;
      if (opcion_fruta=="1") {
        string descripcion;
        cout << "AGREGANDO PARAMECIA" << endl << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese el nombre: ";
        getline(cin,nombre);
        cout << "Ingrese la descripcion: ";
        getline(cin,descripcion);
        paramecia* p = new paramecia(nombre,descripcion);
        frutas.push_back(p);
        cout << "Se ha agregado la fruta" << endl;
      }else if (opcion_fruta=="2") {
        string tipo;
        string animal;
        cout << "AGREGANDO ZOAN" << endl << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese el nombre: ";
        getline(cin,nombre);
        tipo = seleccionTipo();
        cin.ignore(256,'\n');
        cout << "Ingrese el animal: ";
        getline(cin,animal);
        zoan* z = new zoan(nombre,tipo,animal);
        frutas.push_back(z);
        cout << "Se ha agregado una fruta " << endl;
      }else if (opcion_fruta=="3") {
        string elemento;
        cout << "AGREGANDO LOGIA" << endl << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese el nombre: ";
        getline(cin,nombre);
        cout << "Ingrese el elemento: ";
        getline(cin,elemento);
        logia* l  = new logia(nombre,elemento);
        frutas.push_back(l);
        cout << "Se ha agregado una fruta" << endl;
      }
    }//fin de agregar frutas
    else if (principal=="2") {//menu de seres
      string opcion_seres;
      cout << "MENU DE AGREGAR SERES " << endl << endl;
      cout << "1. marina" << endl;
      cout << "2. piratas" << endl;
      cout << "3. revolucionarios" << endl;
      cout << "Ingrese una opcion: ";
      cin>>opcion_seres;
      while (opcion_seres!="1" && opcion_seres!="2" && opcion_seres!="3") {
        cout << "Error en la opcion" << endl;
        cout << "Ingrese una opcion: ";
        cin>>opcion_seres;
      }
      cout << endl;
      string raza, nombre;
      int edad;
      bool ho, ha, hr;
      if (opcion_seres=="1") {//marina
        string fecha;
        string rango;
        cout << "AGREGANDO SERES DE MARINA" << endl << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese la raza: ";
        getline(cin,raza);
        cout << "Ingrese la edad: ";
        cin>>edad;
        cin.ignore(256,'\n');
        cout << "Ingrese el nombre: ";
        getline(cin,nombre);
        cout << "Menu de haki_observacion" << endl << endl;
        ho = seleccionBool();
        cout << endl << "Menu de haki_armadura" << endl << endl;
        ha = seleccionBool();
        cout << "Menu de haki_rey" << endl << endl;
        hr = seleccionBool();
        cout << endl << "Menu de haki_rey" << endl << endl;
        hr = seleccionBool();
        cout << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese la fecha: ";
        getline(cin,fecha);
        rango = seleccionRango();
        int posicion = posicionFrutas(frutas);
        marina* m = new marina(raza,edad,nombre,ho,ha,hr,fecha,rango);
        m->setFruta(frutas[posicion]);
        frutas.erase(frutas.begin()+posicion);
        personajes.push_back(m);
        escribir(m);
        cout << "Se ha agregado una ser de la marina " << endl ;
      }//fin de marina
      else if (opcion_seres=="2") {//piratas
        string oceano, tripulacion, funcion;
        cout << "AGREGANDO PIRATAS" << endl << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese la raza: ";
        getline(cin,raza);
        cout << "Ingrese la edad: ";
        cin>>edad;
        cin.ignore(256,'\n');
        cout << "Ingrese el nombre: ";
        getline(cin,nombre);
        cout << "Menu de haki_observacion" << endl << endl;
        ho = seleccionBool();
        cout << endl << "Menu de haki_armadura" << endl << endl;
        ha = seleccionBool();
        cout << "Menu de haki_rey" << endl << endl;
        hr = seleccionBool();
        cout << endl << "Menu de haki_rey" << endl << endl;
        hr = seleccionBool();
        cout << endl;
        oceano = seleccionOceano();
        cin.ignore(256,'\n');
        cout << "Ingrese la tripulacion: ";
        getline(cin, tripulacion);
        cout << "Ingrese la funcion: ";
        getline(cin,funcion);
        int posicion = posicionFrutas(frutas);
        piratas* p = new piratas(raza,edad,nombre,ho,ha,hr,oceano,tripulacion,funcion);
        p->setFruta(frutas[posicion]);
        frutas.erase(frutas.begin()+posicion);
        personajes.push_back(p);
        escribir(p);
        cout << "Se ha agregado un pirata" << endl;
      }//fin de pirata
      else if (opcion_seres=="3") {//revolucionarios
        string fecha;
        cout << "AGREGANDO REVOLUCIONARIOS" << endl << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese la raza: ";
        getline(cin,raza);
        cout << "Ingrese la edad: ";
        cin>>edad;
        cin.ignore(256,'\n');
        cout << "Ingrese el nombre: ";
        getline(cin,nombre);
        cout << "Menu de haki_observacion" << endl << endl;
        ho = seleccionBool();
        cout << endl << "Menu de haki_armadura" << endl << endl;
        ha = seleccionBool();
        cout << "Menu de haki_rey" << endl << endl;
        hr = seleccionBool();
        cout << endl << "Menu de haki_rey" << endl << endl;
        hr = seleccionBool();
        cout << endl;
        cin.ignore(256,'\n');
        cout << "Ingrese la fecha: ";
        getline(cin,fecha);
        int posicion = posicionFrutas(frutas);
        revolucionarios* r = new revolucionarios(raza,edad,nombre,ho,ha,hr,fecha);
        r->setFruta(frutas[posicion]);
        frutas.erase(frutas.begin()+posicion);
        personajes.push_back(r);
        escribir(r);
      }//fin de revolucionarios
    }//fin de agregar seres
    cout << endl;
    cout << "Desea continuar[s/n]: ";
    cin>>respuesta;
  }
  for(int i=0; i<personajes.size();i++){
    delete personajes[i];
  }
  personajes.clear();
  for(int i=0; i < frutas.size(); i++){
    delete frutas[i];
  }
  frutas.clear();
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

string seleccionRango()
{
  string opcion;
  while (true){
    cout << "MENU DE RANGO" << endl << endl;
    cout << "1. cadete" << endl;
    cout << "2. teniente" << endl;
    cout << "3. vice-almirante" << endl;
    cout << "4. almirante" << endl;
    cout << "5. almirante de flota" << endl;
    cout << "Ingrese una opcion: ";
    cin>>opcion;
    if (opcion=="1") {
      return "cadete";
    }else if (opcion=="2") {
      return "teniente";
    }else if (opcion=="3") {
      return "vice-almirante";
    }else if (opcion=="4") {
      return "almirante";
    }else if (opcion=="5") {
      return "almirante de flota";
    }
  }
}

string seleccionOceano()
{
  string opcion;
  while (true) {
    cout << "MENU DE OCEANO" << endl << endl;
    cout << "1. east" << endl;
    cout << "2. west" << endl;
    cout << "3. south" << endl;
    cout << "4. north blue" << endl;
    cout << "5. grand line" << endl;
    cout << "6. new world" << endl;
    cout << "Ingrese una opcion: ";
    cin>>opcion;
    if (opcion=="1") {
      return "east";
    }else if (opcion=="2") {
      return "west";
    }else if (opcion=="3") {
      return "south";
    }else if (opcion=="4") {
      return "north blue";
    }else if (opcion=="5") {
      return "grand line";
    }else if (opcion=="6") {
      return "new world";
    }
  }
}

string seleccionTipo()
{
  string opcion;
  while (true) {
    cout << "MENU DE TIPO DE ZOAN" << endl << endl;
    cout << "1. normal" << endl;
    cout << "2. prehistorica" << endl;
    cout << "3. legendaria" << endl;
    cout << "Ingrese una opcion: ";
    cin>>opcion;
    if (opcion=="1") {
      return "normal";
    }else if (opcion=="2") {
      return "prehistorica";
    }else if (opcion=="3") {
      return "legendaria";
    }
  }
}

bool seleccionBool()
{
  string opcion;
  bool estado=true;
  bool estado2 = false;
  while (true) {
    cout << "1. verdadero" << endl;
    cout << "2. falso" << endl;;
    cout << "Ingrese una opcion: ";
    cin>>opcion;
    if (opcion=="1") {
      return estado;
    }else if (opcion=="2") {
      return estado2;
    }
  }
}

int posicionFrutas(vector<fruta_diablo*> frutas)
{
  int posicion;
  cout << endl;
  cout << "No.\t" << "Nombre\t" << "Fruta\t" << endl << endl;
  for(int i=0; i < frutas.size(); i++){
    cout << i << "\t" << frutas[i]->getNombre() << "\t" << typeid(*frutas.at(0)).name() << endl;
  }
  cout << endl;
  cout << "Ingrese una posicion: ";
  cin>>posicion;
  while (posicion<0 || posicion>frutas.size()-1){
    cout << "Error en la posicion" << endl;
    cout << "Ingrese una posicion: ";
    cin>>posicion;
  }
  return posicion;
}

void escribir(seres* s) {
  ofstream salida;
  stringstream stm;
  string fichero;
  //nombre del fichero
  stm << s->getNombre() << ".log";
  fichero = stm.str();
  salida.open(fichero.c_str());
  salida << "Raza: " << s->getRaza() << endl;
  salida << "Edad: " << s->getEdad() << endl;
  salida << "Nombre: " << s->getNombre() << endl;
  salida << endl << "FRUTA:" << endl;
  salida << "   nombre: " << s->getFruta()->getNombre() << endl;
  //frutas
  /*if (s->getFruta()->getCasteo()=="paramecia") {
    salida << "   descripcion: " << s->getFruta()->getDescripcion() << endl;
  }else if (s->getFruta()->getCasteo()=="zoan") {
    salida << "   tipo: " << s->getFruta()->getTipo() << endl;
    salida << "   animal: " << s->getFruta()->getAnimal() << endl;
  }else if (s->getFruta()->getCasteo()=="logia") {
    salida << "elemento: " << s->getFruta()->getElemento() << endl;
  }*/
  //seres
  /*if (typeid(*s)==typeid(marina)) {
    salida << "Fecha: " s->getFecha() << endl;
    salida << "Rango: " s->getRango() << endl;
  }else if (typeid(*s)==typeid(piratas)) {
    salida << "Oceano" << s->getOceano() << endl;
    salida << "tripulacion: " << s->getTripulacion() << endl;
    salida << "tripulacion: " << s->getFuncion() << endl;
  }else if (typeid(*s)==typeid(revolucionarios)) {
    salida << "fecha" << s->getFecha() << endl;
  }*/
  if (s->getHaki_observacion()==true) {
    salida << "haki_observacion: " << "true" << endl;
  }else {
    salida << "haki_observacion: " << "false" << endl;;
  }
  if (s->getHaki_armadura()==true) {
    salida << "haki_armadura: " << "true" << endl;
  }else {
    salida << "haki_armadura: " << "false" << endl;
  }
  if (s->getHaki_rey()==true) {
    salida << "haki_rey: " << "true" << endl;
  }else {
    salida << "haki_rey: " << "false" << endl;
  }
  salida.close();
}
