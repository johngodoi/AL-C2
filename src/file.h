#include <stdio.h>
#include <stdlib.h>
#ifndef FILEH
#define FILEH


typedef struct {
	char* buffer_original;
	char* buffer_convertido;
	int tam_file;
}TArquivo;

TArquivo* carrega_arquivo(FILE *entrada);
#endif

