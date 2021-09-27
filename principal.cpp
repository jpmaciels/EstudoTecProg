#include "principal.h"

Principal::Principal(): Einstein(), Newton(), JP() {
  Einstein.Inicializa(14, 3, 1879, "Einstein");
  Newton.Inicializa(4, 1, 1643, "Newton");
  JP.Inicializa(28, 6, 2002, "JP");

  cout << "Informe dia, mês e ano: ";
  cin >> diaAtual >> mesAtual >> anoAtual;

  Executa();
}

Principal::~Principal(){}

void Principal::Executa(){

  Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
  Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);
  JP.Calc_Idade(diaAtual, mesAtual, anoAtual);

  Einstein.Print_Idade();
  Newton.Print_Idade();
  JP.Print_Idade();
}