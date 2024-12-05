#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Funções auxiliares
void menu();
void operacoes_basicas();
void operacoes_avancadas();
void limpar_buffer();

// Programa principal
int main() {
    int opcao;

    do {
        menu();
        printf("\nEscolha uma opção: ");
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada inválida! Tente novamente.\n");
            limpar_buffer();
            continue;
        }

        switch (opcao) {
            case 1:
                operacoes_basicas();
                break;
            case 2:
                operacoes_avancadas();
                break;
            case 3:
                printf("\nSaindo da calculadora. Até logo!\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}

// Exibe o menu principal
void menu() {
    printf("\n--- Calculadora Científica ---\n");
    printf("1. Operações Básicas\n");
    printf("2. Operações Avançadas\n");
    printf("3. Sair\n");
}

// Realiza operações básicas
void operacoes_basicas() {
    double num1, num2, resultado;
    char operador;

    printf("\n--- Operações Básicas ---\n");
    printf("Digite no formato: número operador número (exemplo: 5 + 3): ");
    if (scanf("%lf %c %lf", &num1, &operador, &num2) != 3) {
        printf("Entrada inválida! Use o formato correto.\n");
        limpar_buffer();
        return;
    }

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
                return;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Operador inválido! Use +, -, * ou /.\n");
            return;
    }

    printf("Resultado: %.2lf\n", resultado);
}

// Realiza operações avançadas
void operacoes_avancadas() {
    int opcao;
    double numero, base, expoente, resultado;

    printf("\n--- Operações Avançadas ---\n");
    printf("1. Raiz Quadrada\n");
    printf("2. Potência\n");
    printf("3. Seno\n");
    printf("4. Cosseno\n");
    printf("5. Tangente\n");
    printf("Escolha uma operação: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        limpar_buffer();
        return;
    }

    switch (opcao) {
        case 1:
            printf("Digite o número: ");
            if (scanf("%lf", &numero) != 1) {
                printf("Entrada inválida! Tente novamente.\n");
                limpar_buffer();
                return;
            }
            if (numero < 0) {
                printf("Erro: Não é possível calcular raiz quadrada de número negativo.\n");
                return;
            }
            resultado = sqrt(numero);
            printf("Raiz Quadrada: %.2lf\n", resultado);
            break;

        case 2:
            printf("Digite a base e o expoente (exemplo: 2 3): ");
            if (scanf("%lf %lf", &base, &expoente) != 2) {
                printf("Entrada inválida! Tente novamente.\n");
                limpar_buffer();
                return;
            }
            resultado = pow(base, expoente);
            printf("Potência: %.2lf\n", resultado);
            break;

        case 3:
            printf("Digite o ângulo em graus: ");
            if (scanf("%lf", &numero) != 1) {
                printf("Entrada inválida! Tente novamente.\n");
                limpar_buffer();
                return;
            }
            resultado = sin(numero * M_PI / 180); // Conversão para radianos
            printf("Seno: %.2lf\n", resultado);
            break;

        case 4:
            printf("Digite o ângulo em graus: ");
            if (scanf("%lf", &numero) != 1) {
                printf("Entrada inválida! Tente novamente.\n");
                limpar_buffer();
                return;
            }
            resultado = cos(numero * M_PI / 180); // Conversão para radianos
            printf("Cosseno: %.2lf\n", resultado);
            break;

        case 5:
            printf("Digite o ângulo em graus: ");
            if (scanf("%lf", &numero) != 1) {
                printf("Entrada inválida! Tente novamente.\n");
                limpar_buffer();
                return;
            }
            resultado = tan(numero * M_PI / 180); // Conversão para radianos
            printf("Tangente: %.2lf\n", resultado);
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }
}

// Limpa o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
