/******************************************************************************
Exercicio Aula 22/03/2023

*******************************************************************************/

#include <stdio.h>

int main()
{
    float matriz [4][4];
    int i, j;
    float impar,par;
    impar = 0;
    par = 0;
    int count = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Digite um numero qualquer: \n");
            scanf("%f", &matriz[i][j]);
        }
    }
   for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if(j % 2 == 0){
               par = par + matriz[i][j];
                count = count + 1;
            }else{
                impar = impar + matriz[i][j];
            }
        }
    }
    float media = par/count;
    printf("\nA media dos valores das colunas pares é %f", media);
    printf("\nA soma dos valores das colunas impares é %f", impar);
    return 0;
}
