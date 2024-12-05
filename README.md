# Cientific-Calc
Calculadora Científica em C
Este projeto implementa uma calculadora científica em C que oferece uma interface simples no console para realizar operações matemáticas básicas e avançadas. A calculadora permite ao usuário realizar cálculos como soma, subtração, multiplicação, divisão, raiz quadrada, potência e funções trigonométricas (seno, cosseno, tangente).

Funcionalidades
Operações Básicas
Soma: Adiciona dois números.
Subtração: Subtrai o segundo número do primeiro.
Multiplicação: Multiplica dois números.
Divisão: Divide o primeiro número pelo segundo (com verificação de divisão por zero).
Operações Avançadas
Raiz Quadrada: Calcula a raiz quadrada de um número não negativo.
Potência: Calcula a potência de uma base e um expoente.
Funções Trigonométricas:
Seno: Calcula o seno de um ângulo (em graus).
Cosseno: Calcula o cosseno de um ângulo (em graus).
Tangente: Calcula a tangente de um ângulo (em graus).
Tecnologias Utilizadas
Linguagem: C
Bibliotecas:
<stdio.h> para entrada e saída no console.
<stdlib.h> para funções de controle do programa.
<math.h> para funções matemáticas avançadas, como raiz quadrada, potência e funções trigonométricas.
Como Usar
Clone o repositório ou baixe os arquivos do projeto.

Compile o programa em C usando um compilador como o GCC:

bash
Copiar código
gcc calculadora.c -o calculadora -lm
O parâmetro -lm é necessário para linkar a biblioteca math.h durante a compilação.

Execute o programa:

bash
Copiar código
./calculadora
O programa exibirá um menu com as opções de operações básicas e avançadas. Escolha uma opção, insira os números e a operação desejada. O resultado será mostrado no console.

Exemplo de Execução
bash
Copiar código
--- Calculadora Científica ---
1. Operações Básicas
2. Operações Avançadas
3. Sair

Escolha uma opção: 1

--- Operações Básicas ---
Digite no formato: número operador número (exemplo: 5 + 3): 5 + 3
Resultado: 8.00
Considerações
A calculadora aceita operações básicas como soma, subtração, multiplicação e divisão.
Para operações avançadas, o programa lida com números em formato decimal e verifica erros comuns como a divisão por zero e entradas inválidas.
Para funções trigonométricas, os ângulos devem ser fornecidos em graus, sendo automaticamente convertidos para radianos.
Contribuições
Se você encontrar algum erro ou quiser sugerir melhorias, fique à vontade para abrir uma issue ou enviar um pull request.
