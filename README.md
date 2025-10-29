

## 🧮 Calculadora Científica Completa em C

Este projeto é uma **calculadora científica robusta** desenvolvida em linguagem **C**. Ela opera no terminal, oferecendo uma ampla gama de operações matemáticas e funcionalidades avançadas, incluindo operações com matrizes e um histórico de cálculos.

### O que o programa faz:

O usuário interage com um menu para escolher qual operação deseja realizar. O programa aceita um ou dois números, ou os elementos das matrizes, dependendo da operação, e exibe o resultado. Ele continua em execução até que o usuário decida sair.

-----

### Funcionalidades e Operações Disponíveis:

O programa oferece as seguintes funcionalidades, categorizadas pela complexidade e número de entradas:

#### 1\. Operações Aritméticas e de Potência (Dois Números):

| Opção | Operação | Detalhes |
| :---: | :---: | :--- |
| **1** | Somar | $N1 + N2$ |
| **2** | Subtrair | $N1 - N2$ |
| **3** | Multiplicar | $N1 \times N2$ |
| **4** | Dividir | $N1 \div N2$ (Verifica divisão por zero) |
| **5** | Exponenciação (Potência) | $N1^{\text{N2}}$ (Base $\mid$ Expoente) |
| **17** | Hipotenusa | $\sqrt{N1^2 + N2^2}$ (Cateto Oposto $\mid$ Cateto Adjacente) |

#### 2\. Funções Trigonométricas e Logarítmicas (Um Número):

| Opção | Operação | Detalhes |
| :---: | :---: | :--- |
| **6** | Raiz Quadrada | $\sqrt{N1}$ (Radicando) |
| **7** | Raiz Cúbica | $\sqrt[3]{N1}$ (Radicando) |
| **8** | Cosseno | $\text{cos}(\text{N1})$ (Ângulo em Graus) |
| **9** | Seno | $\text{sen}(\text{N1})$ (Ângulo em Graus) |
| **10** | Tangente | $\text{tan}(\text{N1})$ (Ângulo em Graus) |
| **11** | Logaritmo na Base 10 | $\log_{10}(N1)$ (Logaritmando) |
| **12** | Logaritmo Natural | $\ln(N1)$ ou $\log_e(N1)$ (Logaritmando) |
| **13** | Constante de Euler ($\text{e}^x$) | $e^{N1}$ (Função `exp`) |

#### 3\. Funções Trigonométricas Inversas (Um Número - Domínio: $[-1, 1]$):

| Opção | Operação | Detalhes |
| :---: | :---: | :--- |
| **14** | Arco-Cosseno | $\text{arccos}(\text{N1})$ (Resultado em Radianos, exibido em Graus) |
| **15** | Arco-Seno | $\text{arcsen}(\text{N1})$ (Resultado em Radianos, exibido em Graus) |
| **16** | Arco-Tangente | $\text{arctan}(\text{N1})$ (Resultado em Radianos, exibido em Graus) |

#### 4\. Funções Hiperbólicas (Um Número):

| Opção | Operação | Detalhes |
| :---: | :---: | :--- |
| **18** | Seno Hiperbólico | $\text{sinh}(\text{N1})$ |
| **19** | Cosseno Hiperbólico | $\text{cosh}(\text{N1})$ |
| **20** | Tangente Hiperbólica | $\text{tanh}(\text{N1})$ |

#### 5\. Operações com Matrizes (Requer Múltiplas Entradas):

As operações com matrizes solicitam a entrada de cada elemento individualmente.

| Opção | Operação |
| :---: | :---: |
| **21** | Soma de Matrizes $2 \times 2$ |
| **22** | Soma de Matrizes $3 \times 3$ |
| **23** | Multiplicação de Matrizes $2 \times 2$ |
| **24** | Multiplicação de Matrizes $3 \times 3$ |

#### 6\. Funcionalidades de Controle:

| Opção | Funcionalidade | Detalhes |
| :---: | :---: | :--- |
| **50** | Histórico de Operações | Exibe a lista de todos os cálculos válidos realizados, com números de entrada e resultado. |
| **0** | Sair do Programa | Encerra a execução da calculadora. |

-----

### 💻 Tecnologias Utilizadas:

  * **Linguagem:** C
  * **Bibliotecas Padrão:**
      * `stdio.h` (entrada e saída)
      * `stdbool.h` (variáveis booleanas)
      * `math.h` (funções matemáticas avançadas: `pow`, `sqrt`, `cos`, `sin`, `tan`, etc.)

-----

### ⚙️ Como Compilar e Executar:

**Requisitos:**

  * Um compilador C (como o **GCC**).
  * Terminal ou Prompt de Comando.

**Passos:**

1.  **Clone o repositório:**

    ```bash
    git clone https://github.com/grazixzdev/Calculadora--C.git
    ```

2.  **Acesse a pasta do projeto:**

    ```bash
    cd Calculadora--C
    ```

3.  **Compile o código:**
    Você deve compilar o arquivo principal (ex: `main.c`) e **incluir a flag `-lm`** para vincular a biblioteca matemática (`math.h`).

    ```bash
    gcc main.c -o calculadora -lm
    ```

4.  **Execute o programa:**

    ```bash
    ./calculadora
    ```

-----

### 💬 Exemplo de Uso:

Ao executar o programa, você verá o menu de opções.

```
| 1 - Somar
| 2 - Subtrair
| 3 - Multiplicar
...
| 50 - Histórico
| 0 - Sair
| Digite sua escolha: 4

Digite o primeiro número:
10
Digite o segundo número:
2

O resultado é: 5.000000

Pressione Enter para continuar...
```

-----

### ℹ️ Informações Adicionais:

  * **Autores:** grazixzdev, amandamrs e italodf
  * **Licença:** MIT
  * O programa inclui verificações para operações como divisão por zero.
  * O Histórico (`Opção 50`) armazena os dados das operações que retornaram um único resultado (opções **1** a **20**).

