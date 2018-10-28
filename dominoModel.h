
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Struct para armazenar as pecas do jogo
typedef struct Peca{

	int num1;	// Numero de um lado da peca
	int num2;	// Numero do outro lado da peca

} tipo_Peca[28];

//Funcoes do Model
int gerarPecas(tipo_Peca *Ppeca);
void embaralharPecas();		//A ser implementada
void distribuirPecas();		//A ser implementada
