/*
 * Analyser.h
 * Arquivo com as funções que fazem a análise dos Tokens
 *  Created on: 23/12/2012
 *      Author: john
 */

#include "TokenTypes.h"
#include "ArquivoTypes.h"

#ifndef ANALYSER_H_
#define ANALYSER_H_

int analyseAT(TArquivo *arquivo, int initialPositionWord);

int analyseMENOR(TArquivo *arquivo, int initialPositionWord);

int analyseMAIOR(TArquivo *arquivo, int initialPositionWord);

int analyseMEIG(TArquivo *arquivo, int initialPositionWord);

int analyseMAIG(TArquivo *arquivo, int initialPositionWord);

int analyseIG(TArquivo *arquivo, int initialPositionWord);

int analyseSOM(TArquivo *arquivo, int initialPositionWord);

int analyseSUB(TArquivo *arquivo, int initialPositionWord);

int analyseMUL(TArquivo *arquivo, int initialPositionWord);

int analyseDIV(TArquivo *arquivo, int initialPositionWord);

int analyseAP(TArquivo *arquivo, int initialPositionWord);

int analyseFP(TArquivo *arquivo, int initialPositionWord);

int analyseNUM(TArquivo *arquivo, int initialPositionWord);

int analyseID(TArquivo *arquivo, int initialPositionWord);

int analysePR(TArquivo *arquivo, int initialPositionWord);

#endif /* ANALYSER_H_ */
