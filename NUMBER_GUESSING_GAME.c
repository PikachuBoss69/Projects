/*
We will write a program that generates a random number and asks the player to guess 
it. If the player’s guess is higher than the actual number, the program displays “Lower 
number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
number please”. 
When the user guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number. 
Hint: Use loop & use a random number generator. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(){
    int n;
    printf("Enter the no. : ");
    scanf("%d",&n);
    return n;
}

int main(){
    srand(time(NULL));    
    int i = rand()%100 +1;
    int no;
    int attempts =0;
    do{
        no=game();
        attempts ++;
            if (no>i){
        printf("Your no. is greator then the winning no. : \nPlease lower your no. ");

        }
        else if(no<i){
            printf("Your no. is lower than the winning no.: \nPlease lower the no. ");
        }
        else{
            printf("Your no. matched the winning no. :\n");
            printf("Your attempts are : %d",attempts);
        }

    }while(no != i);


    return 0;
}
