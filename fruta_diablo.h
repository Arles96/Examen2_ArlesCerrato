#include <string>
#include <iostream>

#ifndef  FRUTA_DIABLO_H_
#define FRUTA_DIABLO_H_

class fruta_diablo
{
protected:
  string nombre;

public:
  //constructores
  fruta_diablo();
  fruta_diablo(string);

  //getter
  string getNombre();
};


#endif
