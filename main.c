#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int escolha = -1;
    float num1;
    float num2;
    float result;
    bool valido = true;
    bool sair = false;
    
    while (escolha != 0) {
        printf("\n| 1 - Somar\n| 2 - Subtrair\n| 3 - Multiplicar\n| 4 - Dividir" 
           "\n| 5 - Exponenciação\n| 6 - Raiz Quadrada\n| 7 - Raiz Cúbica"
           "\n| 8 - Cosseno\n| 9 - Seno\n| 10 - Tangente"
           "\n| 11 - Logaritmo na Base 10\n| 12 - Logaritmo Natural\n| 13 - Constante de Euler"
           "\n| 14 - Arco-Cosseno\n| 15 - Arco-Seno\n| 16 - Arco-Tangente"
           "\n| 17 - Hipotenusa"
           "\n| 0 - Sair"
           "\n| Digite sua escolha:\n");
        scanf("%d", &escolha);
        
        if (escolha != 0) {
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &num1);
            
            if (escolha < 6 || escolha == 17) {
                printf("Digite o segundo número:\n");
                scanf("%f", &num2);
            }
        }
    
        switch (escolha) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                if (num2 == 0) {
                    printf("Não é possível multiplicar para 0!");
                    valido = false;
                }
                break;
            case 4:
                result = num1 / num2;
                if (num2 == 0) {
                    printf("Não é possível dividir para 0!");
                    valido = false;
                }
                break;
            case 5:
                //result = pow(num1, num2);
                result = num1;
                if (num1 == 0 && num2 == 0) {
                    printf("0 elevado a 0 é uma indeterminação!");
                    valido = false;
                } else if (num2 == 0) {
                    result = 1;                
                } else if (num2 < 0) {
                    for (int i = -1; i > num2; i--) {
                        result *= num1;
                    }
                    result = 1 / result;
                } else {
                    for (int i = 1; i < num2; i++) {
                        result *= num1;
                    }
                }
                break;
            case 6:
                result = sqrt(num1);
                break;
            case 7:
                result = cbrt(num1);
                break;
            case 8:
                result = num1 * (M_PI/180);
                result = cos(result);
                break;
            case 9:
                result = num1 * (M_PI/180);
                result = sin(result);
                break;
            case 10:
                result = num1 * (M_PI/180);
                result = tan(result);
                break;
            case 11:
                result = log10(num1);
                break;
            case 12:
                result = log(num1);
                break;
            case 13:
                result = exp(num1);
                break;
            case 14:
                result = acos(num1);
                result = result * (180/M_PI);
                break;
            case 15:
                result = asin(num1);
                result = result * (180/M_PI);
                break;
            case 16:
                result = atan(num1);
                result = result * (180/M_PI);
                break;
            case 17:
                result = hypot(num1, num2);
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
