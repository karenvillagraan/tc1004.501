#include <stdio.h>

int main(int argc,char **argv){
    for(int i = 1; i < argc; i++){
    printf("Hola mundo %s\n",argv[1]);
    }
    return 0;
}