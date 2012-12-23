#include <stdio.h>
#include <stdlib.h>
#ifndef FILEH
#define FILEH


typedef struct {
	char* buffer_original;
	char* buffer_convertido;
	int* buffer_positions;
	int tam_file;
	int tam_positions;
}TArquivo;

TArquivo* carrega_arquivo(FILE *entrada);
#endif

