# 📘 Aula 06 — Estruturas de Repetição

Nesta aula foram estudadas as **estruturas de repetição em linguagem C**, utilizadas para executar um determinado bloco de código várias vezes, de acordo com uma condição ou com uma quantidade definida.

Durante a aula, foram apresentados os comandos `for`, `while` e `do...while`, os laços aninhados, os laços de consistência para validação de dados e as instruções de controle de fluxo `break` e `continue`, além de exercícios práticos para aplicar esses conceitos.

---

## 📚 Conteúdos praticados

### Estruturas de repetição

- 🔄 Repetição controlada por quantidade: `for` (`para`)
- Repetição controlada por condição: `while` (`enquanto`)
- Repetição com execução mínima garantida: `do...while` (`faça...enquanto`)
- Contadores, acumuladores e variável de controle (inicialização, condição e atualização)
- Teste de mesa
- Loops infinitos e como evitá-los

### Padrões de repetição

- Laços aninhados (loop externo e loop interno)
- Laços de consistência para validação de dados
- Repetição encerrada por valor sentinela (como o valor `0`)

### Controle de fluxo

- `break` (`pare`): interrompe o laço
- `continue`: ignora o restante da iteração atual

---

## 💻 Exemplos desenvolvidos

### Tabuada

Algoritmo que solicita um número ao usuário, calcula e mostra a sua tabuada, acompanhado de um teste de mesa para `numero = 3`, mostrando a variação da variável de controle `i` a cada repetição.

### Comparação entre as estruturas

Foram apresentadas a sintaxe e o fluxo de execução de cada estrutura, com destaque para a diferença entre elas: o `for` reúne inicialização, condição e atualização na própria declaração do laço, o `while` testa a condição antes de executar o bloco e o `do...while` executa o bloco pelo menos uma vez, mesmo que a condição seja falsa desde o início.

### Laços aninhados

Foi demonstrado o uso de dois `for` aninhados para percorrer uma matriz, em que o loop externo percorre as linhas e, para cada repetição dele, o loop interno executa todas as suas repetições percorrendo as colunas.

### Laço de consistência

Exemplo em C com `do...while` que repete a leitura da nota do aluno enquanto o valor informado for menor que 0 ou maior que 10, terminando somente quando a entrada se torna válida.

### `break` e `continue`

Foi apresentado um `while (1)` que soma números até a digitação de `0`, encerrado com `break`, e um `for` que percorre de 0 a 10 ignorando os números pares com `continue`.

---

## 📝 Exercícios

### Exercício 1 — Caixa de compras

**Enunciado:** Algoritmo e programa em C que leem o CPF do cliente e, em seguida, os preços dos produtos adquiridos. A entrada continua até que seja informado o valor `0`, indicando o encerramento da compra. Ao final, o programa apresenta o CPF do cliente e o valor total da compra.

### Exercício 2 — Desempenho da turma

**Enunciado:** Algoritmo e programa em C que leem as notas de 5 estudantes, calculam a média da turma e determinam a maior nota obtida.

### Exercício 3 — Soma dos números ímpares

**Enunciado:** Programa em C que lê números inteiros e soma somente os valores ímpares. O número `0` indica o encerramento da entrada de dados. Ao final, o programa apresenta a soma dos números ímpares informados.

### Exercício 4 — Notas com validação

**Enunciado:** Algoritmo e programa em C que leem a quantidade de alunos da turma e, para cada estudante, solicitam sua nota. Caso o valor informado seja menor que 0 ou maior que 10, o programa solicita uma nova nota e só prossegue quando um valor válido for fornecido. Ao final, calcula e apresenta a média da turma.

### Exercício 5 — Sistema de senha

**Enunciado:** Algoritmo e programa em C que solicitam o número da conta e a senha do cliente, considerando como credenciais válidas a conta `12345` e a senha `123`. O usuário pode realizar no máximo três tentativas. O programa encerra imediatamente quando as credenciais corretas forem fornecidas ou bloqueia o acesso após a terceira tentativa incorreta. Deve ser utilizado `do...while`.

### Exercício 6 — Autoatendimento de restaurante

**Enunciado:** Algoritmo e programa em C que apresentam o cardápio e permitem ao cliente adicionar produtos informando seus códigos. Após cada produto válido, o programa apresenta o subtotal do pedido, e o código `0` finaliza a compra e apresenta o valor total. Deve ser utilizado `do...while`.

Cardápio da **Cafeteria Anália**:

| Código | Produto | Valor |
|---|---|---|
| 1 | X-Burger | R$ 18,90 |
| 2 | Batata frita | R$ 9,50 |
| 3 | Suco | R$ 10,00 |
| 4 | Pudim | R$ 12,00 |
| 5 | Sair | — |

---

## 🎯 Objetivo da aula

Praticar a utilização das estruturas de repetição e compreender quando utilizar cada uma delas:

- **`for`** → quando a quantidade de repetições é conhecida.
- **`while`** → quando a repetição depende de uma condição.
- **`do...while`** → quando o código precisa ser executado pelo menos uma vez antes da verificação da condição.

A aula também permitiu aplicar essas estruturas em situações práticas envolvendo cálculos, validações, médias, somas, controle de tentativas e menus de atendimento, além de usar `break` e `continue` para controlar o fluxo dos laços.
