#include "fruta_diablo.h"

#ifndef ZOAN_H_
#define ZOAN_H_

class zoan : public fruta_diablo
{
private:
  string tipo;
  string animal;

public:
  //constructores
  zoan();
  zoan(string, string, string);

  //getter
  string getTipo();
  string getAnimal();
};

#endif
