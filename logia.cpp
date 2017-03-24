#include "logia.h"

//constructores

logia::logia(){}

logia::logia(string nombre1, string elemento) : fruta_diablo(nombre1)
{
  this->elemento = elemento;
}

//getter

string logia::getElemento()
{
  return elemento;
}
