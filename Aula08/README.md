# 📘 Aula 08 — Estruturas de Dados Básicas

Nesta aula foram estudadas as **estruturas de dados homogêneas em linguagem C**, utilizadas para armazenar vários valores do mesmo tipo em uma única estrutura, identificados por um nome e por índices.

Durante a aula, foram apresentados os vetores (arrays unidimensionais), as matrizes (arrays bidimensionais), os padrões de processamento mais comuns e a representação de textos como vetores de caracteres, além de exercícios práticos para aplicar esses conceitos.

---

## 📚 Conteúdos praticados

### Vetores

- 📦 Estruturas de dados homogêneas e arrays em C
- Índice × conteúdo (posição e valor são coisas diferentes)
- Índices começando em zero e ausência de verificação de limites
- Declaração e inicialização de vetores
- Leitura com `scanf()` e uso do `&` na posição do vetor
- Percurso de vetores com `for`

### Padrões de processamento em vetores

- Acumulação (soma dos elementos)
- Contagem (elementos que satisfazem uma condição)
- Maior valor e menor valor
- Média e quantidade de valores acima ou abaixo da média

### Matrizes

- Arrays bidimensionais: linhas e colunas
- Declaração e inicialização de matrizes
- Percurso com dois `for` aninhados (laço externo nas linhas e laço interno nas colunas)
- Soma de uma linha, soma de uma coluna e processamento de toda a matriz
- Arrays com mais de duas dimensões (apresentação)

### Strings

- String como vetor de caracteres (`char`)
- Funções `strlen()`, `strcmp()` e `strcasecmp()`
- Vetores de textos com `const char *` (introdução a ponteiros)

### Pensamento computacional

- Decomposição: leitura → cálculo → busca do resultado
- Reconhecimento de padrão: cada linha da matriz é processada da mesma forma

---

## 💻 Exemplos desenvolvidos

### Desafio inicial

A aula começou com o desafio de registrar os salários de cinco funcionários e exibi-los na mesma ordem em que foram informados, motivando o uso de vetores em vez de cinco variáveis separadas.

### Vetores e matrizes

Foram apresentados exemplos de declaração e inicialização de `float salarios[5]`, `int vendas[5]` e `int notas[3][4]`, mostrando como acessar e alterar elementos, percorrer o vetor com `for` e armazenar os dados antes de processá-los, de modo que o mesmo conjunto possa ser usado várias vezes sem pedir os dados novamente.

### Cuidados com arrays

Foram destacados os riscos de acessar posições fora dos limites do array, que produzem comportamento indefinido, e de usar um array sem inicializá-lo, caso em que seus elementos possuem valores indeterminados.

---

## 📝 Exercícios

### Exercício 1 — Salários dos funcionários

**Enunciado:** Programa em C que lê o salário de 4 funcionários, armazena os valores em um vetor e exibe os salários na mesma ordem em que foram digitados.

### Exercício 2 — Medições de desempenho

**Enunciado:** Programa em C que lê 8 valores reais e os armazena em um vetor, calcula a média dos valores e determina quantos valores ficaram acima da média.

### Exercício 3 — Indicadores salariais

**Enunciado:** Programa em C que lê e armazena os salários de 6 funcionários e, em seguida, calcula a média salarial, determina o maior salário e conta quantos salários estão abaixo da média.

### Exercício 4 — Vendas da cafeteria

**Enunciado:** Programa em C que lê as vendas de 3 produtos durante 4 dias (cada linha representa um produto e cada coluna, um dia), calcula o total vendido de cada produto e o total geral de itens vendidos.

### Desafio — Vendas personalizadas

**Enunciado:** Criar um vetor para os dias da semana e outro para os produtos e personalizar o Exercício 4, de modo que as mensagens de entrada e de saída mostrem o nome do produto e do dia (por exemplo, `Digite a qte de cafés vendidos na seg:`). Utiliza vetores de textos declarados com `const char *`.

### Exercício 5 — Médias dos estudantes

**Enunciado:** Programa em C que lê as 4 notas de 3 estudantes, calcula e exibe a média de cada estudante e identifica o estudante com a maior média.

### Exercício 6 — Temperaturas da semana

**Enunciado:** Programa em C que lê as 7 temperaturas máximas de uma semana, armazena-as em um vetor e calcula a média semanal, a maior temperatura, a menor temperatura e quantos dias ficaram acima da média.

---

## 🎯 Objetivo da aula

Compreender como organizar e processar conjuntos de dados do mesmo tipo em linguagem C:

- **Vetores** → armazenar uma sequência de valores acessados por um índice.
- **Matrizes** → representar dados organizados em linhas e colunas.
- **`for` e `for` aninhados** → percorrer vetores e matrizes.
- **Padrões de processamento** → somar, contar, calcular médias e encontrar o maior e o menor valor.

A aula também permitiu aplicar essas estruturas em situações práticas envolvendo salários, vendas, notas e temperaturas, além de introduzir strings como vetores de caracteres.
