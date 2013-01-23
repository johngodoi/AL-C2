/*
 * Automato.C
 *
 *  Created on: 12/12/2012
 *      Author: john.henrique
 */
#include "Automato.h"
#include "DefinicaoAutomato.h"
#include "TokenTypes.h"

Automato allocate(FILE *configuracao) {
	Automato automato = (Automato) malloc(sizeof(TipoAutomato));
	MatrizEstado matriz;
	MatrizEstado matrizConsumo;
	VetorEstadosFinais vetorEstadosFinais;
	int i;

	fscanf(configuracao,"%d", &automato->quantidadeDeEstados);
	fgetc(configuracao);
	fscanf(configuracao,"%d", &automato->quantidadeDeSimbolos);
	fgetc(configuracao);

	matriz = (MatrizEstado) malloc(
			automato->quantidadeDeSimbolos * sizeof(int*));
	matrizConsumo = (MatrizEstado) malloc(
			automato->quantidadeDeSimbolos * sizeof(int*));
	vetorEstadosFinais = (VetorEstadosFinais) malloc(
			automato->quantidadeDeEstados * sizeof(int));
	for (i = 0; i < automato->quantidadeDeEstados; i++){
		matriz[i] = (int*) malloc(automato->quantidadeDeEstados * sizeof(int));
		matrizConsumo[i] = (int*) malloc(automato->quantidadeDeEstados * sizeof(int));
	}
	automato->matrizEstado = matriz;
	automato->matrizEstadoConsumoChar = matrizConsumo;
	automato->estadosFinais=vetorEstadosFinais;
	automato->estadoAtual = 0;
	return automato;
}

Automato loadMatrizEstado(Automato automato, FILE *configuracao) {
	int j;
	int i;
	for (j = 0; j < automato->quantidadeDeSimbolos; j++){
		int value;
		for (i = 0; i < automato->quantidadeDeEstados; i++) {
			fscanf(configuracao,"%d",&value);
			automato->matrizEstado[j][i]=value;
			fgetc(configuracao);
		}
		fscanf(configuracao,"%d",&value);
		automato->estadosFinais[j]=value;
		fgetc(configuracao);
	}
	return automato;
}

Automato inicializaAutomato(FILE *configuracao) {
	Automato automato = allocate(configuracao);
	automato = loadMatrizEstado(automato, configuracao);
	//automato = load
	return automato;
}

int analyse(Automato automato, int entry, int currentState){
	return ERR;
}

int isFinalState(Automato automato, int state){
	return state;
}
