/*Integrantes:
Breno Goes do Amaral        RA00212782
Gabrielle Ramos da Silva    RA00207256
Victor Barbosa Bulhoes      RA00207194
*/

#include "dominoView.h"
#include "dominoModel.h"
#include "dominoController.h"

void iniciarController(){
    bool fim = false;
    int acao = 0;

    do{
        acao = mostrarMenuDomino();
        fim = menuAcao(acao);
    }while(!fim);
}



bool menuAcao(int acao){

    bool fim = false;
    int modo = 0;

	switch(acao){
        case 1:
            regrasJogo();
            getchar();
            break;

        case 2:
            modo = modoJogo();
            if (modo == 1){
                /*Criar switch case com escolha para caso Carregado ou para caso Virgem)*/
                jogoSingleplayerVirgem();
            }
            else if (modo == 2){
                /*Criar switch case com escolha para caso Carregado ou para caso Virgem)*/
                jogoMultiplayerVirgem(); // A ser implementada
            }
            break;

		case 3:

            break;

		case 4:
			fim = true;
            break;
    }
    return fim;
}



