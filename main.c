/*
 * main.c
 *
 *  Created on: 26 de dez de 2016
 *      Author: MACHADO-AXE
 */

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
	//int i, j;
	//lPalavras* lista;
	//lista = criaListPalavras();
	char texto;

	FILE* arq;
		arq = fopen("texto.txt", "r");
		if(arq == NULL){
			printf("!!! Erro, nao foi possivel abrir o arquivo !!!\n");
		}else{
			while((texto=fgetc(arq)) != EOF){
				putchar(texto);
			}
		}
		fclose(arq);

		printf("\n\t%c\n",texto);
	//for(i=0;i<4;i++){
		//for(j=0;j<40;j++){

		//}
	//}
	//for(i=0;i<4;i++){

	//}
	//lista = inserePalavras(lista, nome[1]);

	//lista = inserePalavras(lista, nome[0]);
	//lista = inserePalavras(lista, nome[2]);


	//imprime(lista);
	system("pause");
	return 0;
}


