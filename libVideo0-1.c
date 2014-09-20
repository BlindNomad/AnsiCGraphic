

#include "libVideo0-1.h"




#define FONT_BLACK "\033[30m"
#define FONT_RED "\033[31m"
#define FONT_GREEN "\033[32m"
#define FONT_ORANGE "\033[33m"
#define FONT_BLUE "\033[34m"
#define FONT_MAGENTA "\033[35m"
#define FONT_CYAN "\033[36"
#define FONT_WHITE "\033[37m"

#define BACKGROUND_BLACK "\033[40m"
#define BACKGROUND_RED "\033[41m"
#define BACKGROUND_GREEN "\033[42m"
#define BACKGROUND_ORANGE "\033[43m"
#define BACKGROUND_BLUE "\033[44m"
#define BACKGROUND_MAGENTA "\033[45m"
#define BACKGROUND_CYAN "\033[46m"
#define BACKGROUND_WHITE "\033[47m"

#define CLEAR_SCREEN "\033[2J"

void vRectangle(int x, int y, int width, int height) {
	int l, c;



	for (l = 1; l < height - 1; l++) {
		printf("\033[%d;%dH|", y + l, x);
		printf("\033[%d;%dH|", y + l, x + width - 1);
	}

	for (c = 0; c < width; c++) {
		printf("\033[%d;%dH-", y, x + c);
		printf("\033[%d;%dH-", y + height - 1, x + c);
	}

}

int vReadInt(int x, int y) {

	printf("\033[%d;%dH", y, x);
	int opcao;

	scanf("%d", &opcao);
	return opcao;
}

void vPrint(int x, int y, char *message) {
	printf("\033[%d;%dH%s", y, x, message);
}

char *vReadString(int x, int y) {
	printf("\033[%d;%dH", y, x);
	char text[255];

	scanf("%s", text);
	return text;
}

char *vReadWithBox(int x, int y, int width, char *originalColor) {
	int i;

	printf("%s%s", BACKGROUND_WHITE, FONT_BLACK);

	for (i = 0; i < width; i++) {
		printf("\033[%d;%dH ", y, x + i);
	}

	printf("\033[%d;%dH", y, x);
	char text[width];

	scanf("%s", text);

	printf("%s", originalColor);
	return text;
}

void vBackgroundBox(int x, int y, int width, int height) {

	int i, i2;

	
	for (i2 = 0; i2 < height; i2++) {
		for (i = 0; i < width; i++) {
			printf("\033[%d;%dH ", y + i2, x + i);
		}
	}

}

void vTextBoxInLine(int x, int y, int width, char *originalColor) {
	int i;

	printf("%s%s", BACKGROUND_WHITE, FONT_BLACK);

	for (i = 0; i < width; i++) {
		printf("\033[%d;%dH ", y, x + i);
	}

	printf("\033[%d;%dH", y, x);

	printf("%s", originalColor);
}

void vSetColor(char *backgroundColor, char *fontColor) {
	printf("%s%s", backgroundColor, fontColor);
}

int vCustomMenu(int line, char *itens[], int nItens, char *backgroundColor, char *fontColor) {
	int largura = 0;
	int i;

	for (i = 0; i < nItens; i++) {
		if (largura < strlen(itens[i])) {
			largura = strlen(itens[i]);
		}
	}

	int xInicial = ((78 / 2) - (largura / 2) - 1);

	vSetColor(BACKGROUND_BLACK, BACKGROUND_BLACK);
	
	vBackgroundBox(xInicial + 1, line + 1, largura + 5, nItens + 3); 
	
	vSetColor(backgroundColor, fontColor);
	
	vBackgroundBox(xInicial, line, largura + 5, nItens + 3);

	vRectangle(xInicial, line, largura + 5, nItens + 2);


	for (i = 0; i < nItens; i++) {
		vPrint(xInicial + 2, i + 6, itens[i]);

	}
	
	char corOriginal[17];
	sprintf(corOriginal, "%s%s", backgroundColor, fontColor);
	
	vPrint(xInicial, i + 7, "Digite a opcao: ");
	int opcao;

	scanf("%d", &opcao);
	return opcao;
}

void vCustomTitle(char *title, int width, char *backgroundColor, char *fontColor){
	
	int xInicial;
	
	xInicial = 40 - (width / 2);
	
	vSetColor(backgroundColor, fontColor);
	vBackgroundBox(xInicial, 2, width, 3);
	vRectangle(xInicial, 2, width, 3);
	xInicial = 40 - (strlen(title) / 2);
	vPrint(xInicial, 3, title);
}