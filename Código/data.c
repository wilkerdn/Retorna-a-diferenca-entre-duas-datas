#include"data.h"

void criar_datas(Data *dma){
        printf("Digite o dia:\n");
        scanf("%d",&dma->dia);
        printf("Digite o mes:\n");
        scanf("%d",&dma->mes);
        printf("Digite o ano:\n");
        scanf("%d",&dma->ano);
}
void soma(Data *dma){
    int dif_d=0;
    int dif_m=0;
    int dif_a=0;
    int total=0;
    int dia1=0;
    int mes1=0;
    int ano1=0;
    printf("Digite o dia:\n");
    scanf("%d",&dia1);
    printf("Digite o mes:\n");
    scanf("%d",&mes1);
    printf("Digite o ano:\n");
    scanf("%d",&ano1);
    dif_a = (ano1 - dma->ano)*365;
    dif_m = (mes1 - dma->mes)*30;
    dif_d = (dia1 - dma->dia);
    total = dif_a+dif_m+dif_d;
    if(total>=0){
        printf("A diferenca e de: %d dias entre as datas\n",total);
    }else{
        total = (total*-1);
        printf("A diferenca e de: %d dias entre as datas\n",total);
    }
}
