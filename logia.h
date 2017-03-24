#include "fruta_diablo.h"

#ifndef LOGIA_H_
#define LOGIA_H_

using namespace std;

class logia : public fruta_diablo
{
private:
  string elemento;

public:
  //constructores
  logia();
  logia(string, string);

  //getter
  string getElemento();
};

#endif
