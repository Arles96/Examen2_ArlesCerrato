#include "fruta_diablo.h"

#ifndef PARAMECIA_H_
#define PARAMECIA_H_

class paramecia : public fruta_diablo
{
private:
  string descripcion;

public:
  //constructores
  paramecia();
  paramecia(string, string);

  //getter
  string getDescripcion();
};

#endif
