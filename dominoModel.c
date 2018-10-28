/*Integrantes:
Breno Goes do Amaral        RA00212782
Gabrielle Ramos da Silva    RA00207256
Victor Barbosa Bulhoes      RA00207194
*/

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
