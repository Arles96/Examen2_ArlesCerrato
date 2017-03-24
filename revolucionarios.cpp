#include "revolucionarios.h"

//constructores

revolucionarios::revolucionarios(){}

revolucionarios::revolucionarios(string raza1, int edad1, string nombre1, bool ho,
bool ha, bool hr, string fecha) : seres(raza1, edad1, nombre1, fruta1, ho, ha, hr)
{
  this->fecha = fecha;
}

//getter

string revolucionarios::getFecha()
{
  return fecha;
}
