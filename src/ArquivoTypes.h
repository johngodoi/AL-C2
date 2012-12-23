/*
 * ArquivoTypes.h
 *
 *  Created on: 23/12/2012
 *      Author: john
 */

#ifndef ARQUIVOTYPES_H_
#define ARQUIVOTYPES_H_

typedef struct {
	char* buffer_original;
	char* buffer_convertido;
	int* buffer_positions;
	int tam_file;
	int tam_positions;
}TArquivo;

#endif /* ARQUIVOTYPES_H_ */
