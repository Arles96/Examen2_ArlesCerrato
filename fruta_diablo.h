#include <string>
#include <iostream>

#ifndef  FRUTA_DIABLO_H_
#define FRUTA_DIABLO_H_

using namespace std;

class fruta_diablo
{
protected:
  string nombre;
  string casteo;
public:
  //constructores
  fruta_diablo();
  fruta_diablo(string);

  //getter
  string getNombre();
  string getCasteo();

  //setter
  void setCasteo(string);
};


#endif
