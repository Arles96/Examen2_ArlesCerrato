#include "seres.h"

#ifndef PIRATAS_H_
#define PIRATAS_H_

class piratas : public seres
{
private:
  //TODO Hacer la funcion de seleccion de oceano en el main
  string oceano;
  string tripulacion;
  string funcion;

public:
  //constructores
  piratas();
  piratas(string,int,string,bool,bool,bool,string,string,string);
  //getter
  string getOceano();
  string getTripulacion();
  string getFuncion();
};

#endif
