/*
 * TinySyntaticTreeDefinition.h
 *
 *  Created on: 18/01/2013
 *      Author: john
 */

#ifndef TINYSYNTATICTREEDEFINITION_H_
#define TINYSYNTATICTREEDEFINITION_H_

typedef enum {StmtK, ExpK} NodeKind;
typedef enum {IfK, RepeatK, AssignK, ReadK, WriteK} StmtKind;
typedef enum {OpK, ConstK ,IdK} ExpKind;

/* ExpType é utilizado para verificação de tipos */
typedef enum {Void, Integer, Boolean} ExpType;

#define MAXCHILDREN 3

typedef struct treeNode{
	struct treeNode *child[MAXCHILDREN];
	struct treeNode *sibling;
	int lineno;
	NodeKind nodeKind;
	union { StmtKind stmt; ExpKind exp;} kind;
	union { //TokenType op; //TokenType not defined yet
			int val; char * name; } attr;
	ExpType type;
}TreeNode;

#endif /* TINYSYNTATICTREEDEFINITION_H_ */
