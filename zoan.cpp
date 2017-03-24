#include "zoan.h"

//constructores

zoan::zoan(){}

zoan::zoan(string nombre1, string tipo, string animal) : fruta_diablo(nombre1)
{
    this->tipo = tipo;
    this->animal = animal;
}

//getter

string zoan::getTipo()
{
  return tipo;
}

string zoan::getAnimal()
{
  return animal;
}
