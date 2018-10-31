#ifndef DOMINOMODEL_H_INCLUDED
#define DOMINOMODEL_H_INCLUDED


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <ctype.h>
#include <time.h>

//Struct para armazenar as pecas do jogo
typedef struct Peca{

	int num1;	// Numero de um lado da peca
	int num2;	// Numero do outro lado da peca

}tipo_Peca;

tipo_Peca Peca;
tipo_Peca *Ppeca;
//Funcoes do Model
void gerarPecas(tipo_Peca Peca);
int embaralharPecas(int pecas[28]);	//A ser implementada
void distribuirPecas(int pecas[28]);		//A ser implementada
void desembaralharPecas(int pecas[28]);

#endif
