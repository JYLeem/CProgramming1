#include <stdio.h>
#include <math.h>

void meanValue(int * param){
    int mean, i; 
    float allInt; 
    for (i = 0; i < 5; i++){
        mean += param[i];
    }
    mean /= 5;

    for (i = 0; i < 5; i++){
        allInt += pow(mean - param[i], 2);
    }

    printf("Standard Deviation = %.3f", sqrt(allInt / 5));
}

int main(){
    int i;
    int strArr[5];
    printf("Enter 5 real numbers: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &strArr[i]);
    }
    meanValue(strArr);
    return 0;
}