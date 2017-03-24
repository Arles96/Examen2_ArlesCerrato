#include "seres.h"

#ifndef  REVOLUCIONARIOS_H_
#define REVOLUCIONARIOS_H_

class revolucionarios : public seres
{
private:
  string fecha;

public:
  //constructores
  revolucionarios();
  revolucionarios(string, int, string, bool, bool, bool, string);

  //getter
  string getFecha();
};

#endif
