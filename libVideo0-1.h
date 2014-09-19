/* 
 * File:   libVideo0-1.h
 * Author: thiagoj
 *
 * Created on 16 de Setembro de 2014, 17:56
 */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#ifndef LIBVIDEO0_1_H
#define	LIBVIDEO0_1_H

/**
 * Desenha um retangulo, caracter - na horizontal e | na vertical.
 * @param x Inicio do retangulo na coluna estipulada
 * @param y Inicio do retangulo na linha estipulada
 * @param largura largura em colunas
 * @param altura altura em linhas
 */
void vDesenhaRetangulo(int x, int y, int largura, int altura);

/**
 * Pega um int na coluna e linha estipulada
 * @param x Inicio na coluna estipulada
 * @param y Inicio na linha estipulada
 * @return retorna o int pego do teclado
 */
int vLerInteiro(int x, int y);

/**
 * Imprime uma string na linha e coluna estipulada.
 * @param x  Inicio na coluna estipulada
 * @param y Inicio na linha estipulada
 * @param mensagem
 */
void vPrint(int x, int y, char *mensagem);
/**
 * Le uma string na linha e coluna estipulada.
 * @param x Inicio na coluna estipulada
 * @param y Inicio na linha estipulada
 * @return retorna uma string
 */
char *vLerString(int x, int y);


#endif	/* LIBVIDEO0_1_H */

