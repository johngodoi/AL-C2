/*
 * DefinicaoAutomato.h
 *
 *  Created on: 16/01/2013
 *      Author: john
 */

#ifndef DEFINICAOAUTOMATO_H_
#define DEFINICAOAUTOMATO_H_

typedef int** MatrizEstado;

typedef struct {
	MatrizEstado matrizEstado;
	int estadoAtual;
	int quantidadeDeEstados;
	int quantidadeDeSimbolos;
} TipoAutomato;

typedef TipoAutomato* Automato;

#endif /* DEFINICAOAUTOMATO_H_ */
