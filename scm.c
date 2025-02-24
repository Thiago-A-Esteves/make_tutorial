#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

void menu() {
    int opcao, x, y;
    
    do {
        printf("\nEscolha uma operação:\n");
        printf("1 - Somar\n");
        printf("2 - Multiplicar\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite dois números: ");
            scanf("%d %d", &x, &y);
        }

        switch (opcao) {
            case 1:
                soma(x, y);
                break;
            case 2:
                multiplica(x, y);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);
}

int main() {
    printf("Olá, Estudante!\n");
    menu();
    return 0;
}
