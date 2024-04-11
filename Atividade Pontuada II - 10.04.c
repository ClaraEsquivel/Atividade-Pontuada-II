#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL,"");
    char disciplinas[3][50];
    float notas[3][3];
    float pesos[3] = {3, 3, 4};
    float media[3], somaNotas = 0;
    int i, j;

  
    for (i = 0; i < 3; i++) {
        printf("Nome da %iª disciplina: ", i+1);
        scanf("%s", disciplinas[i]);
    }

  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            do {
                printf("%dª nota da disciplina %s: ", j+1, disciplinas[i]);
                scanf("%f", &notas[i][j]);
                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Nota inválida. Digite novamente.\n");
                }
            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
    }

  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            somaNotas += notas[i][j] * pesos[j];
        }
        media[i] = somaNotas / 10;
        somaNotas = 0;
    }

   system("cls || clear");
   
    for (i = 0; i < 3; i++) {
        printf("\nDisciplina: %s\n", disciplinas[i]);
        printf("Média: %.1f\n", media[i]);
        
        for(j = 0; j < 3; j++){
        	printf("%iª nota: %.1f\n", j+1, notas[i][j]);
		}
    }

    return 0;
}
