#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX =10;
    int guess;
    int guesses;
    int answer;

    //user the currrent time as a seed
    srand(time(0));

    //generates a random no. between min and max 
    answer = (rand() % MAX) + MIN;

   do
   {
    printf("enter ur guess: ");
    scanf("%d", &guess);
    
    if(guess < answer)
    {
        printf("oops too low\n");
    }
    else if(guess > answer)
    {
        printf("oops too high\n");
    }
    else
    {
        printf("yayayay noice\n");
    }
    guesses++;
   }
   while(guess != answer);

   printf("answer: %d\n",answer);
   printf("guesses: %d\n",guesses);

 return 0;


}
