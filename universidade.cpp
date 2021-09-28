#include "universidade.h"

Universidade::Universidade(char* nomeUniv){
  strcpy(nomeU, nomeUniv);
}

Universidade::~Universidade(){

}

void Universidade::setNome(char* nomeUniv){
  strcpy(nomeU, nomeUniv);
}

char* Universidade::getNome(){
  return nomeU;
}

void Universidade::setDepartamento(Departamento* uD){
  departamento = uD;
}