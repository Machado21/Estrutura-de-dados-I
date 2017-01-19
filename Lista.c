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
lPalavras* criaListPalavras(lPalavras* ppalavra)
{
	ppalavra->quantidades = NULL;
	return NULL;
}
lPalavras* inserePalavras(lPalavras* p, char* palavra)
{
	lPalavras* novoP;
	novoP = (lPalavras*)malloc(sizeof(lPalavras));
	strcpy(novoP->palavras, palavra);
	novoP->proxPalavra = p;
	//p=novoP;
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
	return NULL;
}
lQt* inseriQuantLin(lQt* pq, lPalavras* ppalavra, int linha)
{
	lQt* novoQ;
	lQt* auxQ;
	lQt* aux2;
	novoQ = (lQt*)malloc(sizeof(lQt));
	novoQ->numLinhas = linha;
	for(auxQ = pq; auxQ != NULL; auxQ = auxQ->proxQuanti){
		aux2 = auxQ;
	}
	novoQ->proxQuanti = NULL;
	aux2->proxQuanti = novoQ;
	pq=novoQ;
	return pq;
}

//Funções de funcionamento
void soma_quant(lQt* pq, lPalavras* pp)
{
	//Corrigir isso aqui
	//if(){
		pq->quantVezes++;
	//}
}
lPalavras* lerArquivo (lPalavras* ppalavra)
{
	int i;
	char palavra[40];
	lPalavras* novo = (lPalavras*)malloc(sizeof(lPalavras));
	lPalavras* aux = ppalavra;
	FILE *arquivo;
	arquivo = fopen("texto.txt", "r");
	if (arquivo == NULL){
		printf("!!!   ERRO   !!!");
	}
	while( !feof(arquivo )){
		while(fgetc(arquivo) != '\n'){
			for(i=0;fgetc(arquivo) != ' ';i++){
				palavra[i] = fgetc(arquivo);
				printf("%c - ", palavra[i]);
			}
			palavra[i-1] = '\0';
			aux = buscaPalavras(ppalavra, palavra);
			if(aux == NULL){
				novo = inserePalavras(ppalavra, palavra);
			}else {
				aux->quantidades->quantVezes++;
			}
		}
	}
	printf("\n%s", ppalavra->palavras);

	fclose(arquivo);
	return novo;
}

