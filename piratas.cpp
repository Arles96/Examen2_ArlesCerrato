#include "piratas.h"

//constructores

piratas::piratas(){}

piratas::piratas(string raza1, int edad1, string nombre1, bool ho, bool ha, bool hr,
string oceano, string tripulacion, string funcion) : seres(raza1, edad1, nombre1, ho, ha, hr)
{
  this->oceano = oceano;
  this->tripulacion = tripulacion;
  this->funcion = funcion;
}

string piratas::getOceano()
{
  return oceano;
}

string piratas::getTripulacion()
{
  return tripulacion;
}

string piratas::getFuncion()
{
  return funcion;
}
