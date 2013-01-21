/*
 ============================================================================
 Name        : Parser.c
 Author      : John Godoi, Vitor Lima
 Created on  : 23/12/2012
 Version     :
 Copyright   : Creative Commons - By
 Description : Arquivo responsável por traduzir o conteúdo do arquivo para os
 Tokens
 ============================================================================
 */

#include "Parser.h"
#include "DefinicaoAutomato.h"
#include "Automato.h"
#include "stdlib.h"

//private declarations
int analyse(Automato automato, int automatoState, char character);
char * recoverWord(TArquivo *arquivo, int initialPositionWord);

void process(Automato automato, TArquivo *context, FILE *entrada, FILE *saida) {
	int i;
	for (i = 0; i < context->tam_file; i++) {
		int currentAutomatoState = ERR;
		char character=fgetc(entrada);
		currentAutomatoState = analyse(automato, currentAutomatoState, character);
		if(currentAutomatoState == isFinalState(automato,currentAutomatoState)){
			//recoverWord from char after last char on last lexema recognized
			//currentState is initial again
			//write string readed and its result following exercise definition
		}
	}
	rewind(entrada);
}

int analyse(Automato automato, int currentAutomatoState, char character) {
	//convert to a EntryType
	//analyse for reserved word
	//call automato analysis with currentState and character
	return ERR;
}

char * recoverWord(TArquivo *arquivo, int initialPositionWord) {
	int firstChar = arquivo->buffer_positions[initialPositionWord];
	int lastChar;
	if (initialPositionWord < arquivo->tam_positions - 1)
		lastChar = arquivo->buffer_positions[initialPositionWord + 1] - 1;
	else
		lastChar = arquivo->tam_file;
	int i;
	int j = 0;
	int wordSize = lastChar - firstChar + 1;
	char *word = (char*) malloc(sizeof(char) * wordSize);
	word[wordSize - 1] = '\0';
	for (i = firstChar; i < lastChar; i++) {
		if (verifyEmptyChars(arquivo->buffer_original[i]) != 1)
			word[j] = arquivo->buffer_original[i];
		else
			word[j] = '\0';
		j++;
	}
	return word;
}
