typedef enum {
	Digito,
	Letra,
	DoisPontos,
	Igual,
	PontoEVirgula,
	Soma,
	Subtracao,
	Multiplicacao,
	Divisao,
	AbreParenteses,
	FechaParenteses,
	Menor,
	AbreChaves,
	FechaChaves,
	Espaco,
	PalavraReservada
} entryType;

int translateCharToEntryType(char c) {
	if (c >= 48 && c <= 57)
		return Digito;
	if ((c >= 65 && c <= 90)/*letras maiusculas*/ || (c >= 97 && c <= 122)/*letras minusculas*/)
		return Letra;
	switch (c) {
	case ':':
		return DoisPontos;
	case '=':
		return Igual;
	case ';':
		return PontoEVirgula;
	case '+':
		return Soma;
	case '-':
		return Subtracao;
	case '*':
		return Multiplicacao;
	case '\\':
		return Divisao;
	case '(':
		return AbreParenteses;
	case ')':
		return FechaParenteses;
	case '<':
		return Menor;
	case '{':
		return AbreChaves;
	case '}':
		return FechaChaves;
	case ' ':
	case '\n':
		return Espaco;
	}
}
