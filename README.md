*Calculadora Científica em C*

Este projeto é uma **calculadora científica** desenvolvida em linguagem **C**.  
Ela roda no terminal e oferece operações matemáticas básicas e avançadas.

*O que o programa faz:*
O usuário escolhe, através de um menu interativo, qual operação deseja realizar.  
As operações disponíveis incluem:

*Operações Básicas:*
- **1** – Somar  
- **2** – Subtrair  
- **3** – Multiplicar  
- **4** – Dividir  

*Operações Avançadas:*
- **5** – Exponenciação (potência)  
- **6** – Raiz Quadrada  
- **7** – Raiz Cúbica  
- **8** – Cosseno (graus)  
- **9** – Seno (graus)  
- **10** – Tangente (graus)  
- **11** – Logaritmo na Base 10  
- **12** – Logaritmo Natural (base *e*)  
- **13** – Constante de Euler (função `exp`)  

O programa permanece em execução até que o usuário escolha **0** para sair.


*Tecnologias Utilizadas:*
- **Linguagem:** C  
- **Bibliotecas padrão:**  
  - `stdio.h` (entrada/saída)  
  - `stdbool.h` (variáveis booleanas)  
  - `math.h` (funções matemáticas)  

*Como Compilar e Executar:*
Requisitos:
- Compilador C (por exemplo **GCC**)
- Terminal ou Prompt de Comando

Passos:
1. **Clone este repositório**:
   ```bash
   git clone https://github.com/grazixzdev/Calculadora--C.git
   ```
2. **Entre na pasta do projeto**:
   ```bash
   cd Calculadora--C
   ```
3. **Compile o código**:
   ```bash
   gcc main.c -o calculadora -lm
   ```
   > **Importante:** a flag `-lm` é necessária para linkar a biblioteca matemática `math.h`.

4. **Execute o programa**:
   ```bash
   ./calculadora
   ```

*Exemplo de Uso:*

```
| 1 - Somar
| 2 - Subtrair
| 3 - Multiplicar
| 4 - Dividir
| 5 - Exponenciação
| ...
| 0 - Sair
| Digite sua escolha:
```

*Exemplo prático:*
```
Digite sua escolha:
1
Digite o primeiro número:
10
Digite o segundo número:
5

O resultado é: 15.000000
```


*Informações Adicionais:*
- **Autores:** grazixzdev, amandamrs e italodf  
- **Licença:** MIT 
- O programa realiza verificações básicas, como divisão por zero e expoentes inválidos.  
- Possíveis melhorias: tratamento de erros mais robusto, suporte a cálculos em sequência, interface mais amigável.
