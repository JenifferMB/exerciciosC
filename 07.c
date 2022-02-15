/* Escreva um programa que solicite dois números do 
tipo inteiro distintos ao usuário e que apresente na 
tela o maior deles. Esse programa deve possuir uma 
função para verificar qual é o maior número. */

#include <stdio.h>
#include <stdlib.h>

int verifica(int x, int y);

int main(){
    int x, y;
    printf("Verifica maior numero entre dois numeros: \nDigite o primeiro numero:\n");
    scanf("%d", &x);
    printf("Digite o segundo numero: \n");
    scanf("%d", &y);

    while(x == y){
        printf("Numeros iguais, digite um numero diferente: \n");
        scanf("%d", y);
    }

    printf("O maior numero eh %d", verifica(x,y));
}


int verifica(int x, int y){
    if(x>y)
    return x;
    else
    return y;
}

