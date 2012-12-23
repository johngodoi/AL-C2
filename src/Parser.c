/*
 * Parser.c
 *
 *  Created on: 22/12/2012
 *      Author: john
 */

#include "Parser.h"

int analyse(TArquivo *arquivo, int analyser, int word);

void process(TArquivo *arquivo){
	int i;
	for(i=0;i<arquivo->tam_positions;i++){
		int result = ERR;
		int analyser = PR;
		while(result==ERR&&analyser<=ID){
			result=analyse(arquivo,analyser, i);
			analyser++;
		}
	}
}

int analyse(TArquivo *arquivo, int analyser, int word){
	switch(analyser){
	case PR:
		return analysePR(arquivo,word);
	default:
		return ERR;
	}
}
