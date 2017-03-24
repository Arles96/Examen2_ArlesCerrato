#include "fruta_diablo.h"

//constructores

fruta_diablo::fruta_diablo(){}

fruta_diablo::fruta_diablo(string nombre)
{
  this->nombre = nombre;
}

string fruta_diablo::getNombre()
{
  return nombre;
}
