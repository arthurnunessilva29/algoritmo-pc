# 📘 Aula 10 — Funções e Modularização

Nesta aula foram estudadas as **funções e a modularização em linguagem C**, que permitem dividir um programa em partes menores, cada uma responsável por uma tarefa, evitando repetição de código e facilitando a manutenção.

Durante a aula, foram apresentados a definição e a chamada de funções, os parâmetros e o retorno de valores, a passagem por valor e por referência, o escopo de variáveis e as estruturas de dados heterogêneas (`struct`), além de exercícios práticos para aplicar esses conceitos.

---

## 📚 Conteúdos praticados

### Funções

- 🧩 Modularização e decomposição de problemas
- Definição e chamada de funções
- Anatomia de uma função: tipo retornado, nome, lista de parâmetros e bloco de instruções
- Funções com retorno e funções sem retorno (`void`)
- Argumentos × parâmetros
- Protótipo, chamada e implementação

### Passagem de dados

- Passagem por valor (a função recebe uma cópia)
- Escopo de variável (variáveis locais)
- Passagem por referência com ponteiros (`*` e `&`)
- Arrays como parâmetros de função

### Estruturas heterogêneas

- `struct`
- `typedef` para simplificar a declaração
- Funções que recebem `struct` e ponteiros para `struct`
- Vetor de estruturas

### Aplicações

- Programas com repetição controlada pelo usuário (`s/n`)
- Sistema com menu e funções de cadastro, consulta e listagem

---

## 💻 Exemplos desenvolvidos

### Reflexão inicial

Foi apresentada a situação de um sistema que calcula o valor final de produtos com desconto, em que a mesma fórmula aparece em vários lugares do programa. A reflexão levou à pergunta de como escrever essa regra apenas uma vez e reutilizá-la, motivando o uso de funções.

### Funções que já utilizamos

Foi mostrado que funções como `printf()`, `scanf()`, `fopen()`, `fclose()` e a própria `main()` já faziam parte dos programas, e que a novidade da aula é aprender a criar as próprias funções.

### Função sem retorno

Foi apresentada a função `void exibir_linha(void)`, que apenas executa uma ação (exibir uma linha) e é chamada por `exibir_linha();`.

### Passagem por valor

Foi analisada a função `void dobro(int numero)`, que multiplica o parâmetro por 2. Mesmo que o usuário digite 5, a variável original continua valendo 5 depois da chamada, pois a função altera apenas a cópia local.

### Atividade rápida

Foi proposto definir nome, parâmetros e tipo de retorno para três funções: converter Celsius para Fahrenheit, mostrar um menu e determinar o maior entre dois valores.

---

## 📝 Exercícios

### Exercício 1 — Frete da transportadora

**Enunciado:** Programa em C que lê o peso do pacote e utiliza uma função para calcular e retornar o valor do frete, considerando R$ 4,50 por quilograma. O programa pergunta ao final se o usuário deseja calcular outro frete (`s/n`). Como extensão, criar também uma função para exibir o relatório.

### Exercício 2 — Troca de valores

**Enunciado:** Programa em C com uma função que recebe dois valores e troca seus conteúdos, exibindo os valores de `a` e `b` antes e depois da troca. Para alterar as variáveis originais, é necessário utilizar ponteiros.

### Exercício 3 — Média e situação do aluno

**Enunciado:** Programa em C que solicita duas notas de um aluno, calcula a média e informa se ele está aprovado (média igual ou superior a 7) ou reprovado, utilizando funções. O programa continua sendo executado enquanto o usuário quiser digitar notas de outro aluno.

### Exercício 4 — Área de ambientes

**Enunciado:** Programa em C que lê a largura e o comprimento (em metros) de um ambiente retangular, utiliza uma função `calcularArea()` para calcular a área, exibe o resultado e permite calcular quantas áreas o usuário precisar.

### Exercício 5 — Estrutura Aluno

**Enunciado:** Criar uma estrutura `Aluno` com os campos `rgm`, `nota1`, `nota2` e `media`, e implementar a função `void calcular_media(Aluno *aluno);`, que atualiza o campo `media`. O programa lê o RGM e as duas notas e exibe o RGM e a média.

### Exercício 6 — Vetor de alunos

**Enunciado:** Programa em C que armazena os dados de 3 alunos em um vetor de estruturas. Para cada aluno, lê o RGM e as duas notas e calcula a média com `calcular_media()`, que recebe o endereço da estrutura correspondente. Depois de cadastrar todos os alunos, o programa solicita um RGM para consulta e exibe o RGM e a média caso seja encontrado, ou uma mensagem de erro caso contrário.

### Desafio — Sistema acadêmico com menu

**Enunciado:** Programa em C que apresenta continuamente o menu abaixo e armazena até 10 alunos, utilizando funções para cadastro, consulta, listagem e cálculo da média:

```
===== SISTEMA ACADÊMICO =====

1 - Cadastrar aluno
2 - Consultar aluno por RGM
3 - Listar alunos
4 - Sair
```

Funções sugeridas:

```c
void calcular_media(Aluno *aluno);
void cadastrar_aluno(Aluno alunos[], int *quantidade);
void consultar_aluno(Aluno alunos[], int quantidade);
void listar_alunos(Aluno alunos[], int quantidade);
```

---

## 🎯 Objetivo da aula

Compreender como organizar um programa em módulos reutilizáveis e como as funções recebem e devolvem dados:

- **Funções com e sem retorno** → encapsular tarefas e reutilizá-las em vários pontos do programa.
- **Parâmetros por valor** → entender que a função trabalha com uma cópia dos dados.
- **Ponteiros em parâmetros** → permitir que uma função altere variáveis do programa principal.
- **`struct`** → agrupar dados de tipos diferentes em uma única estrutura.

A aula também permitiu aplicar esses conceitos em situações práticas envolvendo fretes, médias, áreas, troca de valores e um sistema acadêmico completo com menu.
