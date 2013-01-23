/*
 * DefinicaoAutomato.h
 *
 *  Created on: 16/01/2013
 *      Author: john
 */

#ifndef DEFINICAOAUTOMATO_H_
#define DEFINICAOAUTOMATO_H_

typedef int** MatrizEstado;
typedef int* VetorEstadosFinais;

typedef struct {
	MatrizEstado matrizEstado;
	MatrizEstado matrizEstadoConsumoChar;
	VetorEstadosFinais estadosFinais;
	int estadoAtual;
	int quantidadeDeEstados;
	int quantidadeDeSimbolos;
} TipoAutomato;

typedef TipoAutomato* Automato;

#endif /* DEFINICAOAUTOMATO_H_ */
