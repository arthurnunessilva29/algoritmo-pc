# 📘 Aula 04 — Estruturas de Decisão

Nesta aula foram estudadas as **estruturas de decisão em linguagem C**, utilizadas para controlar o fluxo de execução de um programa, permitindo que caminhos alternativos sejam seguidos de acordo com o resultado de uma ou mais condições.

Durante a aula, foram apresentados os operadores relacionais e lógicos, as estruturas `if`, `if...else`, `if...else` aninhado e `switch...case`, além de exercícios práticos que mostram a importância de tratar corretamente cada situação possível.

---

## 📚 Conteúdos praticados

### Operadores para condições

- ⚖️ Operadores relacionais (`==`, `!=`, `>`, `>=`, `<`, `<=`)
- Operadores lógicos (`&&`, `||`, `!`) e tabela-verdade
- Diferença entre atribuição (`=`) e comparação (`==`)
- Prioridade dos grupos de operadores (parênteses, aritméticos, relacionais e lógicos)

### Estruturas de decisão

- Estrutura sequencial
- Decisão simples: `if` (`se`)
- Decisão composta: `if...else` (`se...senão`)
- Decisão aninhada: `if...else if...else`
- Seleção múltipla: `switch...case` (`escolha...caso`)
- Comandos `break` (`pare`) e `default` (`padrão`)

### Boas práticas

- Uso de chaves `{}` mesmo em blocos com uma única instrução
- Indentação para facilitar a leitura
- Tratamento de situações especiais (como equações sem raízes reais ou opções inválidas)
- Diferença entre código que compila e código correto

---

## 💻 Exemplos desenvolvidos

### Expressões lógicas e relacionais

Foram avaliadas expressões como `A > C`, `A == D`, `A > B e C > D` e `!(B == F)`, considerando valores atribuídos às variáveis A, B, C, D e F, para praticar o resultado verdadeiro ou falso de cada comparação.

### Decisão simples e composta

Foram apresentados algoritmos em pseudocódigo que mostram um número apenas se ele for par (`se`) e que informam se um número é par ou ímpar (`se...senão`), além da mesma estrutura em C.

### Decisão aninhada

Foi demonstrada a estrutura `if...else` aninhada, com o fluxo de execução que testa a condição 1, depois a condição 2 e, por fim, executa o bloco correspondente.

### Resoluções incorretas × corretas

Foram comparadas resoluções incorretas e corretas para as situações de aprovação por frequência e média e de classificação do IMC. Ao usar vários `se` independentes em vez de `senão se`, mais de uma mensagem pode ser exibida para o mesmo caso, mostrando a importância de encadear as condições.

### Escolha-caso

Foram apresentados exemplos de `escolha...caso` em pseudocódigo e de `switch...case` em C, com as observações sobre tipos compatíveis nos `case`, valores duplicados, `default` opcional e uso do `break`.

---

## 📝 Exercícios

### Exercício 1 — Equação do segundo grau

**Enunciado:** Algoritmo e programa em C que leem os coeficientes `a`, `b` e `c` de uma equação do segundo grau do tipo `ax² + bx + c = 0`, considerando que ela possui duas raízes reais, e calculam e exibem os valores de `x₁` e `x₂` utilizando a fórmula de Bhaskara.

> **Discussão em aula:** para `a = 2`, `b = 3` e `c = 2`, o programa exibiu um resultado inesperado (`nan`), pois o discriminante é negativo e não existem raízes reais. A reflexão proposta foi que um código que compila não é necessariamente um código correto, já que faltou tratar uma situação matemática.

### Exercício 2 — Situação acadêmica pela média

**Enunciado:** Algoritmo e programa em C que leem as duas notas de um aluno, calculam sua média aritmética e informam sua situação: aprovado se a média for maior ou igual a 6,0 e reprovado caso contrário.

### Exercício 3 — Aprovação por nota e frequência

**Enunciado:** Algoritmo e programa em C que leem a média final e o percentual de frequência de um aluno e informam sua situação acadêmica:

- frequência inferior a 75% → **Reprovado por falta**;
- frequência maior ou igual a 75% e média inferior a 6,0 → **Reprovado por nota**;
- nos demais casos → **Aprovado**.

### Exercício 4 — Classificação pelo IMC

**Enunciado:** Programa em C que lê o peso (em kg) e a altura (em metros) de uma pessoa, calcula o IMC com a fórmula `peso / altura²` e exibe a mensagem `Você está na categoria <categoria>`, de acordo com a tabela:

| Categoria | IMC |
|---|---|
| Abaixo do peso | Abaixo de 20,0 |
| Peso normal | Entre 20,0 e 24,9 |
| Sobrepeso | Entre 25,0 e 29,9 |
| Obeso | Entre 30,0 e 39,9 |
| Obeso mórbido | 40,0 e acima |

### Exercício 5 — Hospedagem em hotel (`if...else`)

**Enunciado:** Programa em C que lê o código do tipo de diária e a quantidade de diárias desejada pelo cliente, calcula e exibe o valor total da hospedagem e, caso o código seja inexistente, exibe a mensagem `Tipo inválido!!!`. Os valores são:

| Tipo | Código | Valor da diária |
|---|---|---|
| Simples | S | R$ 300,00 |
| Duplo | D | R$ 450,00 |
| Triplo | T | R$ 500,00 |

### Exercício 5.1 — Hospedagem em hotel (`switch...case`)

**Enunciado:** Mesmo problema do Exercício 5, agora resolvido com a estrutura `switch...case`, para comparar as duas formas de implementar a decisão.

### Exercício 6 — Financiamento em parcelas

**Enunciado:** Algoritmo e programa em C que leem o valor total da compra e a quantidade de parcelas desejada pelo cliente, calculam o valor final aplicando a taxa de juros correspondente e exibem o valor total financiado e o valor de cada parcela. As taxas são:

| Nº de parcelas | % de juros |
|---|---|
| 2 | 3 |
| 4 | 7 |
| 6 | 9 |
| 8 | 12 |

Na resolução apresentada em aula, uma quantidade de parcelas diferente das listadas resulta na mensagem de número de parcelas incorreto.

### Exercício 7 — Média aritmética ou ponderada

**Enunciado:** Algoritmo que lê duas notas de um aluno e um caractere indicando o tipo de média a ser calculada, sendo `A` para média aritmética e `P` para média ponderada. Na opção `P`, a média é calculada com peso 3 para a primeira nota e peso 7 para a segunda. Ao final, o algoritmo exibe o valor da média calculada.

---

## 🎯 Objetivo da aula

Compreender como fazer um programa tomar decisões e escolher o caminho adequado a partir de condições, e quando utilizar cada estrutura:

- **`if`** → quando um bloco deve ser executado somente se a condição for verdadeira.
- **`if...else`** → quando existem dois caminhos possíveis, um para cada resultado da condição.
- **`if...else` aninhado** → quando várias condições precisam ser testadas em sequência.
- **`switch...case`** → quando há várias alternativas baseadas na igualdade de uma única variável.

A aula também permitiu aplicar essas estruturas em situações práticas envolvendo equações, médias, frequência, IMC, hospedagem e financiamento, reforçando a importância de prever e tratar todos os casos possíveis.
