#include <iostream>
#include "Pais.hpp"

using namespace std;

  string NomePais, NomeCapital, FronteiraPais[];
  float DimensaoPais;
//Settters

void Pais::setNomePais(string NomePais){
  this -> NomePais = NomePais; }
void Pais::setNomeCapital(string NomeCapital){
  this -> NomeCapital = NomeCapital; }
void Pais::setDimensaoPais(float DimensaoPais) {
  this -> DimensaoPais = DimensaoPais; }
void Pais::setFronteiraPais(string FronteiraPais[]){
  for (int i=0; i<5; i++){
    this -> FronteiraPais[i] = FronteiraPais[i]; }}

//Getters

string Pais::getNomePais() {
  return Pais; }
string Pais::getNomeCapital(){
  return NomeCapital; }
float Pais::getDimensaoPais(){
  return DimensaoPais; }

void VerificarSePaisEIgual(Pais x);

  if (NomePais == NomePais){
    cout << "País igual..." << NomePais << endl;
  }


void VerificarFronteiras();

  if (FronteiraPais == FronteiraPais){
    cout << "País não pode fazer fronteira com ele mesmo!"<< endl;
    return -1;
  }
