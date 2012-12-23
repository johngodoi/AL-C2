/*
 * Analyser.c
 * Arquivo com funções utilitárias para análise léxica do arquivo
 *  Created on: 23/12/2012
 *      Author: john
 */

#include "Analyser.h"
#include "stdlib.h"

int analysePR(char *word){
	int result = ERR;
	if(strcmp(word,"if")==0 || strcmp(word,"else")==0) result= PR;
	return result;
}

int analyseAT(char *word){
	int result = ERR;
	if(strcmp(word,"=")==0) result = AT;
	return result;
}

int analyseMENOR(char *word){
	int result = ERR;
	if(strcmp(word,"<")==0) result = MENOR;
	return result;
}

int analyseMAIOR(char *word){
	int result = ERR;
	if(strcmp(word,">")==0) result = MAIOR;
	return result;
}

int analyseMEIG(char *word){
	int result = ERR;
	if(strcmp(word,"<=")==0) result = MEIG;
	return result;
}

int analyseMAIG(char *word){
	int result = ERR;
	if(strcmp(word,">=")==0) result = MAIG;
	return result;
}

int analyseIG(char *word){
	return ERR;
}

int analyseSOM(char *word){
	return ERR;
}

int analyseSUB(char *word){
	return ERR;
}

int analyseMUL(char *word){
	return ERR;
}

int analyseDIV(char *word){
	return ERR;
}

int analyseAP(char *word){
	return ERR;
}

int analyseFP(char *word){
	return ERR;
}

int analyseNUM(char *word){
	return ERR;
}

int analyseID(char *word){
	return ERR;
}
