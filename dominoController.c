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
    int modoSingle = 0;
    int modoMulti = 0;

	switch(acao){
        case 1:
            regrasJogo();
            getchar();
            break;

        case 2:
            modo = modoJogo();
            if (modo == 1){
                modoSingle = modoJogoSingle();
                if (modoSingle ==1){
                	jogoSingleplayerVirgem();
                }
                else if (modoSingle == 2){
                	//jogoSingleplayerCarregado();
                }
            }
            else if (modo == 2){
              	 modoMulti = modoJogoMulti();
                 if (modoMulti == 1){
                     jogoMultiplayerVirgem(); // A ser implementada
                 }
                 else if (modoMulti == 2){
                 //jogoMultiplayerCarregado();
                 }
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
