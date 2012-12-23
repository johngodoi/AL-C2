/*
 ============================================================================
 Name        : ArquivoTypes.c
 Author      : John Godoi, Vitor Lima
 Created on  : 23/12/2012
 Version     :
 Copyright   : Creative Commons - By
 Description : Utilitários para as estruturas de armazenamento do arquivo
 ============================================================================
*/

int verifyEmptyChars(char c) {
	if (c == ' ' || c == '\n' || c=='\r')
		return 1;
	return 0;
}
