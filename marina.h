#include "seres.h"
#include <ctime>
#include <sstream>

#ifndef  MARINA_H_
#define MARINA_H_

class marina : public seres
{
private:
  string fecha;
  //TODO hacer una funcion en el main para el rango de esta clase
  string rango;

public:
  //constructores
  marina();
  marina(string, int, string, bool, bool, bool, string, string);

  //getter
  string getFecha();
  string getRango();

};

#endif
