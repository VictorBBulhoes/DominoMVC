#ifndef DOMINOVIEW_H_INCLUDED
#define DOMINOVIEW_H_INCLUDED

#include "dominoModel.h"

//Funcoes do View
int mostrarMenuDomino();
int modoJogo();                         //Seleciona o modo de jogo (Singleplayer ou Multiplayer)
void regrasJogo();                      // Imprime as regras do jogo
void mostrarPecasJogador(tipo_Peca Ppeca, int pecasJogador, int qtdPecas);    // PUXAR PECASJOGADOR DA FUNCAO PRINCIPAL
void menuJogada();
void mostrarPecas(tipo_Peca pecas[28]);
void mensagemDeAdeus();                 // Imprime uma breve mensagem de agradecimento

#endif // DOMINOVIEW_H_INCLUDED
