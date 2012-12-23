/*
 ============================================================================
 Name        : Analyser.h
 Author      : John Godoi, Vitor Lima
 Created on  : 23/12/2012
 Version     :
 Copyright   : Creative Commons - By
 Description : Arquivo com funções utilitárias para manipulação de arquivos
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "ArquivoTypes.h"

#ifndef FILEH
#define FILEH

TArquivo* carrega_arquivo(FILE *entrada);
void escreve_arquivo_resultado(TArquivo *arquivo, FILE *saida);
#endif

