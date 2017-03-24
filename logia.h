#include "fruta_diablo.h"

#ifndef LOGIA_H_
#define LOGIA_H_

class logia : public fruta_diablo
{
private:
  string elemento;

public:
  //constructores
  logia();
  logia(string string);

  //getter
  string getElemento();
};

#endif
