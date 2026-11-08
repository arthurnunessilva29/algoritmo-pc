# 📘 Aula 07 — Exercícios e Projeto

Esta aula foi organizada em **duas partes**: o início do **Projeto 3 — Missão Orbital**, desenvolvido em equipe, e uma **lista de exercícios de revisão sobre estruturas de repetição**, realizada individualmente.

Na lista de exercícios, o foco foi analisar cada problema antes de programar, identificando os dados de entrada, os processamentos necessários, as condições envolvidas e a estrutura de repetição mais adequada (`for`, `while` ou `do...while`).

---

## 📚 Conteúdos praticados

### Estruturas de repetição

- 🔄 Escolha da estrutura adequada: `for`, `while` ou `do...while`
- Repetição controlada por quantidade
- Contadores e acumuladores
- Soma, média e comparação de valores
- Identificação do maior valor

### Condições e tratamento de dados

- Contagem de valores positivos, negativos e neutros
- Condições dentro de laços (`if` dentro de `for`/`while`)
- Leitura de strings sem espaços com `scanf("%49s", ...)`

### Desenvolvimento de projeto

- Organização da equipe e discussão da estratégia de solução
- Desenvolvimento do algoritmo
- Implementação e teste em linguagem C

---

## 💻 Exemplos desenvolvidos

### Leitura de string sem espaço em C

Foi apresentado como armazenar uma sequência de caracteres em uma variável `char municipio[50]` e lê-la com `scanf("%49s", municipio)`, o que limita a entrada a 49 caracteres para evitar *overflow*. Também foi destacado que, diferentemente das variáveis numéricas, **não se usa o operador `&`** antes do nome da variável, e que esse formato aceita apenas nomes sem espaços, como `Campinas`.

---

## 📝 Atividades

### Parte 1 — Projeto 3: Missão Orbital

**Descrição:** Projeto desenvolvido em equipes de até 3 alunos. Durante a atividade, a equipe organiza o trabalho, discute a estratégia de solução, desenvolve o algoritmo e implementa e testa o programa em linguagem C.

**Entrega:** Embora o projeto seja realizado em equipe, todos os integrantes entregam individualmente pelo Blackboard, identificando no envio os nomes dos demais componentes do grupo.

### Parte 2 — Exercícios de revisão: Estruturas de Repetição

Atividade individual. Antes de programar, analisar cada problema e escolher a estrutura de repetição mais adequada, executando e testando as soluções antes da entrega.

#### Exercício 1 — Análise de valores numéricos

**Enunciado:** Programa em C que lê inicialmente a quantidade de valores a serem analisados e, em seguida, lê os respectivos números reais. Ao final, apresenta a quantidade de valores positivos, a quantidade de valores negativos e o maior valor informado. O valor `0` é considerado neutro e não deve ser contabilizado como positivo nem negativo.

#### Exercício 2 — Vendas da semana

**Enunciado:** Programa em C que lê o valor das vendas de cada um dos 7 dias da semana e apresenta o total vendido na semana.

#### Exercício 3 — Aprovados na turma

**Enunciado:** Programa em C que lê a nota dos 10 alunos de uma turma e apresenta a quantidade de estudantes que obtiveram nota igual ou superior a 6,0, considerada suficiente para aprovação.

#### Exercício 4 — Temperatura dos municípios

**Enunciado:** Programa em C que lê o nome e a temperatura média de cada um dos cinco municípios de uma região e apresenta a temperatura média da região e a quantidade de municípios cuja temperatura média seja inferior a 10 °C. Para simplificar a entrada, os nomes dos municípios são considerados sem espaços.

---

## 🎯 Objetivo da aula

Revisar e consolidar o uso das estruturas de repetição e aplicar os conteúdos da disciplina em um projeto em equipe:

- **Analisar o problema antes de programar** → identificar entradas, processamentos, condições e a estrutura de repetição mais adequada.
- **Contadores e acumuladores** → contar ocorrências, somar valores e calcular médias.
- **Condições dentro de laços** → classificar e filtrar valores durante a repetição.
- **Trabalho em equipe** → planejar, desenvolver e testar uma solução em C com outros colegas.

A aula também permitiu praticar a leitura de textos sem espaços em C e aplicar essas estruturas em situações práticas envolvendo vendas, notas, temperaturas e análise de dados.
