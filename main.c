#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void menu() {
    printf("\n| 1 - Somar\n| 2 - Subtrair\n| 3 - Multiplicar\n| 4 - Dividir (Primeiro Número: Dividendo | Segundo Número: Divisor)" 
           "\n| 5 - Exponenciação (Primeiro Número: Base | Segundo Número: Expoente)"
           "\n| 6 - Raiz Quadrada (Primeiro Número: Radicando)\n| 7 - Raiz Cúbica (O Número representa o Radicando)"
           "\n| 8 - Cosseno (Número em graus)\n| 9 - Seno (Número em graus)\n| 10 - Tangente (Número em graus)"
           "\n| 11 - Logaritmo na Base 10 (Primeiro Número: Logaritmando) \n| 12 - Logaritmo Natural (Primeiro Número: Logaritmando)"
           "\n| 13 - Constante de Euler (Digite um Número para obter a Constante)"
           "\n| 14 - Arco-Cosseno (Número em graus(entre -1 e 1))\n| 15 - Arco-Seno (Número em graus(entre -1 e 1))\n| 16 - Arco-Tangente (Número em graus(entre -1 e 1))"
           "\n| 17 - Hipotenusa(Primeiro Número: Cateto Oposto | Segundo Número: Cateto Adjacente)"
           "\n| 18 - Seno Hiperbolico (Primeiro Número: Variável)\n| 19 - Cosseno Hiperbolico (Primeiro Número: Variável)"
           "\n| 20 - Tangente Hiperbolico (Primeiro Número: Variável)"
           "\n| 0 - Sair"
           "\n| Digite sua escolha:\n");
}

int main()
{
    int escolha = -1;
    float numeros[100];
    float result;
    bool valido = true;
    bool sair = false;
    
    while (escolha != 0) {
        menu();
        scanf("%d", &escolha);
        
        if (escolha != 0) {
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &numeros[0]);
            
            if (escolha < 6 || escolha == 17) {
                printf("Digite o segundo número:\n");
                scanf("%f", &numeros[1]);
            }
        }
    
        switch (escolha) {
            case 1:
                result = numeros[0] + numeros[1];
                break;
            case 2:
                result = numeros[0] - numeros[1];
                break;
            case 3:
                result = numeros[0] * numeros[1];
                if (numeros[1] == 0) {
                    printf("Não é possível multiplicar para 0!");
                    valido = false;
                }
                break;
            case 4:
                result = numeros[0] / numeros[1];
                if (numeros[1] == 0) {
                    printf("Não é possível dividir para 0!");
                    valido = false;
                }
                break;
            case 5:
                //result = pow(num1, num2);
                result = numeros[0];
                if (numeros[0] == 0 && numeros[1] == 0) {
                    printf("0 elevado a 0 é uma indeterminação!");
                    valido = false;
                } else if (numeros[1] == 0) {
                    result = 1;                
                } else if (numeros[1] < 0) {
                    for (int i = -1; i > numeros[1]; i--) {
                        result *= numeros[0];
                    }
                    result = 1 / result;
                } else {
                    for (int i = 1; i < numeros[1]; i++) {
                        result *= numeros[0];
                    }
                }
                break;
            case 6:
                result = sqrt(numeros[0]);
                break;
            case 7:
                result = cbrt(numeros[0]);
                break;
            case 8:
                result = numeros[0] * (M_PI/180);
                result = cos(result);
                break;
            case 9:
                result = numeros[0] * (M_PI/180);
                result = sin(result);
                break;
            case 10:
                result = numeros[0] * (M_PI/180);
                result = tan(result);
                break;
            case 11:
                result = log10(numeros[0]);
                break;
            case 12:
                result = log(numeros[0]);
                break;
            case 13:
                result = exp(numeros[0]);
                break;
            case 14:
                result = acos(numeros[0]);
                result = result * (180/M_PI);
                break;
            case 15:
                result = asin(numeros[0]);
                result = result * (180/M_PI);
                break;
            case 16:
                result = atan(numeros[0]);
                result = result * (180/M_PI);
                break;
            case 17:
                result = hypot(numeros[0], numeros[1]);
                break;
            case 18:
                result = sinh(numeros[0]);
                break;
            case 19:
                result = cosh(numeros[0]);
                break;
            case 20:
                result = tanh(numeros[0]);
                break;
            case 0:
                valido = false;
                printf("\nSaindo...");
                break;
            default:
                printf("Escolha Indisponível!");
                valido = false;
                break;
        }
        
        if (valido) {
            printf("\nO resultado é: %f\n", result);
        }
    }
    return 0;
}
