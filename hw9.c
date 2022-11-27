#include <stdio.h>
#include <string.h>

void converter(const char* str, char *newStr, int length){
    int i;

    for(i = 0; i < length; i++){
        if(str[i] >= 65 && str[i] <= 90){
            newStr[i] = str[i] + 32;
        }
        else if(str[i] >= 97 && str[i] <= 122){
            newStr[i] = str[i] - 32;
        }
        else {
            newStr[i] = str[i];
        }
    }

}


int main(){
    int length = 0;
    char str[50];
    char newStr[50];

    printf("Input> ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str) - 1;
    
    converter(str, newStr, length);
    printf("Output> %s", newStr);


    return 0;
}