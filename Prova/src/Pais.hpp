#ifndef __PAIS_HPP
#define __PAIS_HPP
#include <string>

using namespace std;

class Pais {
public:
  string NomePais, NomeCapital, FronteiraPais[5];
  float DimensaoPais;

  void setNomePais(string NomePais);
  string getNomePais();

  void setNomeCapital(string NomeCapital);
  string getNomeCapital();

  void setDimensaoPais(float DimensaoPais);
  float getDimensaoPais();

  void setFronteiraPais(string[]);

    void imprimirPais();
};
#endif
