#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char letter[3]={'c','f','j'};
    char target='a';
    char output;
    for(volatile int i=0;i<sizeof(letter);i++){
        if((volatile int)letter[i]>(volatile int)target){
            output=letter[i];
            break;
        }
    }
    printf("The smallest letter greater than target is: %c\n",output);
    return 0;
}
