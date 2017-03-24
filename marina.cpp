#include "marina.h"

//constructores
marina::marina(){}

marina::marina(string raza1, int edad1, string nombre1, bool ho, bool ha, bool hr,string fecha,
 string rango) : seres(raza1, edad1, nombre1, ho, ha, hr)
{
  this->fecha = fecha;
  this->rango = rango;
}

//getter

string marina::getFecha()
{
  return fecha;
}

string marina::getRango()
{
  return rango;
}
