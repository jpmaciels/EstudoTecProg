#pragma once
#include "stdafx.h"
#include "departamento.h"

class Universidade{
  private:
    char nomeU[30];
    Departamento* departamento; 

  public:
    Universidade(char* nomeUniv = "");
    ~Universidade();
    
    void setNome(char* nomeUniv);
    char* getNome();

    void setDepartamento(Departamento* uD);
};