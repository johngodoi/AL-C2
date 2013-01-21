/*
 ============================================================================
 Name        : AL-C2.c
 Author      : John Godoi, Vitor Lima
 Version     :
 Copyright   : Creative Commons - By
 Description : Lexical Analyser in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#include "Parser.h"

int main(int argc, char **argv) {

	FILE *entrada;
	FILE *saida;
	TArquivo *context;

	if ((entrada = fopen("resources/Entrada.txt", "r+")) != NULL) {
		context = preProcess(entrada);

		process(context,entrada);

		//if ((saida = fopen("resources/Saida.txt", "w")) != NULL) {
			//escreve_arquivo_resultado(context,saida);
			//fclose(saida);
		//}else{
			//printf("Falha ao escrever resultado");
		//}
		fclose(entrada);
	}else{
		printf("Falha ao abrir o arquivo");
	}
	return EXIT_SUCCESS;
}
