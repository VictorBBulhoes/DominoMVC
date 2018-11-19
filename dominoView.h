#ifndef DOMINOVIEW_H_INCLUDED
#define DOMINOVIEW_H_INCLUDED

#include "dominoModel.h"

///FUNCOES TIPO VOID
void regrasJogo();                      // Imprime as regras do jogo.
//void mostrarPecasJogador(tipo_Peca Peca, int pecasJogador, int qtdPecas);    /* PUXAR PECASJOGADOR DA FUNCAO PRINCIPAL, funcao desatualizada*/
void menuJogada();                      // Imprime o menu de jogada (Opcoes que o jogador tem durante o jogo).
void mostrarPecas(tipo_Peca pecas[]);   // Mostra todas as pecas do jogo.
void mensagemDeAdeus();                 // Imprime uma breve mensagem de agradecimento.

///FUNCOES TIPO INT
int mostrarMenuDomino();                // Imprime o menu principal.
int modoJogo();                         // Imprime menu de selecao do modo de jogo (Singleplayer ou Multiplayer) e retorna 1 para Singleplayer e 2 para Multiplayer.

#endif // DOMINOVIEW_H_INCLUDED
