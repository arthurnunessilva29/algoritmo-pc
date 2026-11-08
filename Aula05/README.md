# 🏆 Projeto 1 — Arena Tech: Planejamento e Viabilidade da Maratona Gamer

Projeto desenvolvido em aula, em **duplas ou trios**, com **avaliação por pares**. A proposta é criar um programa em C que calcula custos, analisa recursos e decide sobre a realização de um evento.

| Modalidade | Entrega | Formato |
|---|---|---|
| Duplas ou trios | Desenvolvimento em aula + avaliação por pares | Código-fonte em C + relatório de testes e revisão |

---

## 📚 Conteúdos mobilizados

- Estrutura básica de um programa em C e uso de `#include <stdio.h>`
- Variáveis dos tipos `int` e `float`
- Entrada e saída de dados com `scanf()` e `printf()`
- Operadores aritméticos, atribuição, parênteses e precedência
- Divisão real, conversão de tipos e formatação com duas casas decimais
- Operadores relacionais e lógicos (`&&`, `||`, `!`)
- Estruturas condicionais `if`, `if...else` e `if...else if...else`
- Uso opcional da biblioteca `math.h` e da função `ceil()`

---

## 📝 Enunciado

### Contexto

A turma foi convidada a organizar a **Arena Tech**, uma pequena maratona gamer no campus. Antes de confirmar o evento, a equipe precisa estimar a quantidade de times, o consumo de energia e os custos envolvidos, além de verificar se a infraestrutura disponível é suficiente. Além de realizar os cálculos, o programa deve **analisar os resultados e emitir um diagnóstico sobre a viabilidade do evento**.

### Dados de entrada

O programa deve ler pelo teclado as seguintes informações:

| Variável sugerida | Informação | Tipo |
|---|---|---|
| `qte_participantes` | Quantidade total de participantes | `int` |
| `qte_jogadores_por_time` | Quantidade de jogadores em cada time | `int` |
| `qte_computadores` | Quantidade de computadores disponíveis | `int` |
| `potencia` | Potência média de cada computador, em watts | `float` |
| `duracao` | Duração do evento, em horas | `float` |
| `preco_kwh` | Preço de 1 kWh de energia | `float` |
| `preco_kit` | Preço de um kit de alimentação por participante | `float` |
| `outros_custos` | Outros custos do evento | `float` |
| `orcamento` | Orçamento máximo disponível para o evento | `float` |

### Cálculos obrigatórios

| Resultado | Expressão de referência |
|---|---|
| Quantidade de times | `qte_participantes / qte_jogadores_por_time`, arredondado para cima |
| Consumo de energia (kWh) | `(qte_computadores * potencia * duracao) / 1000` |
| Custo da energia | `consumo_energia * preco_kwh` |
| Custo da alimentação | `qte_participantes * preco_kit` |
| Custo total | `custo_energia + custo_alimentacao + outros_custos` |
| Custo por participante | `custo_total / qte_participantes` |
| Saldo do orçamento | `orcamento - custo_total` |

> 💡 Para calcular times incompletos, pode-se usar `ceil()` com `#include <math.h>`. No Linux/Codespaces, a compilação pode exigir: `gcc projeto1.c -o projeto1 -lm`

### Decisões obrigatórias

#### Infraestrutura

- `computadores >= participantes` → **INFRAESTRUTURA SUFICIENTE**
- `computadores < participantes` → **INFRAESTRUTURA INSUFICIENTE**, exibindo também a quantidade faltante

#### Consumo de energia

| Condição | Classificação |
|---|---|
| `consumo <= 20` | BAIXO |
| `20 < consumo <= 40` | MODERADO |
| `consumo > 40` | ALTO |

#### Orçamento (margem de segurança de 5%)

- `custo_total > orcamento` → **ACIMA DO ORÇAMENTO**
- `custo_total <= orcamento` e saldo menor ou igual a 5% do orçamento → **NO LIMITE DO ORÇAMENTO**
- Caso contrário → **DENTRO DO ORÇAMENTO**

#### Decisão final do evento

- **NÃO RECOMENDADO** → infraestrutura insuficiente **ou** custo total acima do orçamento
- **APROVADO COM RESSALVAS** → infraestrutura suficiente, orçamento não ultrapassado e consumo ALTO
- **APROVADO** → demais casos com infraestrutura suficiente e orçamento não ultrapassado

### Saída esperada

Ao final, o programa deve exibir um relatório legível (pequenas variações de apresentação são permitidas):

```
============== ARENA TECH ==============
Participantes: 30
Times necessários: 6
Computadores disponíveis: 30
Infraestrutura: SUFICIENTE
Consumo estimado: 48.00 kWh
Classificação do consumo: ALTO
Custo da energia: R$ 57.60
Custo da alimentação: R$ 600.00
Outros custos: R$ 150.00
CUSTO TOTAL: R$ 807.60
CUSTO POR PARTICIPANTE: R$ 26.92
Orçamento disponível: R$ 1000.00
Saldo: R$ 192.40
Situação do orçamento: DENTRO DO ORÇAMENTO
DECISÃO FINAL: APROVADO COM RESSALVAS
Motivo: consumo elevado de energia.
=========================================
```

### Teste mínimo obrigatório

Antes da avaliação por pares, o programa deve ser executado com, no mínimo, os dados abaixo:

| Participantes | Jog./time | PCs | Potência | Horas | R$/kWh | Kit | Outros | Orçamento |
|---|---|---|---|---|---|---|---|---|
| 30 | 5 | 30 | 800 W | 2 h | R$ 1,20 | R$ 20,00 | R$ 150,00 | R$ 1.000,00 |

Resultados esperados: consumo de **48,00 kWh** (ALTO), custo total de **R$ 807,60**, infraestrutura **SUFICIENTE**, orçamento **DENTRO DO ORÇAMENTO** e decisão final **APROVADO COM RESSALVAS**.

### Avaliação por pares

Um integrante permanece na bancada e os demais visitam outro grupo, que atua como equipe de revisão. O grupo avaliador executa o programa com diferentes entradas e registra, para cada teste: **entrada → resultado esperado → resultado obtido**.

Os testes devem ativar diferentes caminhos das decisões, produzindo no mínimo:

- um caso com infraestrutura suficiente e um com infraestrutura insuficiente;
- um caso de consumo BAIXO, um MODERADO e um ALTO;
- um caso DENTRO DO ORÇAMENTO, um NO LIMITE e um ACIMA DO ORÇAMENTO;
- pelo menos dois resultados diferentes para a decisão final.

**Pergunta norteadora:** o programa funciona apenas para o exemplo apresentado ou se comporta corretamente em diferentes situações?

O relatório de avaliação deve conter a identificação dos grupos, pontos fortes, pontos frágeis, registro dos testes, observações sobre clareza e organização do código e pelo menos uma melhoria recomendada.

### Uso de Inteligência Artificial

O uso de IA é permitido como apoio ao aprendizado, desde que seja declarado. O grupo deve informar qual ferramenta usou, em qual etapa, que parte da solução recebeu auxílio e se consegue explicar o código produzido. A avaliação não busca "detectar IA", mas verificar a compreensão da solução e o uso consciente da ferramenta.

### Retorno ao grupo e melhoria da solução

Após a avaliação, o grupo retorna ao seu projeto original, seleciona pelo menos uma sugestão de melhoria, ajusta o código ou a apresentação, registra a melhoria realizada (ou justifica por que não implementou uma sugestão) e descreve brevemente o que aprendeu.

### Entregas

- Arquivo `projeto1_arena_tech.c`, compilado e testado (**todos os alunos devem entregar**)
- Registro da execução do teste mínimo (print da tela, somente a saída)
- Relatório de avaliação por pares preenchido
- `README.md` curto com nomes e RGMs dos integrantes, descrição da solução, registro de uso de IA e melhoria realizada após o feedback

### Regras importantes

- Projeto em duplas ou trios, com todos os integrantes capazes de explicar os cálculos e as decisões
- Nomes de variáveis claros, indentação adequada e mensagens que orientem o usuário
- Estruturas condicionais são requisito obrigatório
- Não serão aceitos programas que exibam apenas resultados fixos, sem leitura de dados pelo teclado
- O programa deve ser testado com diferentes conjuntos de dados antes da avaliação por pares

### Critérios de avaliação

| Critério | Descrição | Valor |
|---|---|---|
| Entrada e saída | O programa compila, executa, realiza os cálculos corretamente e apresenta saídas coerentes | 0,25 |
| Estruturas de decisão | Uso correto de operadores relacionais/lógicos e das estruturas `if`, `if...else` e `if...else if...else` | 0,25 |

### Desafios extras (opcionais)

- Usar `switch...case` para escolher a categoria da estrutura do evento (Econômica, Padrão ou Premium), com custo específico para cada uma
- Validar uma opção inválida no `switch` com `default`
- Informar o percentual do orçamento já comprometido pelo evento
- Criar mensagens mais detalhadas para explicar os motivos da decisão final
- Personalizar o relatório com nome, data e identidade visual da Arena Tech

---

## 🎯 Objetivo do projeto

Transformar um problema contextualizado em uma solução computacional, seguindo o ciclo **desenvolver → testar → explicar → avaliar → melhorar**:

- **Planejar** a solução antes de implementar.
- **Aplicar** variáveis, entrada e saída, operadores e estruturas de decisão.
- **Testar** diferentes caminhos de execução do programa.
- **Explicar** as decisões implementadas no código.
- **Avaliar**, por meio da revisão por pares, a solução desenvolvida por outro grupo.

O projeto também permite praticar a leitura crítica de resultados, já que o programa não apenas calcula valores, mas os utiliza para emitir um diagnóstico sobre a viabilidade do evento.
