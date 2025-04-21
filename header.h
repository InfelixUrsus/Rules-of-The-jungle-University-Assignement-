#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fanctions.c>
#include <main.c>

struct Card(int rank[12],char suit[3]);
struct Player(char *id,Card *deck,int deckSize,int score);
struct GameState(Card *main_deck,Player player,Player computer);

#endif