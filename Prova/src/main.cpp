#include <iostream>
#include <string>
#include "Pais.hpp"

int main(){

  Pais p;

  float DimensaoPais;
  string NomePais, NomeCapital;
  string FronteiraPais[5];

  cout << "Informe o nome do País: ";
  getline(cin, NomePais);
  p.setNomePais(NomePais);

  cout << "Informe a Capital do País: ";
  getline(cin, NomeCapital);
  p.setNomeCapital(NomeCapital);

  cout << "Informe a Dimensão do País: (em Km2)";
  cin >> DimensaoPais;
  p.setDimensaoPais(DimensaoPais);

  cout << "Informe o Nome do País Fronteiriço: ";
  cin >> FronteiraPais[0];
  cout << "Informe o Nome do País Fronteiriço: ";
  cin >> FronteiraPais[1];
  cout << "Informe o Nome do País Fronteiriço: ";
  cin >> FronteiraPais[2];
  cout << "Informe o Nome do País Fronteiriço: ";
  cin >> FronteiraPais[3];
  cout << "Informe o Nome do País Fronteiriço: ";
  cin >> FronteiraPais[4];

  p.setFronteiraPais(FronteiraPais);
  p.imprimirPais();

return 0;
}
