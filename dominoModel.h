
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct Peca{

	int num1;	// NÃºmero de um lado da peÃ§a
	int num2;	// NÃºmero do outro lado da peÃ§a

} tipo_Peca[28];

int gerarPecas(tipo_Peca *Ppeca);
