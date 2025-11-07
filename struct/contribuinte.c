#include <stdio.h>

typedef struct{
    char nome[40];
    int idade;
    float renda;
}contribuintes;

int main(){
    int n;
    printf("Digite a quantidade de contribuintes:\n");
    scanf("%d", &n);
    contribuintes pessoas[n];
    
    int menor =0;
    int isentas=0;
    
    for (int i=0; i<n; i++){
        printf("\nNome: ");
        scanf(" %39[^\n]", pessoas[i].nome);
        printf("\nldade:");
        scanf("%d", &pessoas[i].idade);
        printf("\nRenda Anual:");
        scanf("%f", &pessoas[i].renda);
        
        if (pessoas[i].idade<18)
            menor++;
        if (pessoas[i].renda<=28559.70)
            isentas++;
    }
    
    printf("***********RESULTADOS***********");
    printf("\n%d pessoas são menores que 18 anos", menor);
    printf("\n%d pessoas são isentas de impostos", isentas);
    printf("\n**********************************");
    for (int i = 0; i<n; i++){
        printf("\nNome: %c", pessoas[i].nome);
        printf("\nIdade: %c", pessoas[i].idade);
        printf("\nRenda Anual: %c", pessoas[i].renda);
    }
    
    
}