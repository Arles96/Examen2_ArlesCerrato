#include "seres.h"
#include <ctime>
#include <sstream>

#ifndef  MARINA_H_
#define MARINA_H_

class marina : public seres
{
private:
  string fecha;
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
