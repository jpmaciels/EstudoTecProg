#pragma once
#include "stdafx.h"
#include "pessoa.h"
#include "universidade.h"
#include "departamento.h"

class Principal{
  private:
    int diaAtual;
    int mesAtual;
    int anoAtual;

    Universidade Princeton;
    Universidade Cambridge;
    Universidade UTFPR;

    Departamento DAINF;
    
    Pessoa Einstein;
    Pessoa Newton;
    Pessoa JP;
  
  public:
    Principal();
    ~Principal();
    void Executa();
};