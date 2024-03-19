#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

/* Escreva um programa que mostre os números pares múltiplos de 3,
positivos até o número 1000*/

int i = 0;
    for(i=1; i<=1000; i++){
        if(i%2==0 && i%3==0){
            printf("\n%d", i);
        }
    }

/*Faça um programa que leia 10 números inteiros e calcule e mostre ao
final a soma e a média.*/

int num = 0, soma = 0, i = 0;
float media = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &num);
        soma = soma + num;
    }
    media = soma /10;
    printf("A média entre os numeros e: %.2f", media);
    printf("\nA soma entre os numeros e: %d", soma);

/*Escreva um programa que calcule a área de 4 cômodos de uma casa. O
programa deverá ler a largura e comprimento de cada cômodo, calcular e
mostrar a área de cada um.
*/

float area1, area2, area3, area4, areatotal, largura1, largura2, largura3, largura4, altura1, altura2, altura3, altura4;

    printf("Digite a largura do  primeiro comodo: ");
    scanf("%f", &largura1);
    printf("Digite a altura do primeiro comodo: ");
    scanf("%f",&altura1);
    area1 = largura1*altura1;

    printf("\nDigite a largura do segundo comodo: ");
    scanf("%f", &largura2);
    printf("Digite a altura do segundo comodo: ");
    scanf("%f",&altura2);
    area2 = largura2*altura2;

    printf("\nDigite a largura do terceiro comodo: ");
    scanf("%f", &largura3);
    printf("Digite a altura do terceiro comodo: ");
    scanf("%f",&altura3);
    area3 = largura3*altura3;

    printf("\nDigite a largura do quarto comodo: ");
    scanf("%f", &largura4);
    printf("Digite a altura do quarto comodo: ");
    scanf("%f",&altura4);
    area4 = largura1*altura4;
    
    printf("\nA area do primeiro comodo e: %.2f", area1);
    printf("\nA area do segundo comodo e: %.2f", area2);
    printf("\nA area do terceiro comodo e: %.2f", area3);
    printf("\nA area do quarto comodo e: %.2f", area4);
areatotal = area1+area2+area3+area4;
printf("\n\nA area total e: %.2f", areatotal);

/*Faça um programa que receba o valor da variável raio e calcule o
perímetro e a área:
Use função para obter os valores do perímetro e área. Ao final mostrar os
valores calculados.
Utilize π (pi) = 3.14*/

#define PI 3.14;
float perimetro = 0, area = 0, raio = 0;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
        perimetro = 2 * PI * raio;
        area = PI * pow(raio, 2);

    return 0;
}