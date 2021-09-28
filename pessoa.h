#pragma once
#include "stdafx.h"
#include "universidade.h"

class Pessoa{
  private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP [30];
    Universidade* universidadeP;
    Departamento* departamentoP;

  public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome="");
    Pessoa();
    ~Pessoa();
    
    void Inicializa(int diaNa, int mesNa, int anoNa, const char* nome="");

    void Calc_Idade(int diaAT, int mesAT, int anoAT);
    void Print_Idade();
    int getIdade();

    void setUniversidade(Universidade* pU);
    void showUniversidade();
    
    void setDepartamento(Departamento* depP);
    void showDepartamento();
};