/*
 ============================================================================
 Name        : Analyser.c
 Author      : John Godoi, Vitor Lima
 Created on  : 23/12/2012
 Version     :
 Copyright   : Creative Commons - By
 Description : Arquivo com funções utilitárias para análise léxica do arquivo
 ============================================================================
*/

#include "Analyser.h"
#include "stdlib.h"
#include <ctype.h>

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
	int result = ERR;
	if(strcmp(word,"==")==0) result = IG;
	return result;
}

int analyseSOM(char *word){
	int result = ERR;
	if(strcmp(word,"+")==0) result = SOM;
	return result;
}

int analyseSUB(char *word){
	int result = ERR;
	if(strcmp(word,"-")==0) result = SUB;
	return result;
}

int analyseMUL(char *word){
	int result = ERR;
	if(strcmp(word,"*")==0) result = MUL;
	return result;
}

int analyseDIV(char *word){
	int result = ERR;
	if(strcmp(word,"/")==0) result = DIV;
	return result;
}

int analyseAP(char *word){
	int result = ERR;
	if(strcmp(word,"(")==0) result = AP;
	return result;
}

int analyseFP(char *word){
	int result = ERR;
	if(strcmp(word,")")==0) result = FP;
	return result;
}

int analyseNUM(char *word){
	int result = NUM;
	
	int i = 0;
	for (i = 0; word[i] != '\0'; i++) {
			if (!isdigit(word[i])) return ERR;
	}
	
	return result;
}

int analyseID(char *word){
	int result = ID;

	int i=0;
	if(isalpha(word[i])){
		for(i = 1 ; word[i] != '\0' ; i++){
			if (! isalnum(word[i])) return ERR;
		}
	}else return ERR;

	return result;
}
