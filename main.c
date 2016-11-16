#include <stdio.h>
#include <stdlib.h>
#include <locale.>
#include "func.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m,n,i,j,k;
    int aux=1;
    int *oferta,*demanda;
    int **custos;
    printf("Bem-vindo ao seu seu programa de otimização de um processo baseado no algoritmo de transporte com transbordo\n");
    printf("Digite o número de origens que seu processo possuirá: ");
    scanf("%d",&n);
    oferta =(int *)malloc(n * sizeof(int));
    printf("Agora precisamos de saber  as ofertas que cada uma das origens.\n")
    for(i=1 ; i <=n ; i++){
        printf("Digite a oferta da %d origem: ",i);
        scanf("%d",oferta[i]);
    }
    printf("Digite o número de destinos que seu processo possuírá: ");
    scanf("%d",&m);
    demanda = (int *)malloc(n*sizeof(int));
    for(i=1; i<=n; i++){
        printf("Digite a demanda do %d destino: ",i);
        scanf("%d",demanda[i]);
    }
    printf("Digite o número de transbordos do seu processo: ");
    scanf("%d",&k);
    printf("Agora precisaremos dos custos de transporte");
    *custos =(int **)malloc(n * sizeof(int *))
    for(i=1 ; i <= n + k; i++){
        for(j=1; j <= m + k; j++){
            printf("Digite o custo do transporte de %d para %d",i,j);
            scanf("%d",custos[i][j]);

        }
    }
}