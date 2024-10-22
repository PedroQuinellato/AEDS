#include <stdio.h>
#include <stdlib.h>
void apresentacao();
float leiareal();
float soma2(float, float);
void esreva (float, float, float);


int main()
{
    printf("Preste atencao\n");
    apresentacao();

    float a = leiareal();
    float b = leiareal();
    float soma = soma2(a,b);
    escreva(a, b, soma);

    return 0;
}

void apresentacao()
{
    printf("Digite 2 numeros para fazer a soma!\n");
}

float leiareal()
{
    float x;
    printf("Digite o primero numero: ");
    scanf(" %f", &x);

    return x;
}

float soma2(float x, float y)
{
    return x + y;
}

void escreva(float x, float y, float z)
{
    printf("\n %f, + %f,= %f", x, y ,z);
}
