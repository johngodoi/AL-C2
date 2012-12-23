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

int main(int argc, char **argv) {

	FILE* entrada;
	if ((entrada = fopen("resources/Entrada.txt", "r+")) != NULL) {
		TArquivo *arquivo = carrega_arquivo(entrada);
	}
	return EXIT_SUCCESS;
}
