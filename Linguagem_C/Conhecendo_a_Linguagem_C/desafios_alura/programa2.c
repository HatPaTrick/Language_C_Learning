
#include <stdio.h>

int main (){
    int numero;
    
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);
    for ( int i = 0; i <= 10; i++ ){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}