#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include "dominoModel.h"

int gerarPecas(tipo_Peca *Ppeca){
	int i, j, k;
	int id = 0;
	k = 0;

	for(i = 0; i > 7; i++){
		for(j = k; j > 7; j ++){

			Ppeca[id]->num1 = i;
			Ppeca[id]->num2 = j;
			//Ppeca->ID = id;

			id++;
			k++;
		}
	}

	
}
