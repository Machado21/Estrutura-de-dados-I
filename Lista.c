/*
 * Lista.c
 *
 *  Created on: 26 de dez de 2016
 *      Author: MACHADO-AXE
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

//Funções para as Palavras
lPalavras* criaListPalavras()
{
	return NULL;
}
lPalavras* inserePalavras(lPalavras* pp, char* palavra)
{
	lPalavras* novoP;
	novoP = (lPalavras*)malloc(sizeof(lPalavras*));
	strcpy(palavra, novoP->palavras);
	novoP->proxPalavra = pp;
	pp=novoP;
	return novoP;
}
void imprime(lPalavras* pp)
{
	lPalavras* pri;
	for(pri = pp; pri != NULL; pri = pri->proxPalavra){
		printf("%s\n", pri->palavras);
	}

}
lPalavras* buscaPalavras(lPalavras* pp, char* palavra)
{
	lPalavras* aux;
	for(aux = pp; aux != NULL; aux = aux->proxPalavra){
		if(strcmp(palavra, pp->palavras)){
			return aux;
		}
	}
	return NULL;
}

//Funções para Quantidades
lQt* ciraQt(lQt* pq, lPalavras* pp, char* palavra)
{
	pq->proxPalavra = buscaPalavras(pp, palavra);
	return NULL;
}
lQt* inseri_Quant_Lin(lQt* pq, lPalavras* pp, int linha)
{
	lQt* novoQ;
	novoQ = (lQt*)malloc(sizeof(lQt*));
	novoQ->numLinhas = linha;
	novoQ->proxQuanti = pq;
	pq=novoQ;
	pq->proxPalavra = pp;
	return novoQ;
}

//Funções de funcionamento
void soma_quant(lQt* pq, lPalavras* pp)
{
	//Corrigir isso aqui
	if(pq->proxPalavra->palavras == pp->palavras){
		pq->quantVezes++;
	}
}
/*void lerArquivo (char* spp[] )
{
	//char url[] = "texto.txt";
	FILE* arq;
	arq = fopen("texto.txt", "r");
	if(arq == NULL){
		printf("!!! Erro, nao foi possivel abrir o arquivo !!!\n");
	}else{

		while((*spp[1]=fgetc(arq)) != EOF){
			putchar(*spp[1]);
		}

	}
	fclose(arq);
}
*/

