#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_bruto, valor_passagens, salario_final;
    int numero_viagens, opcao;

    printf("\nMenu de Opcoes: \n\n");
    printf("\n0 - sair");
    printf("\n1 - informar numero bruto");
    printf("\n2 - informar numero de viagens");
    printf("\n3 - informar valor das viagens");
    printf("\n4 - calcular salario\n\n");
    do
    {
        printf("Escolha alguma das opcoes acima:\n");
        scanf(" %i", &opcao);
    }
    while(opcao < 0 || opcao>4);

    switch(opcao)
    {
    case 0 :
        printf("obrigado");
        break;

    case 1 :
        printf("Salario bruto: ");
        scanf(" %f", &salario_bruto);
        break;

    case 2 :
        printf("Numero de viagens: ");
        scanf("%i", &numero_viagens);
        break;

    case 3 :
        printf("Valor da passagem: ");
        scanf(" %f", &valor_passagens);
        break;

    case 4 :
        salario_final= salario_bruto+(numero_viagens*valor_passagens);
    }

    printf("Seu salario eh %f", salario_final);
    while(opcao != 0);
    return 0;
}
