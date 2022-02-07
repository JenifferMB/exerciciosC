/*Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.*/

#include<stdio.h>

int main(){
    int number;
    
    printf("Digite um numero para verificar se eh divisivel por 5 e por 3: ");
    scanf("%d", &number);

    if(number%5 == 0 && number%3==0){
        printf("Divisivel por 5 e por 3");
    }
    else{
        printf("Nao divisivel por 5 e por 3");
    }
}