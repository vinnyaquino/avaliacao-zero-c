
# IMD0030 - LINGUAGEM DE PROGRAMAÇÃO I - T03 (2024.2)
**Professor:** Isaac Franco Fernandes

## Avaliação Zero - C

Este repositório contém a solução para quatro problemas propostos na disciplina **Linguagem de Programação I**. Todos os programas foram implementados na linguagem C e estão organizados conforme as instruções da avaliação.

---

### Índice
- [Problemas](#problemas)
  - [Cálculo de Fatorial](#cálculo-de-fatorial)
  - [Soma de Números em um Array](#soma-de-números-em-um-array)
  - [Contagem de Caracteres em uma String](#contagem-de-caracteres-em-uma-string)
  - [Verificação de Número Primo](#verificação-de-número-primo)
- [Como Executar os Programas](#como-executar-os-programas)
- [Estrutura do Repositório](#estrutura-do-repositório)
- [Contato](#contato)

---

## Problemas

### 1. Cálculo de Fatorial

**Descrição:**  
Este programa calcula e imprime o fatorial de um número inteiro fornecido pelo usuário. Caso o número seja negativo, o programa informa que não é possível calcular o fatorial.

**Entrada:** Um número inteiro.  
**Saída:** O fatorial do número inserido.

**Exemplo de uso:**
```bash
Digite um número inteiro: 5
O fatorial de 5 é: 120
```

[Código Fonte](./calculo_fatorial.c)

---

### 2. Soma de Números em um Array

**Descrição:**  
Este programa lê 5 números inteiros fornecidos pelo usuário, armazena-os em um array e calcula a soma total desses números.

**Entrada:** 5 números inteiros.  
**Saída:** A soma total dos números inseridos.

**Exemplo de uso:**
```bash
Digite 5 números inteiros:
Número 1: 2
Número 2: 4
Número 3: 6
Número 4: 8
Número 5: 10
A soma total dos números é: 30
```

[Código Fonte](./soma_array.c)

---

### 3. Contagem de Caracteres em uma String

**Descrição:**  
Este programa lê uma string fornecida pelo usuário e conta quantos caracteres, incluindo espaços, ela possui.

**Entrada:** Uma string.  
**Saída:** O número total de caracteres.

**Exemplo de uso:**
```bash
Digite uma string: Olá, mundo!
A string possui 12 caracteres.
```

[Código Fonte](./contagem_caracteres.c)

---

### 4. Verificação de Número Primo

**Descrição:**  
Este programa lê um número inteiro fornecido pelo usuário e determina se ele é um número primo ou não. Números primos são aqueles que só podem ser divididos por 1 e por eles mesmos.

**Entrada:** Um número inteiro.  
**Saída:** Informar se o número é primo ou não.

**Exemplo de uso:**
```bash
Digite um número inteiro: 7
7 é um número primo.

Digite um número inteiro: 8
8 não é um número primo.
```

[Código Fonte](./verificacao_primo.c)

---

## Como Executar os Programas

Siga os passos abaixo para compilar e executar cada programa:

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/vinnyaquino/avaliacao-zero-c.git
   ```
2. **Navegue até a pasta do projeto:**
   ```bash
   cd avaliacao-zero-c
   ```

3. **Compile o programa desejado:**
   - Para o cálculo de fatorial:
     ```bash
     gcc -o fatorial calculo_fatorial.c
     ```
   - Para a soma de números em um array:
     ```bash
     gcc -o soma_array soma_array.c
     ```
   - Para a contagem de caracteres em uma string:
     ```bash
     gcc -o contagem contagem_caracteres.c
     ```
   - Para a verificação de número primo:
     ```bash
     gcc -o primo verificacao_primo.c
     ```

4. **Execute o programa compilado:**
   ```bash
   ./nome_do_programa
   ```

---

## Estrutura do Repositório

```plaintext
avaliacao-zero-c/
│
├── calculo_fatorial.c            # Programa para cálculo de fatorial
├── soma_array.c                  # Programa para somar números de um array
├── contagem_caracteres.c         # Programa para contar caracteres em uma string
├── verificacao_primo.c           # Programa para verificar se um número é primo
├── README.md                     # Documentação do projeto
```

---

## Contato

Caso tenha dúvidas sobre o código ou o projeto, você pode me contatar em:

- **Nome:** Vinícius Aquino
- **E-mail:** viniciusaquino123@gmail.com

---

**GitHub Repositório:** [Link para o repositório](https://github.com/vinnyaquino/avaliacao-zero-c)
