/*Integrantes:
Breno Goes do Amaral        RA00212782
Gabrielle Ramos da Silva    RA00207256
Victor Barbosa Bulhoes      RA00207194
*/

#include "dominoView.h"
#include "dominoModel.h"

int mostrarMenuDomino()
{
    bool Opvalido = true;
    int Op = 0;

    do
    {
        printf("\n\t\t\t Menu do Jogo\n");
        printf("****************************************************************\n\n");
        printf(" 1 - Regras do jogo\n");
        printf(" 2 - Iniciar jogo\n");
        printf(" 3 - Carregar jogo\n");
        printf(" 4 - Sair do jogo\n");
        printf("\n");
        printf(" Entre com uma das opÃ§Ãµes: ");
        scanf("%d", &Op);
        if (Op < 1 || Op > 4){
            printf("\n*******************OPCAO INVALIDA!*******************\n");
            Opvalido = false;
        }
        else{
            Opvalido = true;
        }
        setbuf(stdin,NULL);

    }while(!Opvalido);
    return Op;
}

int modoJogo()
{
    bool modovalido = true;
    int modo = 0;
    do{
        printf("\n\t\t\t Modo de Jogo\n");
        printf("****************************************************************\n\n");
        printf(" 1 - Singleplayer\n");
        printf(" 2 - Multiplayer\n");
        printf(" Entre com um dos modos: ");
        scanf("%d", &modo);
        if (modo < 1 || modo > 2){
            modovalido = false;
            printf("\n*******************OPCAO INVALIDA!*******************\n");
        }
        else{
            modovalido = true;
        }
        setbuf(stdin,NULL);
    }while (!modovalido);
    return modo;
}

void regrasJogo()
{
	printf("\n\t\t\t Regras do Jogo\n");
	printf("----------------------------------------------------------------\n\n");
	printf(" Cada jogador deve iniciar o jogo com 7 peÃ§as.\n");
	printf(" O jogo jogador que inicia Ã© aquele que possui a peÃ§a 6:6.\n Caso nÃ£o tenha, inicia aquele com o dobre mais alto.\n");
	printf(" O jogo ocorre em sentido anti-horÃ¡rio.\n");
	printf(" Os jogadores devem colocar peÃ§as que tenham os mesmos nÃºmeros\n das peÃ§as que se encontram nas pontas do jogo.\n");
    printf("\nAperte a tecla ENTER para retornar ao menu...");
}

void mostrarPecasJogador(tipo_Peca Peca, int pecasJogador, int qtdPecas)
{

	int i;

	printf("\n");

	for(i = 0; i < qtdPecas; i++){ // Display das peças da mesa

		printf("|%d|%d|\t", Peca.num1, Peca.num2);

	}

	printf("\n");

}

int modoJogoSingle()
{
	int modoSingle = 0;
	bool modoValido = true;

	do{
		printf("\n\t\t\t Modo Singleplayer");
		printf("\n**************************************************************\n\n");
		printf(" 1 - Jogo Novo\n");
		printf(" 2 - Carregar Jogo\n");
		printf("Entre com uma das opções: ");
		scanf("%d", &modoSingle);
		if (modoSingle < 1 || modoSingle > 2){
			modoValido = false;
            printf("\n*******************OPÇâO INVALIDA!*******************\n");
        }
        else{
            modoValido = true;
        }
        setbuf(stdin,NULL);

	}while (!modoValido);

	return modoSingle;
}

int modoJogoMulti()
{
	int modoMulti = 0;
	bool modoValido = true;

	do{
		printf("\n\t\t\t Modo Multiplayer");
		printf("\n**************************************************************\n\n");
		printf(" 1 - Jogo Novo\n");
		printf(" 2 - Carregar Jogo\n");
		printf("Entre com uma das opções: ");
		scanf("%d", &modoMulti);
		if (modoMulti < 1 || modoMulti > 2){
			modoValido = false;
            printf("\n*******************OPÇâO INVALIDA!*******************\n");
        }
        else{
            modoValido = true;
        }
        setbuf(stdin,NULL);

	}while (!modoValido);

	return modoMulti;
}

void menuJogada()
{

	printf("1) Jogar Peca		2) Comprar Peca 	3) Salvar e Sair	4) Sair sem Salvar\n");
	printf(">");

}

void mostrarPecas(tipo_Peca pecas[28])
{
	int i, j, k;
	k = 0;

	for(i = 0; i < 28; i++){

		for(j = k; j < 7; j++){

			printf("\t|%d|%d|", pecas[i].num1, pecas[i].num2);

			k++;
		}
		printf("\n");
	}
}
