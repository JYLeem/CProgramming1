#include <stdio.h>

 void converter(int userNumber){
    int quotient, remainder, binNum; 
    if (userNumber == 0){
        return;
    }
    else { 
        converter(userNumber / 2);
        printf("%d", userNumber % 2);
    }
 }

int main(void){
    int num, condition;
    while (condition == 1){
        printf("Please enter a number: ");
        scanf("%d", &num);
        if (num < 0){
            printf("Please enter a positive number!\n");
            condition = 1;
        }
        else{
            condition = 0;
        }
    }
    converter(num);
    return 0;

}
