/*  Desenvolva um programa que solicite ao usuário 
idade de três pessoas e apresente na tela a maior 
idade. Esse programa deve possuir uma função para 
verificar qual é a maior idade.  */

#include <stdio.h>
#include <stdlib.h>

int idades(int vet[], int n);

int main(){
    int n1,n2,n3;
    int vetorIdades[3];
    size_t nvetor = 0;

    printf("Digite 3 idades: ");
    scanf("%d", &n1);
    vetorIdades[nvetor++] = n1;
    scanf("%d", &n2);
    vetorIdades[nvetor++] = n2;
    scanf("%d", &n3);
    vetorIdades[nvetor++] = n3;

    idades(vetorIdades, 3);

    printf("maior idade: %d", vetorIdades[2]);

}

int idades(int vet[], int n){
 for(int i = 0; i < n - 1; i++) {
      int menor = i;
      for(int j = i + 1; j < n; j++) {
         if (vet[j] < vet[menor]) menor = j;
      }
      int aux = vet[i];
      vet[i] = vet[menor];
      vet[menor] = aux;
   }
}