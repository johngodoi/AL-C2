#include "file.h"
void calcula_quantidade_caracter(TArquivo *arquivo, FILE *entrada);
void carrega_caracteres(TArquivo *arquivo, FILE *entrada);
TArquivo* carrega_arquivo(FILE *entrada){

	TArquivo* arquivo = (TArquivo*)malloc(sizeof(TArquivo));

	if(arquivo != NULL){
		char valor_posicao = '0';
		calcula_quantidade_caracter(arquivo,entrada);	
		arquivo->buffer_original = (char*)malloc(sizeof(char)*arquivo->tam_file);
		rewind(entrada);
		carrega_caracteres(arquivo,entrada);
	}
	rewind(entrada);
}

void calcula_quantidade_caracter(TArquivo *arquivo, FILE *entrada){
		arquivo->tam_file = 0;
		while(!feof(entrada)){
			fgetc(entrada);
			arquivo->tam_file++;
		}
		printf("TamFile: %d\n", arquivo->tam_file);		 
}


void carrega_caracteres(TArquivo *arquivo, FILE *entrada){
		int i=0;
		for(i=0 ; i < arquivo->tam_file ; i++){
			arquivo->buffer_original[i] = fgetc(entrada);
		}arquivo->buffer_original[i]='\0';
		printf("Buffer:%s", arquivo->buffer_original);
}
