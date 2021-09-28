#pragma once
#include "stdafx.h"

class Departamento{
  private:
    char nomeDep[100];

  public:
    Departamento();
    ~Departamento();
    void setNome(char* nomeDepartamento);
    char* getNome();
};