/*
Snake, water, gun or rock, paper, scissors is a game most of us have played during 
school time. (I sometimes play it even now).
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose snake/water or gun.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game(int a){
    srand(time(NULL));

    int random_number = rand() % 3 + 1;
            if (a==random_number){
                    if(a==1 & random_number==1){

                        printf("your move is ROCK and opponents is ROCK\n");
                        printf("          DRAW         ");
    
                    }
                    else if(a==2 & random_number==2){

                        printf("your move is SCISSORS and opponents is SCISSORS\n");
                        printf("           DRAW        ");

                    }
                    else{

                        printf("your move is PAPER and opponents is PAPER\n");
                        printf("           DRAW         ");

                    }
 
                
            }
            else if(a==1 & random_number==3){

                printf("your move is ROCK and opponents is PAPER\n");
                printf("          BETTER LUCK NEXT TIME          ");
    
            }
            else if(a==2 & random_number==1){

                printf("your move is SCISSORS and opponents is ROCK\n");
                printf("          BETTER LUCK NEXT TIME          ");

            }
            else if(a==3 & random_number==2)
            {

                printf("your move is PAPER and opponents is SCISSOR\n");
                printf("          BETTER LUCK NEXT TIME          ");

            }
 
            else if(a==1 & random_number==2){

                printf("your move is ROCK and opponents is SCISSOR\n");
                printf("          YOU WON THE GAME          ");
    
            }
            else if(a==2 & random_number==3){

                printf("your move is SCISSORS and opponents is PAPER\n");
                printf("           YOU WON THE GAME         ");

            }
            else{

                printf("your move is PAPER and opponents is ROCK\n");
                printf("           YOU WON THE GAME         ");

            }


        

}    

int main(){
    int move;
    printf("Enter your move :\nPress 1 for ROCK\nPress 2 for SCISSORS\nPress 3 for PAPER\n ");
    scanf("%d",&move);
    if(move!=1 & move!=2 & move!=3){
        printf("INVALID MOVE ");
    }
    else{
        game(move);
    }
    return 0;
}