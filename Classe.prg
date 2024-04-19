#include "hbclass.ch"

//Classe
CLASS Pessoa

  DATA Nome
  DATA SobreNome
  DATA Signo
  DATA Altura
  DATA Peso
  DATA Nascimento
  DATA Idade

  METHOD New( Nome, SobreNome, Signo, Altura, Peso )
  METHOD Idade()

ENDCLASS

//Recebimento dos dados do principal.prg
METHOD New( Nome, SobreNome, Signo, Altura, Peso )

::Nome := Nome
::SobreNome := SobreNome
::Signo := Signo
::Altura := Altura
::Peso := Peso

RETURN Self

//Calculo da idade 
METHOD Idade()

  Idade := INT(( date() - ::Nascimento ) / 365)

RETURN Idade