# 📘 Aula 03 — Operadores e Expressões em Linguagem C

Nesta aula foram estudados os **operadores e as expressões em linguagem C**, utilizados para realizar cálculos, comparações e decisões lógicas dentro dos programas.

Durante a aula, foram apresentados os operadores aritméticos, relacionais e lógicos, além das regras de precedência que definem a ordem de avaliação de uma expressão. Também foi introduzida a biblioteca `math.h`, com funções matemáticas prontas, e a aula contou com uma lista de exercícios práticos para aplicar esses conceitos.

---

## 📚 Conteúdos praticados

### Revisão da aula anterior

- Estrutura do pseudocódigo e de um programa em C
- Diretiva `#include` e principais bibliotecas (`stdio.h`, `string.h`, `math.h`, `ctype.h`, `stdlib.h`)
- Tipos de dados primitivos e declaração de variáveis

### Operadores

- ➕ Operadores aritméticos (`+`, `-`, `*`, `/`, `%`)
- Incremento e decremento (`++`, `--`)
- Operadores de atribuição composta (`+=`, `-=`, `*=`, `/=`, `%=`)
- Operadores relacionais e lógicos (convenção do pseudocódigo: `E`, `OU`, `NÃO`)
- Manutenção e inversão de sinal (`+a`, `-a`)

### Expressões e precedência

- Ordem de precedência dos operadores aritméticos
- Prioridade dos grupos de operadores (parênteses, aritméticos, relacionais e lógicos)
- Uso de parênteses para alterar a ordem de avaliação
- Divisão inteira × divisão real

### Funções matemáticas

- Biblioteca `math.h`: `sqrt()`, `pow()`, `fabs()`, `ceil()`, `floor()`, `round()`, `log10()`, `sin()`, `cos()`, `tan()`
- Uso do tipo `double` com funções matemáticas
- Compilação com a opção `-lm` no Linux e no WSL

---

## 💻 Exemplos desenvolvidos

### Precedência de operadores

Foram analisados exemplos de avaliação de expressões, como `5 + 3 * 2` (resultado `11`) e `3 * (4 + 5)` (resultado `27`), mostrando como os parênteses alteram a ordem de resolução. A aula também propôs a reflexão sobre `20 - 1 + 19`, reforçando que operadores de mesma prioridade são executados da esquerda para a direita.

### Divisão inteira × divisão real

Foi demonstrado que `7 / 2` resulta em `3` quando os operandos são inteiros e em `3.5` quando são do tipo `float`.

### Funções matemáticas

Foram apresentados exemplos com `sqrt(25)`, que resulta em `5.00`, e `pow(2, 5)`, que resulta em `32.00`, utilizando `printf()` com `%.2f`.

---

## 📝 Exercícios

### Exercício 1 — Produtos recebidos no dia

**Enunciado:** Programa que lê a quantidade de produtos recebidos por um centro de distribuição no turno da manhã e no turno da tarde, calcula o total de produtos recebidos e exibe o resultado.

### Exercício 2 — Minutos desde o início do dia

**Enunciado:** Programa que lê a hora e os minutos de um determinado horário, calcula quantos minutos se passaram desde as 00h00 e exibe o resultado.

### Exercício 3 — Operações aritméticas

**Enunciado:** Programa que lê dois números inteiros, calcula a soma, a subtração do primeiro pelo segundo e a multiplicação entre eles, e exibe os resultados.

### Exercício 4 — Consumo mensal de energia

**Enunciado:** Programa que lê a potência de um equipamento (em watts) e a quantidade de horas de funcionamento por dia, calcula o consumo mensal em kWh com a fórmula `(potencia * horas_dia * 30) / 1000` e exibe o resultado com duas casas decimais.

### Exercício 5 — Índice de Massa Corporal (IMC)

**Enunciado:** Programa que lê o peso (em kg) e a altura (em metros) de uma pessoa, calcula o IMC com a fórmula `peso / altura²` e exibe o resultado com duas casas decimais.

### Exercício 6 — Revestimento com piso cerâmico

**Enunciado:** Programa que lê a largura e o comprimento de uma área a ser revestida e o valor unitário da caixa de piso, calcula a área total, a quantidade de caixas necessárias (considerando que cada caixa cobre 2,5 m² e que sempre deve ser comprada uma caixa inteira) e o custo total da compra, exibindo a quantidade de caixas e o custo total com duas casas decimais.

### Exercício 7 — Média aritmética de quatro números

**Enunciado:** Programa que lê quatro números reais, calcula a média aritmética com a fórmula `(num1 + num2 + num3 + num4) / 4` e exibe o resultado com duas casas decimais.

### Exercício 8 — Média ponderada

**Enunciado:** Programa que lê três notas, calcula a média ponderada considerando os pesos 1, 2 e 4 (`(nota1 * 1 + nota2 * 2 + nota3 * 4) / (1 + 2 + 4)`) e exibe o resultado com duas casas decimais.

### Exercício 9 — Distância entre dois pontos

**Enunciado:** Programa que lê as coordenadas (x1, y1) e (x2, y2) de dois pontos no plano cartesiano, calcula a distância euclidiana entre eles com a fórmula `√((x2 − x1)² + (y2 − y1)²)` e exibe o resultado.

### Exercício 10 — Alcance horizontal de um lançamento

**Enunciado:** Programa que lê a velocidade inicial de um lançamento (em m/s) e o ângulo de lançamento (em graus), converte o ângulo para radianos, calcula o alcance horizontal com a fórmula `(velocidade² * sin(2 * angulo)) / gravidade` e exibe o resultado com duas casas decimais.

### Exercício complementar — Cadastro de funcionários

**Enunciado:** Programa que lê os dados de um funcionário (nome, quantidade de dependentes e cargo ocupado) e exibe todas as informações cadastradas, para conferência dos dados registrados.

---

## 🎯 Objetivo da aula

Compreender como construir e avaliar expressões em linguagem C, utilizando corretamente os operadores e suas regras de precedência:

- **Operadores aritméticos** → realizar cálculos com números inteiros e reais.
- **Precedência e parênteses** → garantir que a expressão seja avaliada na ordem desejada.
- **Divisão inteira × real** → evitar resultados inesperados por causa do tipo dos operandos.
- **Biblioteca `math.h`** → utilizar funções matemáticas como `sqrt()`, `pow()` e `sin()`.

A aula também permitiu aplicar esses conceitos em situações práticas envolvendo somas, médias, conversões de unidades, IMC, distâncias e cálculos de física.
