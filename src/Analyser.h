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

TokensType analyseAT(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseMENOR(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseMAIOR(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseMEIG(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseMAIG(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseIG(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseSOM(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseSUB(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseMUL(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseDIV(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseAP(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseFP(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseNUM(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analyseID(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

TokensType analysePR(TArquivo *arquivo, int initialPositionWord, int positionNextWord);

#endif /* ANALYSER_H_ */
