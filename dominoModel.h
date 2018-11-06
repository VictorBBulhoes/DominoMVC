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

tipo_Peca pecas[28];        // Criacao do struct
tipo_Peca *Ppeca[28];      //PONTEIRO TIPO STRUCT PARA AS PECAS (INUTIL POR ENQUANTO)
int *PID[28];   // PONTEIRO TIPO INTEIRO PARA O ID

//Funcoes do Model
void gerarPecas(tipo_Peca pecas[28]);
void embaralharPecas(int *PID[28]);
void distribuirPecas(tipo_Peca pecas[28], int *PID[28]);
void desembaralharPecas(int *PID[28]);
void jogoSingleplayer();        // "main" do jogo singleplayer
void jogoMultiplayer();         // "main" do jogo multiplayer

#endif
