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
#include "stdlib.h"

//private declarations
int analyse(int automatoState, char character);
char * recoverWord(TArquivo *arquivo, int initialPositionWord);

void process(TArquivo *arquivo) {
	int i;
	for (i = 0; i < arquivo->tam_file; i++) {
		int currentAutomatoState = ERR;
		char character;
		//word = recoverWord(arquivo,i);
		currentAutomatoState = analyse(currentAutomatoState, character);
		//if currentAutomatoState is in a acceptation state write string readed and its result following exercise definition
	}
}

int analyse(int currentAutomatoState, char character) {
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
