#include <stdio.h>
#include <string.h>

#define STANDARD_SIZE 100

void MY_strcpy(char *to, char from[]);

int main(){
    // recreating another c library function
    // this time, it's "strcpy"
    
    // creating arrays
    char idk[] = "Lasciate ogne speranza, voi ch'intrate";
    char idktoo[STANDARD_SIZE];
    char idkEither[STANDARD_SIZE]; 
    
    // using my function
    MY_strcpy(idktoo, idk);
    printf("string copied using MY_strcpy was: %s\n", idktoo);
    
    // using strcpy from c library
    strcpy(idkEither, idk);
    printf("string copied using strcpy was...: %s\n", idkEither);
    
}

void MY_strcpy(char *to, char from[]){
    
    // just to not use a if statemant at the end of the for loop
    int i;
    
    for(i = 0; from[i] != '\0'; i++){
        to[i] = from[i];
        
    }
    
    to[i] = '\0';
    //i was studing about string in c when i found out something 
    //in c all string ends with '\0' because of that i put it

}
