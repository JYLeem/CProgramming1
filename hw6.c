#include <stdio.h>

int main(){
    int arr1[5], i;

    printf("Please input five integers: ");
    scanf("%d %d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]); 

    printf("Odd numbers: ");
    for (i = 0; i < 5; i++){
        if (arr1[i] % 2 != 0){
            printf("%d ", arr1[i]);
        } 
    }

    printf("\nEven numbers: ");
    for (i = 0; i < 5; i++){
        if (arr1[i] % 2 == 0){
            printf("%d ", arr1[i]);
        } 
    }

    return 0;
}