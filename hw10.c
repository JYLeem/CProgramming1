#include <stdio.h>
#include <string.h>

typedef struct city {
    char name[20];
    char country[20];
    char pop[20];
} City;

int main(){
    printf("Input three cities: \n");

    City arr[3];

    for (int i = 0; i < 3; i++){
        printf("Name> "); fgets(arr[i].name, sizeof(arr[i]), stdin);
        arr[i].name[strlen(arr[i].name)-1] = '\0';

        printf("Country> "); fgets(arr[i].country, sizeof(arr[i]), stdin);
        arr[i].country[strlen(arr[i].country)-1] = '\0';

        printf("Population> "); fgets(arr[i].pop, sizeof(arr[i]), stdin);
        arr[i].pop[strlen(arr[i].pop)-1] = '\0';

    }

    printf("Printing the three cities:\n");
    for(int i = 0; i < 3; i++){
        printf("%d. %s in %s with a population of %s people\n", i+1, arr[i].name, arr[i].country, arr[i].pop);
    }

    return 0;
}