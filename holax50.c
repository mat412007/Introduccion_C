#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int contador = 1;
    int cantidad = atoi(argv[1]);
    while(contador <= cantidad){
        printf("%d Hola mundo\n", contador);
        contador++;
    }
    return 0;
}