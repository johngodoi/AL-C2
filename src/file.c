/*
 * file.c
 *
 *  Created on: 23/12/2012
 *      Author: john
 */
#include "file.h"

void calcula_quantidade_caracter(TArquivo *arquivo, FILE *entrada);
void carrega_caracteres(TArquivo *arquivo, FILE *entrada);
void carrega_posicoes(TArquivo *arquivo);
void alocaVetores(TArquivo *arquivo);
void translateTokenIDToName(int token, FILE *saida);
char printWord(TArquivo *arquivo, int firstCharWordPosition, FILE *saida);

TArquivo* carrega_arquivo(FILE *entrada) {

	TArquivo* arquivo = (TArquivo*) malloc(sizeof(TArquivo));

	if (arquivo != NULL) {
		calcula_quantidade_caracter(arquivo, entrada);
		alocaVetores(arquivo);
		carrega_caracteres(arquivo, entrada);
		carrega_posicoes(arquivo);
	}
	rewind(entrada);
	return arquivo;
}

void alocaVetores(TArquivo *arquivo){
	arquivo->buffer_original = (char*) malloc(sizeof(char) * arquivo->tam_file);
	arquivo->buffer_convertido = (int*) malloc(sizeof(int) * arquivo->tam_positions);
	arquivo->buffer_positions = (int*) malloc(sizeof(int) * arquivo->tam_positions);
}

void calcula_quantidade_caracter(TArquivo *arquivo, FILE *entrada) {
	char c;
	//viu um caracter vazio indicando o inicio de uma nova palavra
	int emptyCharFlag = 1;
	arquivo->tam_file = 0;
	arquivo->tam_positions = 0;
	//calcula quantidade de caracteres e palavras no arquivo
	while (!feof(entrada)) {
		c = fgetc(entrada);
		int isEmptyChars = verifyEmptyChars(c);
		//as palavras são precedidas de espaços ou quebra de linha
		if(emptyCharFlag == 1 && isEmptyChars != 1) {
			arquivo->tam_positions++;
			emptyCharFlag = 0;
		} else if(isEmptyChars==1){
			emptyCharFlag = 1;
		}

		arquivo->tam_file++;
	}
	//correção de leitura de char estranho ao final do arquivo
	printf("TamFile: %d\n", arquivo->tam_file--);
	printf("QtdPalavras: %d\n", arquivo->tam_positions--);

	rewind(entrada);
}

void carrega_caracteres(TArquivo *arquivo, FILE *entrada) {
	int i = 0;
	for (i = 0; i < arquivo->tam_file; i++) {
		arquivo->buffer_original[i] = fgetc(entrada);
	}
	printf("Buffer:%s", arquivo->buffer_original);

	rewind(entrada);
}

void carrega_posicoes(TArquivo *arquivo) {
	char c;
	//viu um caracter vazio indicando o inicio de uma nova palavra
	int emptyCharFlag = 1;
	int i = 0;
	int j = 0;
	for (i = 0; i < arquivo->tam_file; i++) {
		c = arquivo->buffer_original[i];
		int isEmptyChars = verifyEmptyChars(c);
		//as palavras são precedidas de espaços ou quebra de linha
		if(emptyCharFlag == 1 && isEmptyChars != 1) {
			arquivo->buffer_positions[j]=i;
			emptyCharFlag = 0;
			printf("Posição da palavra: %d\n",arquivo->buffer_positions[j]);
			j++;
		} else if(isEmptyChars==1){
			emptyCharFlag = 1;
		}
	}

	printf("QtdPalavras identificadas: %d\n", j);
}

void escreve_arquivo_resultado(TArquivo *arquivo, FILE *saida){
	int i;
	char c;
	for(i=0;i<arquivo->tam_positions;i++){
		c=printWord(arquivo,i,saida);
		translateTokenIDToName(arquivo->buffer_convertido[i], saida);
		fputc(c,saida);
	}
}

char printWord(TArquivo *arquivo, int firstCharWordPosition, FILE *saida){
	int i=arquivo->buffer_positions[firstCharWordPosition];
	char c=arquivo->buffer_original[i];
	while(verifyEmptyChars(c)!=1){
		fputc(c,saida);
		i++;
		c=arquivo->buffer_original[i];
	}
	return c;
}

void translateTokenIDToName(int token, FILE *saida){
	char *tokenNames[] = {"ERR","AT","MENOR","MAIOR","MEIG","MAIG","IG","SOM","SUB","MUL","DIV","AP","FP","NUM","ID","PR"};
	fprintf(saida," <%s>",tokenNames[token]);
}
