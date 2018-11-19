#ifndef DOMINOVIEW_H_INCLUDED
#define DOMINOVIEW_H_INCLUDED

#include "dominoModel.h"

//FUNCOES TIPO VOID
void regrasJogo();                      /// Imprime as regras do jogo.
void mostrarPecas(tipo_Peca pecas[28]); /// Mostra todas as pecas do jogo.
void mensagemDeAdeus();                 /// Imprime uma breve mensagem de agradecimento.

//FUNCOES TIPO INT
int mostrarMenuPrincipal();             /// Imprime o menu principal.
int modoJogo();                         /// Imprime menu de selecao do modo de jogo (Singleplayer ou Multiplayer) e retorna 1 para Singleplayer e 2 para Multiplayer.
int menuJogada(int acaoJogo);           /// Imprime o menu de jogada (Opcoes que o jogador tem durante o jogo).

#endif // DOMINOVIEW_H_INCLUDED
