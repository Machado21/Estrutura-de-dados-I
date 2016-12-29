/*
 * Lista.h
 *
 *  Created on: 22 de dez de 2016
 *      Author: MACHADO-AXE
 */

#ifndef LISTA_H_
#define LISTA_H_

#endif /* LISTA_H_ */

typedef struct lPalavras {
	char palavras[21];
	struct lPalavras* proxPalavra;
} lPalavras;

typedef struct lQt {
	int numLinhas;
	int quantVezes;
	struct lQt* proxQuanti;
	lPalavras* proxPalavra;
} lQt;


//Funções para palavras
lPalavras* criaListPalavras();
lPalavras* inserePalavras( lPalavras* pp, char* palavra);
void imprime(lPalavras* pp);
lPalavras* buscaPalavras(lPalavras* pp, char* palavra);

//Funções para quantidades
lQt* crisQt();
lQt* inseri_Quant_Lin(lQt* pq, lPalavras* pp, int linha);

//Funções de funcionamento
void soma_quant(lQt* pq, lPalavras* pp);
//void lerArquivo (char* spp[]);
