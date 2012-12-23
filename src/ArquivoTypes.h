/*
 ============================================================================
 Name        : ArquivoTypes.h
 Author      : John Godoi, Vitor Lima
 Created on  : 23/12/2012
 Version     :
 Copyright   : Creative Commons - By
 Description : Utilitários para as estruturas de armazenamento do arquivo
 ============================================================================
*/

#ifndef ARQUIVOTYPES_H_
#define ARQUIVOTYPES_H_

typedef struct {
	char* buffer_original;
	int* buffer_convertido;
	int* buffer_positions;
	int tam_file;
	int tam_positions;
}TArquivo;

int verifyEmptyChars(char c);

#endif /* ARQUIVOTYPES_H_ */
