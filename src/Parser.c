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
#include "TokenTypes.h"
#include "stdlib.h"
#include "stdio.h"

//private declarations
int callAutomatoAnalysis(Automato automato, int automatoState, char character);
char * recoverWord(FILE *arquivo, int initialPositionWord, int lastPositionWord);

void process(Automato automato, TArquivo *context, FILE *entrada, FILE *saida) {
	int actualChar;
	int lastCharAfterRecognizedLexem=0;
	FILE *auxiliarPointer = entrada;
	for (actualChar = 0; actualChar < context->tam_file; actualChar++) {
		int currentAutomatoState = 0;
		char character=fgetc(entrada);
		currentAutomatoState = callAutomatoAnalysis(automato, currentAutomatoState, character);
		if(currentAutomatoState == isFinalState(automato,currentAutomatoState)){
			char *word = recoverWord(auxiliarPointer,lastCharAfterRecognizedLexem,actualChar);
			auxiliarPointer=entrada;
			currentAutomatoState=0;
			lastCharAfterRecognizedLexem=actualChar+1;
			//recoverWord from char after last char on last lexema recognized
			//currentState is initial again
			//write string readed and its result following exercise definition
		}
	}
	rewind(entrada);
}

int callAutomatoAnalysis(Automato automato, int currentAutomatoState, char character) {
	//convert to a EntryType
	//analyse for reserved word
	//call automato analysis with currentState and character
	return ERR;
}

char * recoverWord(FILE *arquivo, int initialPositionWord, int lastPositionWord) {
	int i;
	int j = 0;
	char c;
	int wordSize = lastPositionWord - initialPositionWord + 1;
	char *word = (char*) malloc(sizeof(char) * wordSize);
	word[wordSize - 1] = '\0';
	for (i = initialPositionWord; i < lastPositionWord; i++) {
		c=fgetc(arquivo);
		if (verifyEmptyChars(c) != 1)
			word[j] = c;
		else
			word[j] = '\0';
		j++;
	}
	return word;
}
