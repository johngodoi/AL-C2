/*
 * Automato.h
 *
 *  Created on: 12/12/2012
 *      Author: john.henrique
 */

#include "DefinicaoAutomato.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef AUTOMATO_H_
#define AUTOMATO_H_

Automato inicializaAutomato(FILE *configuracao);

int analyse(Automato automato, int entry, int currentState);

int isFinalState(Automato automato, int state);


#endif /* AUTOMATO_H_ */
