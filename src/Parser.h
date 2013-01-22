/*
 ============================================================================
 Name        : Parser.h
 Author      : John Godoi, Vitor Lima
 Created on  : 23/12/2012
 Version     :
 Copyright   : Creative Commons - By
 Description : Arquivo com funções e tipo utilitários para identificação das 
               palavras
 ============================================================================
*/

#include "stdio.h"
#include "DefinicaoAutomato.h"
#include "ArquivoTypes.h"

#ifndef PARSER_H_
#define PARSER_H_

void process(Automato automato, TArquivo *context, FILE *entrada, FILE *saida);

#endif /* PARSER_H_ */
