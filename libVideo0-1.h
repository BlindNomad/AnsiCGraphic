/* 
 * File:   libVideo0-1.h
 * Author: Thiago José Silveira
 *
 * Created on 16 de Setembro de 2014, 17:56
 * 
 * Essa lib funciona se baseando no tamanho máximo de tela de 80 colunas,
 * desculpe pelo o Inglês, não sou muito habilidoso com a lingua ainda.
 * 
 * This lib works based on the maximum size of 80-column screen, sorry for the English, I'm not very skilled with the language yet.
 */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>


#ifndef LIBVIDEO0_1_H
#define	LIBVIDEO0_1_H

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

/**
 * Desenha um retangulo com usando o caracter "-" na horizontal e o "|" na vertical
 * Draws a rectangle with using the "-" character in the horizontal and the "|" vertical
 * @param x
 * @param y
 * @param width
 * @param height
 */
void vRectangle(int x, int y, int width, int height);

/**
 * Le um inteiro nas coordenadas x e y
 * Reads entire in x and y coordinates
 * @param x
 * @param y
 * @return 
 */
int vReadInt(int x, int y);

/**
 * Imprime a mensagem na tela na coordenadas x e y
 * Prints the message on the screen at coordinates x and y
 * @param x
 * @param y
 * @param message
 */
void vPrint(int x, int y, char *message);

/**
 * Lê um cadeia de caracteres nas cordenadas x e y
 * Reads a string in the x and y coordinates
 * @param x
 * @param y
 * @return 
 */
char *vReadString(int x, int y);

/**
 * Desenha uma caixa na altura de 1 linha com o fundo branco.
 * Draws a box in the height of 1 line with the white background.
 * @param x
 * @param y
 * @param width
 * @param originalColor
 * @return 
 */
char *vReadWithBox(int x, int y, int width, char *originalColor);

/**
 * Desenha um caixa branca com a altura de 1 linha e lê uma cadeia de caracteres do teclado.
 * Draw a white box with a height of one line and reads string from the keyboard.
 * @param x
 * @param y
 * @param width
 * @param originalColor
 */
void vTextBoxInLine(int x, int y, int width, char *originalColor);

/**
 * Altera a cor do fundo e a cor da letra
 * Changes the background color and the font color
 * @param backgroundColor
 * @param fontColor
 */
void vSetColor(char *backgroundColor, char *fontColor);


/**
 * Cria um menu com sombra e cores
 * Creates a menu with shadow and colors
 * @param line
 * @param itens
 * @param nItens
 * @param backgroundColor
 * @param fontColor
 * @return 
 */
int vCustomMenu(int line, char *itens[], int nItens, char *backgroundColor, char *fontColor);

/**
 * Desenha uma caixa sem borda, é necessário setar uma cor diferente de fundo antes de usar a função.
 * Draws a box borderless, it is necessary to set a different background color before using the function.
 * @param x
 * @param y
 * @param width
 * @param height
 */
void vBackgroundBox(int x, int y, int width, int height);


/**
 * Cria um caixa no topo da tela com o titulo no centro.
 * Creates a box at the top of the screen with the title in the center.
 * @param title
 * @param width
 * @param backgroundColor
 * @param fontColor
 */
void vCustomTitle(char *title, int width, char *backgroundColor, char *fontColor);

#endif	/* LIBVIDEO0_1_H */

