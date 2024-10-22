#include <stdio.h>
#include <stdlib.h>

const int MAX = 10;

void LeiaIdades(int idades[]) {
    for (int i = 0; i < MAX; i++) {
        printf("\nDigite a %i.a idade: ", i + 1);
        scanf("%i", &idades[i]);
    }
}

int SomaIdades(int A[]) {
    int soma = 0;
    for (int i = 0; i < MAX; i++) {
        soma += A[i];
    }
    return soma;
}

float MediaIdades(int A[]) {
    return SomaIdades(A) / 10.0;
}

int AcimaMedia(float media, int idades[]) {
    int resultado = 0;
    for (int i = 0; i < MAX; i++) {
        if (idades[i] > media) {
            resultado++;
        }
    }
    return resultado;
}

int main() {
    int idades[MAX];
    LeiaIdades(idades);

    float media = MediaIdades(idades);
    int acima = AcimaMedia(media, idades);

    printf("\nMedia = %.2f", media);
    printf("\n%d idade(s) acima da media", acima);

    return 0;
}
