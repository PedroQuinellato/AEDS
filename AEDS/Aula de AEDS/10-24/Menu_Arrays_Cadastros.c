#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int MAX = 80;
int TAM = 0;

int menu()
{
    int opcao;
    bool ERRO;

    do
    {
        printf("\n MENU\n");
        printf("\n\n 0 - sair");
        printf("\n\n 1 - cadastrar nota");
        printf("\n\n 2 - QT aprovados");
        printf("\n\n 3 - amplitude da notas");
        printf("\n\n sua opcao");
        scanf(" %i", &opcao);
        ERRO = opcao < 0 || opcao > 3;
        if(ERRO)
        {
            printf("\n opção inválida!");
        }
    }
    while(ERRO);

    return opcao;
}

void despedida()
{
    printf("\n\n Obrigado volte sempre!");
}

void cadastro(float notas[])
{
    float nota;
    bool ERRO;
    do
    {
        printf("\n digite a nota:");
        scanf(" %f", &nota);
        ERRO = nota < 0 || nota > 100;
    }
    while(ERRO);
    notas[TAM] = nota;
    TAM++;
}

void infoaprovados(float notas[])
{
    printf("\n O número de aprovados eh %f", qtaprovados(notas));
}

qtaprovados (float notas[])
{
    int c = 0;
            for(int i = 0; i < TAM; i++)
    {
        if(notas[0] >= 60)
        {
            c++;
        }
    }

    return ;
}

float maiorArray(float V[]) {
    float maior = V[0];
    for (int i = 1; i < TAM; i++) {
        if (V[i] > maior) {
            maior = V[i];
        }
    }
    return maior;
}

float menorArray(float V[]) {
    float menor = V[0];
    for (int i = 1; i < TAM; i++) {
        if (V[i] < menor) {
            menor = V[i];
        }
    }
    return menor;
}

float amplitude(float V[]) {
    return maiorArray(V) - menorArray(V);
}

void infoamplitude(float notas[]) {
    if (TAM > 0) {
        printf("\n A amplitude das notas eh %.2f\n", amplitude(notas));
    } else {
        printf("\n Nenhuma nota cadastrada!\n");
    }
}

int main()
{
    float notas[MAX];
    int opcao;
    opcao = menu();
    do{
        switch(opcao)
        {
        case 0:
            despedida();
            break;

        case 1:
            cadastro(notas);
            break;

        case 2:
            infoaprovados(notas);
            break;

        case 3:
            infoamplitude(notas);

        default:
            printf("\n opcao invalida");
        }
    }
    while(opcao != 0);
    return 0;
}