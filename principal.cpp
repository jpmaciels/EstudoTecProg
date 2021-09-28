#include "principal.h"

Principal::Principal(){
  Einstein.Inicializa(14, 3, 1879, "Einstein");
  Newton.Inicializa(4, 1, 1643, "Newton");
  JP.Inicializa(28, 6, 2002, "JP");

  // Registro do nome da Universidade
  Princeton.setNome("Princeton");
  Cambridge.setNome("Cambridge");
  UTFPR.setNome("UTFPR");

  // Registro do nome do departamento
  DAINF.setNome("DAINF");

  // Agregação do Departamento a Universidade
  UTFPR.setDepartamento(&DAINF);

  // Associação da Universidade a Pessoa
  Einstein.setUniversidade(&Princeton);
  Newton.setUniversidade(&Cambridge);
  JP.setUniversidade(&UTFPR);

  JP.setDepartamento(&DAINF);

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

  Einstein.showUniversidade();
  Newton.showUniversidade();
  JP.showUniversidade();

  JP.showDepartamento();
}