#include "paramecia.h"

//constructores

paramecia::paramecia(){}

paramecia::paramecia(string nombre1, string descripcion) : fruta_diablo(nombre1)
{
  this->descripcion = descripcion;
}

string paramecia::getDescripcion()
{
  return descripcion;
}
