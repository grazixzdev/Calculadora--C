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
           "\n| 20 - Tangente Hiperbolico (Primeiro Número: Variável)\n| 21 - Soma de Matrizes 2 X 2\n| 22 - Soma de Matrizes 3 X 3"
           "\n| 23 - Multiplicação de Matrizes 2 X 2\n| 24 - Multiplicação de Matrizes 3 X 3"
           "\n| 50 - Histórico\n| 0 - Sair"
           "\n| Digite sua escolha:\n");
}

float somar(float n1, float n2) {
    return n1 + n2;
}

float subtrair(float n1, float n2) {
    return n1 - n2;
}

float multiplicar(float n1, float n2) {
    if (n2 != 0) {
        return n1 * n2;    
    } else {
        printf("\nNão é possível multiplicar para 0!\n");
        return NAN;   
    }
}

float dividir(float n1, float n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
         printf("\nNão é possível dividir para 0!\n");
        return NAN;
    }
}

float exponenciar(float n1, float n2) {
  //result = pow(num1, num2);
    float result = 0;
    if (n1 == 0 && n2 == 0) {
        printf("0 elevado a 0 é uma indeterminação!");
        return NAN;
    } else if (n2 == 0) {
        return 1;                
    } else if (n2 < 0) {
        for (int i = -1; i > n2; i--) {
            result *= n1;
        }
        result = 1 / result;
        return result;
    } else {
        for (int i = 1; i < n2; i++) {
            result *= n1;
        }
        return result;
    }    
}

float raizQuadrada(float n1) {
    return sqrt(n1);
}

float raizCubica(float n1) {
    return cbrt(n1);
}

float cosseno(float n1) {
    float result = n1 * (M_PI/180);
    return cos(result);
}

float seno(float n1) {
    float result = n1 * (M_PI/180);
    return sin(result);
}

float tangente(float n1) {
    float result = n1 * (M_PI/180);
    return tan(result);
}

float logaritmo10(float n1) { 
    return log10(n1);
}

float logaritmo(float n1) { 
    return log(n1);
}

float euler(float n1) {
    return exp(n1);
}

float arcoCosseno(float n1){
    float result = n1 * (180/M_PI);
    return acos(n1);
}

float arcoSeno(float n1){
    float result = n1 * (180/M_PI);
    return asin(n1);
}

float arcoTangente(float n1){
    float result = n1 * (180/M_PI);
    return atan(n1);
}

float hipotenusa(float n1, float n2){
    return hypot(n1, n2);
}


float senoHiperbolico(float n1){
    return sinh(n1);
}


float cossenoHiperbolico(float n1){
    return cosh(n1);
}

float tangenteHiperbolico(float n1){
    return tanh(n1);
}


void somaMatriz2x2(float n1[100], float n2[100]) {
    int c = 1;
    for (int i = 0; i < 4; i++) {
        if (i > 1) {
            c = 2;
        }
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n1[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        c = 1;
        if (i > 1) {
            c = 2;
        }
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n2[i]);
    }
    printf("Resultado:\n");
    for (int i = 0; i < 4; i++) {
    
        // Imprime a soma do elemento atual
        printf("| %.1f ", (n1[i] + n2[i]));
    
        // (i + 1) é a contagem de elementos (1, 2...)
        // Se a contagem for divisível por 2, significa que fechamos uma linha
        if ((i + 1) % 2 == 0) {
            printf("|\n"); // Fecha a linha e pula para a próxima
        }
    }
}

void somaMatriz3x3(float n1[100], float n2[100]) {
    int c = 1;
    for (int i = 0; i < 9; i++) {
        if (i > 2) {
            c = 2;
        }
        if (i > 5) {
            c = 3;
        }
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n1[i]);
    }
    printf("\n");
    for (int i = 0; i < 9; i++) {
        c = 1;
        if (i > 2) {
            c = 2;
        } 
        if (i > 5) {
            c = 3;
        }
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n2[i]);
    }
    printf("Resultado:\n");
    for (int i = 0; i < 9; i++) {
    
    // Imprime a soma do elemento atual
    printf("| %.1f ", (n1[i] + n2[i]));

    // (i + 1) é a contagem de elementos (1, 2, 3, 4...)
    // Se a contagem for divisível por 3, significa que fechamos uma linha
        if ((i + 1) % 3 == 0) {
            printf("|\n"); // Fecha a linha e pula para a próxima
        }
    }
}

void multiplicarMatriz2x2(float n1[100], float n2[100]) {
    int c = 1;
    for (int i = 0; i < 4; i++) {
        if (i > 1) {
            c = 2;
        }
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n1[i]);
    }
    printf("\n");
    
    c = 1; // Reinicia o 'c' para a segunda matriz
    for (int i = 0; i < 4; i++) {
        if (i > 1) {
            c = 2;
        }
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n2[i]);
    }
    printf("\n");
    
    // um vetor para guardar o resultado
    float R[4];

    // Calcular cada posição do resultado
    
    // R[0] = Linha 1 * Coluna 1
    R[0] = (n1[0] * n2[0]) + (n1[1] * n2[2]);
    
    // R[1] = Linha 1 * Coluna 2
    R[1] = (n1[0] * n2[1]) + (n1[1] * n2[3]);
    
    // R[2] = Linha 2 * Coluna 1
    R[2] = (n1[2] * n2[0]) + (n1[3] * n2[2]);
    
    // R[3] = Linha 2 * Coluna 2
    R[3] = (n1[2] * n2[1]) + (n1[3] * n2[3]);

    printf("Resultado:\n");
    
    // printf("| %.1f  %.1f |\n", R[0], R[1]);
    // printf("| %.1f  %.1f |\n", R[2], R[3]);

    for (int i = 0; i < 4; i++) {
        printf("| %.1f ", R[i]); // Imprime o resultado R[i]
        
        if ((i + 1) % 2 == 0) {
            printf("|\n"); // Quebra a linha a cada 2 elementos
        }
    }
    
}

void multiplicarMatriz3x3(float n1[100], float n2[100]) {
    int c = 1;
    for (int i = 0; i < 9; i++) {
        if (i > 2) {
            c = 2;
        }
        if (i > 5) {
            c = 3;
        }
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n1[i]);
    }
    printf("\n");
    
    c = 1; // Reinicia o 'c' para a segunda matriz
    for (int i = 0; i < 9; i++) {
        if (i > 2) {
            c = 2;
        }
        if (i > 5) {
            c = 3;
        }
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n2[i]);
    }
    printf("\n");

    // Um vetor para guardar os 9 resultados
    float R[9];

    // Calcular cada posição do resultado

    // Linha 1 do Resultado
    // R[0] = Linha 1 * Coluna 1
    R[0] = (n1[0] * n2[0]) + (n1[1] * n2[3]) + (n1[2] * n2[6]);
    // R[1] = Linha 1 * Coluna 2
    R[1] = (n1[0] * n2[1]) + (n1[1] * n2[4]) + (n1[2] * n2[7]);
    // R[2] = Linha 1 * Coluna 3
    R[2] = (n1[0] * n2[2]) + (n1[1] * n2[5]) + (n1[2] * n2[8]);

    // Linha 2 do Resultado
    // R[3] = Linha 2 * Coluna 1
    R[3] = (n1[3] * n2[0]) + (n1[4] * n2[3]) + (n1[5] * n2[6]);
    // R[4] = Linha 2 * Coluna 2
    R[4] = (n1[3] * n2[1]) + (n1[4] * n2[4]) + (n1[5] * n2[7]);
    // R[5] = Linha 2 * Coluna 3
    R[5] = (n1[3] * n2[2]) + (n1[4] * n2[5]) + (n1[5] * n2[8]);

    // Linha 3 do Resultado
    // R[6] = Linha 3 * Coluna 1
    R[6] = (n1[6] * n2[0]) + (n1[7] * n2[3]) + (n1[8] * n2[6]);
    // R[7] = Linha 3 * Coluna 2
    R[7] = (n1[6] * n2[1]) + (n1[7] * n2[4]) + (n1[8] * n2[7]);
    // R[8] = Linha 3 * Coluna 3
    R[8] = (n1[6] * n2[2]) + (n1[7] * n2[5]) + (n1[8] * n2[8]);


   
    printf("Resultado:\n");

    // Loop vai até 9 (i < 9)
    for (int i = 0; i < 9; i++) {
        printf("| %.1f ", R[i]); // Imprime o resultado R[i]
        
        // Quebra a linha a cada 3 elementos
        if ((i + 1) % 3 == 0) {
            printf("|\n"); 
        }
    }
}


struct historico {
    float n1;
    float n2;
    float result;
    int utilizado;
    char * tipo;
};


int main()
{
    struct historico hist[100];
    int escolha = -1;
    float numeros[100];
    float numeros2[100];
    float result;
    bool valido;
    bool sair = false;
    int a = 0;
    
    while (escolha != 0) {
        valido = true;
        menu();
        scanf("%d", &escolha);
        
        if (escolha != 0 && escolha < 21) {
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &numeros[0]);
            hist[a].n1 = numeros[0];
            
            if (escolha < 6 || escolha == 17) {
                printf("Digite o segundo número:\n");
                scanf("%f", &numeros[1]);
                hist[a].n2 = numeros[1];
                hist[a].utilizado = 1;
            }
        }
    
        switch (escolha) {
            case 1:
                result = somar(numeros[0], numeros[1]);
                hist[a].tipo = "soma";
                break;
            case 2:
                result = subtrair(numeros[0], numeros[1]);
                hist[a].tipo = "subtração";
                break;
            case 3:
                result = multiplicar(numeros[0], numeros[1]);
                hist[a].tipo = "multiplicação";
                if (isnan(result)) {
                    valido = false;
                }
                break;
            case 4:
                result = dividir(numeros[0], numeros[1]);
                hist[a].tipo = "divisão";
                if (isnan(result)) {
                    valido = false;
                }
                break;
            case 5:
                result = exponenciar(numeros[0], numeros[1]);
                hist[a].tipo = "exponenciação";
                if (isnan(result)) {
                    valido = false;
                }
                break;
            case 6:
                result = raizQuadrada(numeros[0]);
                hist[a].tipo = "raiz quadrada";
                break;
            case 7:
                result = raizCubica(numeros[0]);
                hist[a].tipo = "raiz cúbica";
                break;
            case 8:
                result = cosseno(numeros[0]);
                hist[a].tipo = "cosseno";
                break;
            case 9:
                result = seno(numeros[0]);
                hist[a].tipo = "seno";
                break;
            case 10:
                result = tangente(numeros[0]);
                hist[a].tipo = "tangente";
                break;
            case 11:
                result = logaritmo10(numeros[0]);
                hist[a].tipo = "logaritmo10";
                break;
            case 12:
                result = logaritmo(numeros[0]);
                hist[a].tipo = "logaritmo";
                break;
            case 13:
                result = euler(numeros[0]);
                hist[a].tipo = "euler";
                break;
            case 14:
                result = arcoCosseno(numeros[0]);
                hist[a].tipo = "arco cosseno";
                break;
            case 15:
                result = arcoSeno(numeros[0]);
                hist[a].tipo = "arco seno";
                break;
            case 16:
                result = arcoTangente(numeros[0]);
                hist[a].tipo = "arco tangente";
                break;
            case 17:
                result = hipotenusa(numeros[0], numeros[1]);
                hist[a].tipo = "hipotenusa";
                break;
            case 18:
                result = senoHiperbolico(numeros[0]);
                hist[a].tipo = "seno hiperbolico";
                break;
            case 19:
                result = cossenoHiperbolico(numeros[0]);
                hist[a].tipo = "cosseno hiperbolico";
                break;
            case 20:
                result = tangenteHiperbolico(numeros[0]);
                hist[a].tipo = "tangente hiperbolico";
                break;
            case 21:
                somaMatriz2x2(numeros, numeros2);
                hist[a].tipo = "soma matriz 2x2";
                valido = false;
                break;
            case 22:
                somaMatriz3x3(numeros, numeros2);
                hist[a].tipo = "soma matriz 3x3";
                valido = false;
                break;
            case 23:
                multiplicarMatriz2x2(numeros, numeros2);
                hist[a].tipo = "multiplicação matriz 2x2";
                valido = false;
                break;
            case 24:
                multiplicarMatriz3x3(numeros, numeros2);
                hist[a].tipo = "multiplicação matriz 3x3";
                valido = false;
                break;
            case 50:
                for (int i = 0; i < a; i++) {
                    printf("\n| id do historico: %i", i + 1);
                    printf("\n| tipo de operação: %s", hist[i].tipo);
                    printf("\n| primeiro número: %f", hist[i].n1);
                    if (hist[i].utilizado == 1) {
                        printf("\n| segundo número: %f", hist[i].n2);
                    }
                    printf("\n| resultado:%f \n \n", hist[i].result);
                }
                valido = false;
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
            hist[a].result = result;
            a++;
        }
        printf("\nPressione Enter para continuar...\n");
        while (getchar() != '\n');
        getchar();
    }
    return 0;
}
