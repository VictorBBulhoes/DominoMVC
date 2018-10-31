/*Integrantes:
Breno Goes do Amaral        RA00212782
Gabrielle Ramos da Silva    RA00207256
Victor Barbosa Bulhoes      RA00207194
*/

#include "dominoModel.h"
#include "dominoController.h"


void gerarPecas(tipo_Peca Peca){

	int i, j;
	int id = 0;
	int k = 0;

	for(i = 0; i < 7; i++){
		for(j = k; j < 7; j++){

			Ppeca[id].num1 = i;
			Ppeca[id].num2 = j;
			//Ppeca->ID = id;

			id++;
			k++;
		}
		k = i + 1;
	}
}

int embaralharPecas(int pecas[28]) // pecas[28] se refere ao ID das peças. Usado sempre que peças serão mostradas na tela
{
	int i;
	int aux;
	int randomico;

	srand (time(NULL));

	for(i = 0; i < 28; i++){

		pecas[i] = i;

	}

	for(i = 0; i < 28; i++){
		aux = pecas[i];
		randomico = rand() % 27;
		pecas[i] = pecas[randomico];
		pecas[randomico] = aux;
	}
	return (pecas[28]);
}

void distribuirPecas(int pecas[28]){
	int i;
	int pecasJogador[20];
	int pecasComp[20];

	for(i=0; i<7 ; i++){              //distribui as 7 primeiras pe�as para o jogador
		pecasJogador[i] = pecas[i];
	}

	for(i=7; i<14 ; i++){             //distribui as 7 seguintes pe�as para o computador

		pecasComp[i] = pecas[i];
	}

}

void desembaralharPecas(int pecas[28]) // pecas[28] se refere ao ID das peças
{
	int i;
	
	for(i = 0; i < 28; i++){
		pecas[i] = i;
	}
	
}