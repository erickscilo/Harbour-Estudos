function Main()
    LOCAL Nome
    LOCAL Sobrenome
    LOCAL Signo
    LOCAL Altura
    LOCAL Peso
    LOCAL Nascimento
    

    SET DATE BRIT
    SET CENT ON
    
    ACCEPT "DIGITE SEU NOME: " TO Nome
    ACCEPT "DIGITE SEU SOBRENOME: " TO Sobrenome
    ACCEPT "DIGITE SEU SIGNO: " TO Signo
    INPUT "DIGITE SUA ALTURA: " TO Altura
    INPUT "DIGITE SEU PESO: " TO Peso
    ACCEPT "DIGITE SEU NASCIMENTO: " TO Nascimento

    oPessoa := Pessoa():New( Nome, Sobrenome, Signo, Altura, Peso )
    oPessoa:Nascimento := CTOD( Nascimento )
    
    CLS

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