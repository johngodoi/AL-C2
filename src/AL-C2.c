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
	FILE *automatoFile;
	TArquivo *context;
	Automato *automato;

	if ((entrada = fopen("resources/Entrada.txt", "r+")) != NULL) {
		context = preProcess(entrada);

		if((automatoFile = fopen("resources/Automato.txt", "r+")) != NULL){
			automato=inicializaAutomato(automatoFile);

			if ((saida = fopen("resources/Saida.txt", "w+")) != NULL) {
				process(automato,context,entrada,saida);
				fclose(saida);
			}else{
				printf("Falha ao criar arquivo de saida");
			}
		}
		else{
			printf("Falha ao carregar automato");
		}
		fclose(entrada);
	}else{
		printf("Falha ao abrir o arquivo");
	}
	return EXIT_SUCCESS;
}
