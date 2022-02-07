/* Desenvolver um algoritmo que leia os coeficientes (a , b e c) de uma equação do segundo grau e calcule suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a classificação das raízes. */

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;

    printf("Digite os valores de a, b e c: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = (pow(b,2) - 4 * a * c);
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    if(delta == 0){
        printf("Raiz unica: \n");
        printf("x1 = %2f", x1);
    }
    else if(delta > 0){
        printf("Raizes distintas: \n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if(delta < 0){
        printf("Raizes imaginarias");
    }
}