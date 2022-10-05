#include <stdio.h>

int main(void){
    int n, i, ans;
    printf("정수 입력: ");
    scanf("%d", &n);
    
    for (i = 2; i < n; i++){
        if (n % i == 0){
            ans = 1;
        }
    }
    
    if (ans == 1){
        printf("It is not a prime number!");
    }
    else{
        printf("It is a prime number!");
    }
    return 0;
    
}
 