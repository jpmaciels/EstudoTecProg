#include "pessoa.h"


Pessoa::Pessoa(){
  Inicializa(0, 0, 0);
}

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome){
  Inicializa(diaNa, mesNa, anoNa, nome = "");
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char* nome){
  diaP = diaNa;
  mesP = mesNa;
  anoP = anoNa;
  strcpy(nomeP, nome);
  idadeP = -1;
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT){
  idadeP = anoAT - anoP;
  if(mesP > mesAT)
    idadeP = idadeP - 1;
  else
    if(mesP == mesAT)
      if(diaP > diaAT)
        idadeP = idadeP - 1;
}

void Pessoa::Print_Idade(){
   cout << nomeP << " teria " << idadeP << " anos de idade." << endl;
}

int Pessoa::getIdade(){
  return (idadeP);
}