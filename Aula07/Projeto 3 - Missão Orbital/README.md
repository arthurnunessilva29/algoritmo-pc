# 🚀 Projeto 3 — Missão Orbital: Simulador de Treinamento Espacial

Atividade prática desenvolvida em sala, de forma **individual ou em grupos de até 3 alunos**. A proposta é criar um programa em C que valida pontuações, controla etapas e classifica o desempenho de cadetes.

| Modalidade | Realização | Formato |
|---|---|---|
| Individual ou grupos de até 3 alunos | Desenvolvimento durante a aula prática | Código-fonte em C e registro da execução |

---

## 📚 Conteúdos mobilizados

| Conteúdo | Aplicação no programa |
|---|---|
| Condicionais | Classificar o desempenho e reconhecer a pontuação máxima |
| `for` | Controlar as três etapas do treinamento |
| `while` | Repetir a leitura enquanto a pontuação estiver fora do intervalo de 0 a 100 |
| `do...while` | Permitir o treinamento de outro cadete antes de encerrar o sistema |
| Contador e acumulador | Identificar a etapa atual e calcular a pontuação total |

---

## 📝 Enunciado

### Contexto

A Agência Orbital está selecionando equipes para uma missão de exploração. Cada cadete realiza **três etapas de treinamento**. O sistema deve receber as pontuações, impedir valores inválidos, calcular o desempenho e informar a classificação final. Ao término, o operador pode iniciar o treinamento de outro cadete ou encerrar o programa.

### Dados do programa

| Variável sugerida | Finalidade | Tipo |
|---|---|---|
| `codigo_cadete` | Identificação numérica do participante | `int` |
| `etapa` | Controla as três etapas do treinamento | `int` |
| `pontuacao` | Pontuação digitada em cada etapa, de 0 a 100 | `int` |
| `pontuacao_total` | Acumula as três pontuações | `int` |
| `media` | Armazena a média das etapas | `float` |
| `continuar` | Indica se outro cadete será avaliado | `int` |

### Funcionamento obrigatório

| Etapa | O programa deve | Estrutura |
|---|---|---|
| 1 | Ler o código numérico do cadete e zerar o total | Entrada e atribuição |
| 2 | Executar exatamente três etapas de treinamento | `for` |
| 3 | Aceitar somente pontuações entre 0 e 100, solicitando novamente os valores inválidos | `while` |
| 4 | Somar as pontuações e calcular a média real | Acumulador |
| 5 | Classificar o desempenho conforme as regras abaixo | `if/else` |
| 6 | Perguntar se o operador deseja avaliar outro cadete | `do...while` |

### Classificação do treinamento

| Média | Resultado | Mensagem sugerida |
|---|---|---|
| 85,0 ou mais | Comandante da missão | Treinamento concluído com excelência. |
| 70,0 a 84,99 | Piloto aprovado | Cadete autorizado para a missão. |
| 50,0 a 69,99 | Cadete em recuperação | Novo treinamento recomendado. |
| Abaixo de 50,0 | Treinamento reiniciado | Cadete ainda não autorizado. |

**Condição adicional:** se o total for igual a **300 pontos**, o programa exibe também a mensagem `PONTUAÇÃO MÁXIMA!`, controlada por uma condicional simples.

### Caso de teste

```
===== MISSÃO ORBITAL =====
Código do cadete: 17

Pontuação da etapa 1: 85
Pontuação da etapa 2: 70
Pontuação da etapa 3: 95

---------- RESULTADO ----------
Cadete: 17
Pontuação total: 250 pontos
Média: 83.33
Classificação: PILOTO APROVADO
-------------------------------

Avaliar outro cadete? 1-Sim | 0-Não: 0
Sistema encerrado.
```

### Testes mínimos

| Teste | Pontuações | Média | Resultado esperado |
|---|---|---|---|
| 1 | 85, 70 e 95 | 83,33 | Piloto aprovado |
| 2 | 90, 85 e 95 | 90,00 | Comandante da missão |
| 3 | 40, 50 e 55 | 48,33 | Treinamento reiniciado |
| Validação | 120, depois 80 | — | Recusar 120 e aceitar 80 |

### Etapas de trabalho em aula

| Momento | Atividade | Referência |
|---|---|---|
| Planejamento | Identificar entradas, processamento, condições e repetições | 10 a 15 min |
| Construção | Criar o programa por partes e compilar após cada bloco | 40 a 50 min |
| Testes | Executar os quatro testes mínimos e corrigir os resultados | 15 a 20 min |
| Entrega | Organizar o arquivo, registrar a execução e explicar a solução | 10 a 15 min |

### Divisão sugerida para grupos

| Integrante | Responsabilidade principal |
|---|---|
| 1 | Estrutura do programa, entradas e laço `for` |
| 2 | Validação com `while` e cálculos de total e média |
| 3 | Classificação, repetição com `do...while` e testes |

### Entregas

- Arquivo `.c` compilado e testado (o PDF indica o nome `projeto2_missao_orbital.c`)
- Captura de tela com uma execução completa
- Nomes e RGMs dos integrantes em comentário no início do código
- Envio pelo link do Blackboard, dentro do prazo indicado pelo professor

### Regras importantes

- O código deve utilizar `for`, `while`, `do...while` e estruturas condicionais
- Todos os integrantes devem participar e conseguir explicar a sua parte
- Nomes de variáveis claros, indentação correta e mensagens que orientem o usuário
- Não é necessário utilizar vetores, matrizes, funções próprias ou manipulação de arquivos
- O uso de IA é permitido como apoio, mas o grupo deve revisar, testar e compreender todo o código e declarar em que parte e para qual finalidade a ferramenta foi utilizada

### Critérios de avaliação

| Critério | Descrição |
|---|---|
| Funcionamento | O programa compila, executa, calcula corretamente e permite avaliar outro cadete |
| Laços de repetição | Uso correto de `for`, `while` e `do...while` nas finalidades indicadas |
| Condicionais | Validação, classificação e mensagem de pontuação máxima corretas |
| Organização | Variáveis claras, indentação e saída legível |
| Participação e explicação | O grupo trabalhou durante a aula e demonstrou compreensão da solução |

### Desafios extras (opcionais)

- Contar quantas etapas tiveram pontuação igual ou superior a 80
- Exibir a maior e a menor pontuação sem utilizar vetores
- Validar também a resposta 1-Sim ou 0-Não
- Personalizar o relatório com nome da nave e código da missão

### Checklist final

- [ ] Compilou?
- [ ] Validou de 0 a 100?
- [ ] Repetiu três etapas?
- [ ] Classificou corretamente?
- [ ] Testou outro cadete?

---

## 🎯 Objetivo do projeto

Desenvolver, testar e explicar um programa em linguagem C que combine estruturas condicionais e laços de repetição em uma situação completa, curta e adequada ao tempo de aula:

- **`for`** → controlar a quantidade fixa de etapas do treinamento.
- **`while`** → validar a entrada, repetindo a leitura até que o valor seja aceito.
- **`do...while`** → permitir avaliar outro cadete, executando o bloco ao menos uma vez.
- **Condicionais** → classificar o desempenho e reconhecer a pontuação máxima.

O projeto também reforça o uso de contadores e acumuladores, o planejamento da solução antes de programar e a capacidade de testar diferentes caminhos de execução e explicar cada estrutura utilizada.

---

> **Créditos:** projeto original proposto pelo Professor Vinícius Alves e adaptado para utilização em aula.
