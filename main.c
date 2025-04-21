#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <header.h>

int main(){
    
    char input = (char*)malloc(14 * sizeof(char));
    int valid = 0;

    printf("Welcome to the game, please press one of the presenting numbers to start the game:");
    
if(logged_in==0){ //checks log status

//logged off
printf("\n1.Play\n 2.Create Account \n3.Login \n 4.Exit.");

    do{
         scanf("%s", input);
     int valid = 0;

     if(strcmp(input,"Play")){
        printf("If you play without being signed in your score and games wont be saved,\nstill wish to continue?(Yes or No)");
        scanf("%s", input);
        if(strcmp(input,"Yes")){
         void play();
         break;
        }else if(strcmp(input,"No")){
         //empty

        }else{printf("Your input was invalid,please try again.");
            break;}

     }else if(strcmp(input,"Create Account")){
        void Create_Account();
      break;

     }else if(strcmp(input,"Login")){
      void Login();
      break;

     }else if(strcmp(input,"Exit")){
      printf("Exiting...");
      break;
      return 0;

     }else{
     printf("Your input was invalid,please try again.");
     break;
     }

    }while(valid!=1);

//logged in
printf("\n1.Play\n 2.Log Out\n 3.Exit.");

do{
    scanf("%s", input);
int valid = 0;

if(strcmp(input,"Play")){
 void play();
 break;

}else if(strcmp(input,"Log Out")){
   void Create_Account();
 break;

}else if(strcmp(input,"Exit")){
 printf("Exiting...");
 break;
 return 0;

}else{
printf("Your input was invalid,please try again.");
break;
}

}while(valid!=1);

}