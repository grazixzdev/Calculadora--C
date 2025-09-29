# **Calculadora Científica em C:** 🔢🎲

Este projeto é uma **calculadora científica** robusta desenvolvida em linguagem **C**. Ela opera no terminal, oferecendo uma ampla gama de operações matemáticas, desde as mais básicas até as mais avançadas.

## **O que o programa faz:**

O usuário interage com um menu para escolher qual operação deseja realizar. O programa aceita um ou dois números, dependendo da operação, e exibe o resultado. Ele continua em execução até que o usuário decida sair.


### **Operações Disponíveis:**

O programa oferece as seguintes funcionalidades:

**Operações com dois números:**

  * **1** – Somar
  * **2** – Subtrair
  * **3** – Multiplicar
  * **4** – Dividir
  * **5** – Exponenciação (Potência)
  * **17** – Hipotenusa

**Operações com um número:**

  * **6** – Raiz Quadrada
  * **7** – Raiz Cúbica
  * **8** – Cosseno
  * **9** – Seno
  * **10** – Tangente
  * **11** – Logaritmo na Base 10
  * **12** – Logaritmo Natural
  * **13** – Constante de Euler (função `exp`)
  * **14** – Arco-Cosseno
  * **15** – Arco-Seno
  * **16** – Arco-Tangente
  * **18** – Seno Hiperbólico
  * **19** – Cosseno Hiperbólico
  * **20** – Tangente Hiperbólica

Para sair do programa, basta digitar **0**.

## **Tecnologias Utilizadas:**

  * **Linguagem:** C
  * **Bibliotecas Padrão:**
      * `stdio.h` (entrada e saída)
      * `stdbool.h` (variáveis booleanas)
      * `math.h` (funções matemáticas)

## Como Compilar e Executar

### Requisitos

  * Um compilador C (como o **GCC**)
  * Terminal ou Prompt de Comando

### Passos

1.  **Clone o repositório:**

    ```
    git clone https://github.com/grazixzdev/Calculadora--C.git
    ```

2.  **Acesse a pasta do projeto:**

    ```
    cd Calculadora--C
    ```

3.  **Compile o código:**

    ```
    gcc main.c -o calculadora -lm
    ```

    > **Importante:** A flag `-lm` é essencial para vincular a biblioteca matemática `math.h`.

4.  **Execute o programa:**

    ```
    ./calculadora
    ```

## Exemplo de Uso

Ao executar o programa, você verá o menu de opções.

```
| 1 - Somar
| 2 - Subtrair
| 3 - Multiplicar
...
| 0 - Sair
| Digite sua escolha:
```

## Informações Adicionais

  * **Autores:** grazixzdev, amandamrs e italodf
  * **Licença:** MIT
  * O programa inclui verificações básicas para operações como divisão por zero e exponenciação com base e expoente zero.
