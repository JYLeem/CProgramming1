#include <stdio.h>

int main(void){
    int n, i;
    printf("정수 입력: ");
    scanf("%d", &n);
    
    for (i = 2; i < n; i++){
        if (n % i == 0){
            printf("It is not a prime number!");
            break;
        }
        else
            printf("It is a prime number!");
            break;
        
    }
    return 0;
    
}
 