/*
 * ArquivoTypes.c
 *
 *  Created on: 23/12/2012
 *      Author: john
 */

int verifyEmptyChars(char c) {
	if (c == ' ' || c == '\n' || c=='\r')
		return 1;
	return 0;
}
