function Main()

    SET DATE BRIT
    SET CENT ON
    
    oPessoa := Pessoa():New( "Erick", "Kamizato", "Gemeos", "1,70", "68kg" )
    oPessoa:Nascimento := CTOD( "17/06/2000" )
    
    ? "Nome: ", oPessoa:Nome
    ? "Sobrenome:", oPessoa:SobreNome
    ? "Signo: ", oPessoa:Signo
    ? "Altura: ", oPessoa:Altura
    ? "Peso: ", oPessoa:Peso
    ? "Data de nascimento: ", oPessoa:NascimenTO
    ? oPessoa:Idade(), "aninhos de vida"
    
    RETURN