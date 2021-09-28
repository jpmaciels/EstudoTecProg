#include "departamento.h"

Departamento::Departamento(){
  
}

Departamento::~Departamento(){

}

void Departamento::setNome(char* nomeDepartamento){
  strcpy(nomeDep, nomeDepartamento);
}

char* Departamento::getNome(){
  return nomeDep;
}