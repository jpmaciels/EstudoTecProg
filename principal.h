#pragma once
#include "stdafx.h"
#include "pessoa.h"

class Principal{
  private:
    int diaAtual;
    int mesAtual;
    int anoAtual;
    Pessoa Einstein;
    Pessoa Newton;
    Pessoa JP;
  
  public:
    Principal();
    ~Principal();
    void Executa();
};