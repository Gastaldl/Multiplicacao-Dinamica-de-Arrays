# Multiplicação Dinâmica de Arrays em C++

Este repositório contém um programa em C++ que multiplica dinamicamente dois arrays de inteiros e armazena os resultados em um novo array alocado dinamicamente.

## Descrição

O programa recebe dois arrays de tamanhos diferentes, multiplica cada elemento do primeiro array por todos os elementos do segundo array e armazena os valores resultantes em um novo array. A alocação de memória é feita dinamicamente para acomodar os resultados.

## Estrutura do Código

- **apply_all:** Função que realiza a multiplicação dos elementos dos dois arrays e armazena os resultados em um novo array alocado dinamicamente.
- **print:** Função auxiliar para exibir os elementos de um array.
- **main:** Configura e inicializa os arrays de entrada, chama as funções e exibe os resultados.

## Exemplo de Saída

```sh
Array 1: [ 1 2 3 4 5 ]
Array 2: [ 10 20 30 ]
Resultado: [ 10 20 30 20 40 60 30 60 90 40 80 120 50 100 150 ]
```

## Tecnologias Utilizadas

- Linguagem C++
- Alocação dinâmica de memória

