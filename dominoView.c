
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
        printf(" Entre com uma das opções: ");
        scanf("%d", &Op);
        if (Op < 1 || Op > 4){
            Opvalido = false;
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
        }
        setbuf(stdin,NULL);
    }while (!modovalido);
    return modo;
}

void regrasJogo()
{
	printf("\n\t\t\t Regras do Jogo\n");
	printf("----------------------------------------------------------------\n\n");
	printf(" Cada jogador deve iniciar o jogo com 7 peças.\n");
	printf(" O jogo jogador que inicia é aquele que possui a peça 6:6.\n Caso não tenha, inicia aquele com o dobre mais alto.\n");
	printf(" O jogo ocorre em sentido anti-horário.\n");
	printf(" Os jogadores devem colocar peças que tenham os mesmos números\ndas peças que se encontram na ponta do jogo.\n");
}
