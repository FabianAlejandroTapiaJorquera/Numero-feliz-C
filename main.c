#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// funciona solo con números positivos
// cualquier otro caso usar valor absoluto
int contadorDigitos(int numero){
    int contador = 0;
    do{
        contador++;
        numero = numero/10;
    }while(numero > 0);
    return contador;
}

int cuadrado(int numero){
    return numero*numero;
}

int feliz(int numero){
    int i = 0, aux = numero;
    for(i; i<10; i++){
        int digitos = contadorDigitos(aux), sumador = 0;
        while(digitos > 0){
            sumador += cuadrado(aux%10);
            digitos--;
            aux = aux/10;
        }
        printf("La suma acumulada es de %d\n", sumador);
        aux = sumador;
        sumador = 0;
        if(aux == 1){
            printf("%d es un numero feliz", numero);
            return 1;
        }
    }
    printf("%d no es un numero feliz", numero);
    return 0;
}

int main () {
    // printf("%d tiene %d digitos", -1, contadorDigitos(-1));
    feliz(2);
    return 0;
}