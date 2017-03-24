#include "seres.h"

//constructores

seres::seres(){}

seres::seres(string raza, int edad, string nombre, fruta_diablo* fruta, bool haki_observacion, bool haki_armadura,
  bool haki_rey)
{
  this->raza = raza;
  this->edad = edad;
  this->nombre = nombre;
  this->fruta = fruta;
  this->haki_observacion = haki_observacion;
  this->haki_armadura = haki_armadura;
  this->haki_rey = haki_rey;
}

//getter

string seres::getRaza()
{
  return raza;
}

int seres::getEdad()
{
  return edad;
}

string seres::getNombre()
{
  return nombre;
}

fruta_diablo* seres::getFruta()
{
  return fruta;
}

bool seres::getHaki_observacion()
{
  return haki_observacion;
}

bool seres::getHaki_armadura()
{
  return haki_armadura;
}

bool seres::getHaki_rey()
{
  return haki_rey;
}
