/* Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores. */

#include <stdio.h>

void ordenacaoPorSelecao(int vetor[], int n);

int main(){
    int n1,n2,n3,n4;
    int vetorSoma[4];
    size_t nvetor = 0;
    int soma;

    printf("Digite 4 numeros: ");
    scanf("%d", &n1);
    vetorSoma[nvetor++] = n1;
    scanf("%d", &n2);
    vetorSoma[nvetor++] = n2;
    scanf("%d", &n3);
    vetorSoma[nvetor++] = n3;
    scanf("%d", &n4);
    vetorSoma[nvetor++] = n4;

    ordenacaoPorSelecao(vetorSoma, 4);
    
    soma = vetorSoma[1] + vetorSoma[2] + vetorSoma[3];

    printf("%d", soma);
}

void ordenacaoPorSelecao(int vetor[], int n) {
   for(int i = 0; i < n - 1; i++) {
      int menor = i;
      for(int j = i + 1; j < n; j++) {
         if (vetor[j] < vetor[menor]) menor = j;
      }
      int aux = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = aux;
   }
}