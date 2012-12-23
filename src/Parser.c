/*
 * Parser.c
 *
 *  Created on: 22/12/2012
 *      Author: john
 */

#include "Parser.h"

int analyse( int analyser, char *word);
char * recoverWord(TArquivo *arquivo,int initialPositionWord);

void process(TArquivo *arquivo){
	int i;
	for(i=0;i<arquivo->tam_positions;i++){
		int result = ERR;
		int analyser = PR;
		char *word;
		while(result==ERR && analyser<=ID){
			word = recoverWord(arquivo,i);
			result=analyse(analyser, word);
			arquivo->buffer_convertido[i]=result;
			analyser++;
		}
	}
}

int analyse(int analyser, char *word){
	switch(analyser){
	case PR:
		return analysePR(word);
	default:
		return ERR;
	}
}

char * recoverWord(TArquivo *arquivo,int initialPositionWord){
	int firstChar = arquivo->buffer_positions[initialPositionWord];
	int lastChar;
	if (initialPositionWord < arquivo->tam_positions - 1)
		lastChar = arquivo->buffer_positions[initialPositionWord + 1] - 1;
	else
		lastChar = arquivo->tam_file;
	int i;
	int j=0;
	int wordSize = lastChar-firstChar+1;
	char *word=(char*)malloc(sizeof(char)*wordSize);
	word[wordSize-1]='\0';
	for(i=firstChar;i<lastChar;i++){
		word[j]=arquivo->buffer_original[i];
		j++;
	}
	return word;
}
