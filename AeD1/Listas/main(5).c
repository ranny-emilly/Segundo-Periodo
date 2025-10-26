#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int apostas[N][6];
    int sorteados[6];
    int i, j, k, sena, quina, quadra, acertos;
    
    sena = 0;
    quina = 0; 
    quadra = 0;

    for (i = 0; i < N; i++) {
    for (j = 0; j < 6; j++) {
        scanf("%d", &apostas[i][j]);
    }
    }
    
    for (i = 0; i < 6; i++) {
    scanf("%d", &sorteados[i]);
    }
      for (i = 0; i < N; i++) {
      acertos = 0;
        
    for (j = 0; j < 6; j++) {
    for (k = 0; k < 6; k++) {
    if (apostas[i][j] == sorteados[k]) {
    acertos++;
    break;
    }
    }
    }
        
      if (acertos == 6)
       sena++;
        else if (acertos == 5)
        quina++;
        else if (acertos == 4)
        quadra++;
    }

    if (sena == 0)
    printf("Nao houve acertador para sena\n");
    else
    printf("Houve %d acertador(es) da sena\n", sena);

    if (quina == 0)
    printf("Nao houve acertador para quina\n");
    else
     printf("Houve %d acertador(es) da quina\n", quina);

    if (quadra == 0)
    printf("Nao houve acertador para quadra\n");
    else
    printf("Houve %d acertador(es) da quadra\n", quadra);
    return 0;
}
