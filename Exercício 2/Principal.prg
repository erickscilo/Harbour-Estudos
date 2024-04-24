function Main()
    LOCAL Nome
    LOCAL Sobrenome
    LOCAL Signo
    LOCAL Altura
    LOCAL Peso
    LOCAL Nascimento := date()

    LOCAL GetList := {}

	SET DELIMITERS ON // Exibe os delimitadores
	SET DELIMITERS TO "[]" // Cria delimitadores para os GETS

    SET DATE BRIT
    SET CENT ON

    CLS
    
    ACCEPT "DIGITE SEU NOME: " TO Nome
    ACCEPT "DIGITE SEU SOBRENOME: " TO Sobrenome
    ACCEPT "DIGITE SEU SIGNO: " TO Signo
    ACCEPT "DIGITE SUA ALTURA: " TO Altura
    ACCEPT "DIGITE SEU PESO: " TO Peso
    @ 6,0 SAY "DIGITE SEU NASCIMENTO: " GET Nascimento
    READ
    
    CLS

    oPessoa := Pessoa():New( Nome, Sobrenome, Signo, Altura, Peso )
    oPessoa:Nascimento := Nascimento
    
    ? "--------------------------"
    ? "SEUS DADOS ABAIXO :)"
    ? "--------------------------"
 
    ? "Nome: ", oPessoa:Nome
    ? "Sobrenome:", oPessoa:SobreNome
    ? "Signo: ", oPessoa:Signo
    ? "Altura: ", oPessoa:Altura
    ? "Peso: ", oPessoa:Peso
    ? "Data de nascimento: ", oPessoa:Nascimento
    ? oPessoa:Idade(), "aninhos de vida"
    
    RETURN