
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



bool menuAcao(acao){

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
                //Jogo Singleplayer... (Deletar o getchar() depois)
                getchar();
            }
            else if (modo == 2){
                //Jogo Singleplayer... (Deletar o getchar() depois)
                getchar();
            }
            else {
                printf("\nOpcao Invalida... Por favor tente novamente\n");
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
