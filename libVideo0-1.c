#include "libVideo0-1.h"

void vDesenhaRetangulo(int x, int y, int largura, int altura){
	int l, c;
	
	
	
	for (l = 1; l < altura -1; l++){
		printf("\033[%d;%dH|", y+l, x);
		printf("\033[%d;%dH|", y+l, x+largura-1);
	}
	
	for (c = 0; c < largura; c++){
		printf("\033[%d;%dH-", y, x + c);
	}
	
	for (c = 0; c < largura; c++){
		printf("\033[%d;%dH-", y+altura -1, x + c);
	}
}

int vLerInteiro(int x, int y){
	
	printf("\033[%d;%dH", y, x);
	int opcao;
	
	scanf("%d", &opcao);
	return opcao;
}

void vPrint(int x, int y, char *mensagem){
	printf("\033[%d;%dH%s", y, x, mensagem);
}

char *vLerString(int x, int y){
	printf("\033[%d;%dH", y, x);
	char text[255];
	
	scanf("%s", text);
	return text;
}