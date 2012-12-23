/*
 * Analyser.h
 * Arquivo com as funções que fazem a análise dos Tokens
 *  Created on: 23/12/2012
 *      Author: john
 */

#include "TokenTypes.h"
#include "ArquivoTypes.h"
#include "string.h"

#ifndef ANALYSER_H_
#define ANALYSER_H_

int analyseAT(char *word);

int analyseMENOR(char *word);

int analyseMAIOR(char *word);

int analyseMEIG(char *word);

int analyseMAIG(char *word);

int analyseIG(char *word);

int analyseSOM(char *word);

int analyseSUB(char *word);

int analyseMUL(char *word);

int analyseDIV(char *word);

int analyseAP(char *word);

int analyseFP(char *word);

int analyseNUM(char *word);

int analyseID(char *word);

int analysePR(char *word);

#endif /* ANALYSER_H_ */
