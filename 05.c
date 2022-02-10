/* Escreva um programa em C para o Ministério da
Saúde que o auxilie nas informações sobre a dengue
em Brasília. Esse programa deve receber os dados
sobre o número de casos suspeitos, o número de casos
confirmados e o número de mortes, apresentando a
tela */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int casosSus, casosConf, numeroMort;
    printf("Este programa monitora os casos de dengue em Brasilia, informe os dados: \n");
    printf("Casos suspeitos: \n");
    scanf("%i", &casosSus);
    printf("Casos Confirmados: \n");
    scanf("%i", &casosConf);
    printf("Numero de mortes: \n");
    scanf("%i", &numeroMort);

    printf("============================\n");
    printf("Casos suspeitos: %i \n", casosSus);
    printf("Casos confirmados: %i \n", casosConf);
    printf("Numero de mortos: %i \n", numeroMort);
    printf("============================\n");
}