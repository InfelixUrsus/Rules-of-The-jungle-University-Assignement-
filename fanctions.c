#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <header.h>
#include <main.c>

struct Card{
    int rank[12]; // Value from 2 to 14 (where 11 = Jack, 12 = Queen, 13 = King, 14 = Ace)
    char suit[3]; // 'H' for Hearts, 'D' for Diamonds, 'C' for Clubs, 'S' for Spades
}
    
struct Player{
    char *id; // Dynamic array representing the player’s name
    Card *deck; // Dynamic array of Card structs representing the player's deck
    int deckSize; // Current number of cards in the player's deck
    int score; // Total score of the games a user has played
}
    
struct GameState{
    Card *main_deck; // Game Deck
    Player player; // Human player
    Player computer; // Computer opponent
}

Card *create_deck(){

Card* deck, hearts, spades, clubs, diamonds;
   
//dyn array creation
      deck = (int*)malloc(4 * sizeof(int));
      hearts = (int*)malloc(12 * sizeof(int));
      spades = (int*)malloc(12 * sizeof(int));
      clubs = (int*)malloc(12 * sizeof(int));   
      diamonds = (int*)malloc(12 * sizeof(int));
   //dyn array check,if there is not memory
    if((deck=malloc(sizeof(Card*)))==NULL) return 0;
    if((spades=malloc(sizeof(Card)))==NULL) return 0;    
	 if((hearts=malloc(sizeof(Card)))==NULL) return 0;
	 if((clubs=malloc(sizeof(Card)))==NULL) return 0;
    if((diamonds=malloc(sizeof(Card)))==NULL) return 0;
   //lesser dyn array filling
     for (i=2; i<=14; i++){
        spades->rank->r=i;
        spades->suit->s="S";
     }
     for (i=2; i<=14; i++){
        hearts->rank->r=i;
        hearts->suit->s="H";
     }
     for (i=2; i<=14; i++){
        clubs->rank->r=i;
        clubs->suit->s="C";
     }
     for (i=2; i<=14; i++){
        diamonds->rank->r=i;
        diamonds->suit->s="D";
     }
   //lesser dyn arrays move into final array
     deck->spades=spades;
     deck->hearts=hearts;
     deck->clubs=clubs;
     deck->diamonds=diamonds;
     
}

Card *create_playerhand(int handsize){
 Card playerhand = (int*)malloc(handsize * sizeof(int));
 if((playerhand=malloc(sizeof(Card)))==NULL) return 0;
 return playerhand;
}

Player *create_player(Card *create_playerhand,int logged_in){

}


void save_game(){
 FILE *SaveFiles;
 SaveFiles = fopen("Rule_of_the_Jungle_SaveFiles"), "a");
 fprintf(fptr, "%s\n%s%s%s%s\n%s\n%s\n%d\n%d\n"name,deck.spades,deck.hearts,deck.clubs,deck.diamonds,player1hand,player2hand,score);
 fclose(fptr);
}

void login_Account(){
	
}

void game(){


}
