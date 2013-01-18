/*
 * Automato.C
 *
 *  Created on: 12/12/2012
 *      Author: john.henrique
 */
#include "Automato.h"

Automato allocate(FILE *configuracao) {
	Automato automato = (Automato) malloc(sizeof(TipoAutomato));
	MatrizEstado matriz;
	int i;

	fscanf(configuracao,"%d", &automato->quantidadeDeEstados);
	fgetc(configuracao);
	fscanf(configuracao,"%d", &automato->quantidadeDeSimbolos);
	fgetc(configuracao);
	matriz = (MatrizEstado) malloc(
			automato->quantidadeDeEstados * sizeof(int*));
	for (i = 0; i < automato->quantidadeDeSimbolos; i++)
		matriz[i] = (int*) malloc(automato->quantidadeDeSimbolos * sizeof(int));
	automato->matrizEstado = matriz;
	automato->estadoAtual = 0;
	return automato;
}

Automato load(Automato automato, FILE *configuracao) {
	int j;
	int i;
	for (j = 0; j < automato->quantidadeDeEstados; j++)
		for (i = 0; i < automato->quantidadeDeSimbolos; i++) {
			fscanf(configuracao,"%d",&automato->matrizEstado[j][i]);
			fgetc(configuracao);
		}
	return automato;
}

Automato inicializaAutomato(FILE *configuracao) {
	Automato automato = allocate(configuracao);
	automato = load(automato, configuracao);

	return automato;
}
