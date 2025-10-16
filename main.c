/******************************************************************************
Ask the user to enter the speed of a car (in km/h).
Then:
60 - Safe driving speed.
61-100 - Be cautious.
100 - low down, your over speeding.
                            
*******************************************************************************/

#include <stdio.h>

int main(){
    printf("Name: Velvien M. Verzosa\n");
    printf("ID No.: 2025304115\n");
    printf("----------------------\n");
  
  int speed;
  
     printf("Enter speed of a car: ");
     scanf("%d", &speed);
     
    if (speed <= 60){
    printf("Result: Safe driving speed.\n");
    }
    else if (speed > 60 && speed <= 100){
    printf("Result: Be cautious.\n");
    }
  else if (speed > 100){
  printf("Result: Slow down, your over speeding.\n ");
  }
else {
printf("invalid input.\n");
}
    return 0;

}
    