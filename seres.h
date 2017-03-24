#include <string>
#include <iostream>
#include <ofstream>
#include <ifstream>
#include "fruta_diablo.h"


#ifndef  SERES_H_
#define SERES_H_

using namespace std;

class seres
{
private:
  //TODO hacer una funcion en el main de raza de los seres
  string raza;
  int edad;
  string nombre;
  fruta_diablo* fruta;
  bool haki_observacion;
  bool haki_armadura;
  bool haki_rey;
public:
  //constructores
  seres();
  seres(string, int, string, fruta_diablo*, bool, bool,bool);

  //getter
  string getRaza();
  int getEdad();
  string getNombre();
  fruta_diablo* getFruta();
  bool getHaki_observacion();
  bool getHaki_armadura();
  bool getHaki_rey();

  //setter
  void setFruta(fruta_diablo*);

  //funcion de admisnitracion
  virtual leer(ifstream&);
  virtual escribir(ofstream&);

}:

#endif
