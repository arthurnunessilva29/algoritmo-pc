# 📘 Aula 09 — Manipulação de Arquivos

Nesta aula foi estudada a **manipulação de arquivos de texto em linguagem C**, que permite gravar dados em disco e recuperá-los depois, mesmo após o encerramento do programa.

Durante a aula, foi apresentada uma introdução a ponteiros, necessária para entender o tipo `FILE *`, e em seguida foram estudados a abertura, o fechamento e os modos de acesso de arquivos, as funções de leitura e escrita e o processamento de dados armazenados, além de exercícios práticos para aplicar esses conceitos.

---

## 📚 Conteúdos praticados

### Ponteiros (introdução)

- 📍 Variáveis têm valor e endereço
- Operador `&` para obter o endereço de uma variável
- Ponteiro: variável que armazena o endereço de outra variável
- `FILE *arquivo` como referência ao fluxo aberto

### Arquivos

- 💾 Persistência de dados
- Arquivos de texto × arquivos binários (nesta aula, somente arquivos de texto)
- Fluxo básico: declarar `FILE *`, abrir com `fopen()`, verificar se a abertura funcionou (`NULL`), ler ou escrever e fechar com `fclose()`
- Modos de acesso: `"r"` (leitura), `"w"` (escrita, apaga o conteúdo anterior) e `"a"` (acréscimo, escreve no final)

### Escrita e leitura

- Da tela para o arquivo: `printf()` → `fprintf()`, `scanf()` → `fscanf()`, `puts()` → `fputs()`, `getchar()` → `fgetc()` e `fgets(..., stdin)` → `fgets(..., arquivo)`
- Leitura linha por linha com `fgets()`
- Leitura formatada com `fscanf()`
- Posição atual de leitura e `rewind()`

### Processamento de dados armazenados

- Contagem de registros, totais, médias, maior e menor valor e seleção por condição
- Padrão de raciocínio: **entrada → processamento → saída**
- Menu com repetição para cadastro e relatório

---

## 💻 Exemplos desenvolvidos

### Persistência de dados

A aula começou com a reflexão de que, ao encerrar um programa, os dados guardados em variáveis desaparecem. Foi mostrado como gravar esses dados em um arquivo para recuperá-los depois e compartilhá-los com outros programas.

### Variáveis e ponteiros

Foi apresentado um exemplo em que uma variável `idade` possui valor e endereço, e um ponteiro `p` guarda o endereço de `idade`.

### Fluxo básico de manipulação de arquivos

Foram demonstrados a declaração de `FILE *arquivo`, a abertura com `fopen("dados.txt", "r")`, a verificação de `NULL`, o fechamento com `fclose()` e o cuidado de que abrir um arquivo existente com `"w"` elimina o conteúdo anterior.

### Planejamento dos exercícios

Para os Exercícios 1, 4 e 6, a aula apresentou o planejamento em formato de entrada, processamento e saída, incluindo o fluxograma do menu do Exercício 6.

---

## 📝 Exercícios

### Exercício 1 — Gerar tabuada em arquivo

**Enunciado:** Algoritmo e programa em C que leem um número inteiro e gravam em um arquivo chamado `tabuada.txt` as multiplicações desse número de 0 a 10, de modo que a tabuada possa ser consultada depois, mesmo após encerrar o programa.

### Exercício 2 — Consumo semanal de água

**Enunciado:** Algoritmo e programa em C que leem a quantidade de registros a serem cadastrados e, para cada um, o dia da semana e o consumo de água em litros. Os dados são acrescentados ao arquivo `consumo.txt`, com uma linha para cada registro, sem apagar as informações já armazenadas.

### Exercício 3 — Exibir arquivo na tela

**Enunciado:** Algoritmo e programa em C que abrem o arquivo `tabuada.txt`, leem todas as linhas e exibem seu conteúdo na tela.

### Exercício 4 — Notas dos estudantes

**Enunciado:** Algoritmo e programa em C que abrem o arquivo `notas.txt`, com o RGM e a nota final de cada estudante, e determinam a quantidade de estudantes, a média da turma, a maior nota e a quantidade de alunos aprovados (nota maior ou igual a 6,0).

### Exercício 5 — Vendas da loja

**Enunciado:** Algoritmo e programa em C que leem o arquivo `vendas.txt`, com o código e o valor de cada venda concluída, e exibem a quantidade de vendas, o total vendido e o maior valor registrado. O arquivo de entrada pode ser criado no bloco de notas ou por um programa que armazene os dados.

### Exercício 6 — Consumo de energia com menu

**Enunciado:** Algoritmo e programa em C para manter o histórico mensal de consumo de energia elétrica no arquivo `energia.txt`, com o número do mês e o consumo em kWh de cada registro. O programa apresenta o menu a seguir e o repete até que a opção 3 seja escolhida:

```
1- Cadastrar consumo
2- Exibir relatório
3- Sair
```

---

## 🎯 Objetivo da aula

Compreender como armazenar e recuperar dados de forma persistente em arquivos de texto:

- **`fopen()` e `fclose()`** → abrir e fechar arquivos, verificando se a abertura funcionou.
- **Modos `"r"`, `"w"` e `"a"`** → escolher entre leitura, escrita com substituição e acréscimo de dados.
- **`fprintf()`, `fgets()` e `fscanf()`** → gravar e ler os dados em arquivos.
- **Entrada → processamento → saída** → processar registros armazenados, calculando totais, médias e valores máximos.

A aula também permitiu aplicar esses conceitos em situações práticas envolvendo tabuadas, consumo de água e energia, notas e vendas, além de combinar arquivos, menu e repetição em uma aplicação completa.
