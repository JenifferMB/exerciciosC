/* Escreva um programa para informar o valor de
uma corrida de taxi. Para calcular o valor da corrida
é necessário saber a distância percorrida em
quilômetros e qual o tipo da bandeira da corrida, 1
ou 2. Caso a bandeira seja 1, o preço do quilômetro
rodado é de R$ 1,80, se a bandeira for 2 o valor
do quilômetro rodado é de R$ 2,30. Escreva um
programa em linguagem C que solicite a distância
percorrida em quilômetros e qual o tipo da bandeira
da corrida e informe o valor da corrida */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int bandeira;
    float distancia, preco;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);
    printf("Bandeira: \n1- R$1,80 \n2- R$2,30\n");
    scanf("%d", &bandeira);
    
    if(bandeira == 1)
        preco = distancia * 1.80;
    if(bandeira == 2)
        preco = distancia * 2.30;

    printf("R$%.2f", preco);
}