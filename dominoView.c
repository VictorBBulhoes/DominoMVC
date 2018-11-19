/*Integrantes:
Breno Goes do Amaral        RA00212782
Gabrielle Ramos da Silva    RA00207256
Victor Barbosa Bulhoes      RA00207194
*/

#include "dominoView.h"
#include "dominoModel.h"

int mostrarMenuPrincipal()
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
        printf(" Entre com uma das opcoes: ");
        scanf("%d", &Op);
        if (Op < 1 || Op > 4)
        {
            limparTelaHibrido();
            printf("\n*******************OPCAO INVALIDA!*******************\n");
            printf("Pressione Enter para continuar...");
            setbuf(stdin,NULL);
            getchar();
            limparTelaHibrido();
            Opvalido = false;
        }
        else
        {
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
    do
    {
        printf("\n\t\t\t Modo de Jogo\n");
        printf("****************************************************************\n\n");
        printf(" 1 - Singleplayer\n");
        printf(" 2 - Multiplayer\n");
        printf(" Entre com um dos modos: ");
        scanf("%d", &modo);
        if (modo < 1 || modo > 2)
        {
            limparTelaHibrido();
            printf("\n*******************OPCAO INVALIDA!*******************\n");
            printf("Pressione Enter para continuar...");
            setbuf(stdin,NULL);
            getchar();
            limparTelaHibrido();
            modovalido = false;

        }
        else
        {
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
	printf(" Cada jogador deve iniciar o jogo com 7 pecas.\n");
	printf(" O jogo jogador que possuir a peca 6:6 faz a primeira jogada.\n Caso nenhum jogador possua a peca 6:6, inicia aquele com o dobre(1:1, 2:2, 3:3, 4:4, 5:5) mais alto.\n");
	printf(" O jogo ocorre em sentido anti-horario.\n");
	printf(" Os jogadores devem colocar pecas que tenham os mesmos numeros\n das pecas que se encontram nas pontas do jogo.\n");
    printf("\nAperte a tecla ENTER para retornar ao menu...");
}

int menuJogada(int acaoJogo)
{
	printf("1) Jogar Peca   2) Comprar Peca     3) Salvar   4) Menu Principal\n");
	printf(">");
	scanf("%d", &acaoJogo);
	return acaoJogo;

}

void mostrarPecas(tipo_Peca pecas[28])
{
	int i, j, k = 0, o = 0;

	printf("Pecas do jogo: \n");
	for(i = 0; i < 7; i++)
	{
		printf("\n");
		for(j = k; j < 7; j++)
		{
			printf("\t|%d|%d|", pecas[o].num1, pecas[o].num2);
            o++;
		}
		k = k + 1;

	}
}

void mostrarMesa()
{

}

void mostrarPecasJogador()
{

}
