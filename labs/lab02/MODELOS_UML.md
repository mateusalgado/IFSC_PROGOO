# Laboratório 02 — Modelos UML (casos de uso e classes)

Documento com diagramas em **Mermaid**. 
[mermaid.live](https://mermaid.live) ou usar extensões do VS Code/Cursor para exportar PNG/PDF.

---

## Exercício 01 — Controle de tarefas

### Casos de uso

**Ator:** Usuário.

```mermaid
flowchart LR
  U[Usuário]
  U --> UC1[Cadastrar tarefa]
  U --> UC2[Alterar tarefa]
  U --> UC3[Excluir tarefa]
  U --> UC4[Listar tarefas ativas]
  U --> UC5[Adicionar item de execução]
  U --> UC6[Alterar item de execução]
  U --> UC7[Registrar data de conclusão do item]
  U --> UC8[Consultar percentual concluído]
  U --> UC9[Listar tarefas concluídas]
  U --> UC10[Excluir tarefa concluída]

  UC5 -.->|inclui| UC8
  UC6 -.->|inclui| UC8
  UC7 -.->|inclui| UC8
  UC8 -->|quando total = 100%| UC11[Mover tarefa para concluídas]
```

**Resumo dos casos de uso**

| Caso de uso | Descrição breve |
|-------------|-----------------|
| Cadastrar / alterar / excluir tarefa | Prioridade (real), nome, data limite (se houver), detalhamento. |
| Gerenciar itens de execução | Percentual, descrição, data da execução (quando concluído). |
| Atualizar conclusão | Recalcular percentual; ao atingir 100%, mover para lista de concluídas. |
| Listar ativas / concluídas; excluir concluída | Conforme especificação do laboratório. |

### Diagrama de classes

```mermaid
classDiagram
  class Tarefa {
    +Real prioridade
    +String nome
    +Date dataLimite
    +String detalhamento
    +Real getPercentualConcluido()
  }

  class ItemExecucao {
    +Real percentual
    +String descricao
    +Date dataExecucao
  }

  class ListaTarefasAtivas {
    +adicionar(Tarefa)
    +remover(Tarefa)
    +listar() List~Tarefa~
  }

  class ListaTarefasConcluidas {
    +adicionar(Tarefa)
    +remover(Tarefa)
    +listar() List~Tarefa~
  }

  class AplicacaoControleTarefas {
    +moverParaConcluidas(Tarefa)
  }

  Tarefa "1" *-- "1..*" ItemExecucao : itens
  ListaTarefasAtivas "1" o-- "0..*" Tarefa
  ListaTarefasConcluidas "1" o-- "0..*" Tarefa
  AplicacaoControleTarefas ..> ListaTarefasAtivas
  AplicacaoControleTarefas ..> ListaTarefasConcluidas
```
---

## Exercício 02 — Festas infantis

### Casos de uso

**Ator:** Atendente (Rafaela / funcionário).

```mermaid
flowchart LR
  A[Atendente]
  A --> UC1[Cadastrar cliente]
  A --> UC2[Alterar cliente]
  A --> UC3[Cadastrar tema de festa]
  A --> UC4[Alterar tema]
  A --> UC5[Gerenciar itens do tema]
  A --> UC6[Registrar aluguel]
  A --> UC7[Alterar aluguel]
  A --> UC8[Consultar aluguéis]
  A --> UC9[Informar valor cobrado com desconto]

  UC6 -.->|usa| UC1
  UC6 -.->|usa| UC3
  UC9 -.->|estende| UC6
```

### Diagrama de classes

```mermaid
classDiagram
  class Cliente {
    +String nome
    +String telefone
    +Boolean clienteAntigo
  }

  class Endereco {
    +String logradouro
    +String numero
    +String complemento
    +String bairro
    +String cidade
    +String uf
    +String cep
  }

  class TemaFesta {
    +Decimal valorAluguel
    +String corToalhaMesa
  }

  class ItemTema {
    +String descricao
  }

  class Aluguel {
    +Date dataFesta
    +Time horaInicio
    +Time horaFim
    +Decimal valorCobrado
  }

  Cliente "1" --> "0..*" Aluguel : realiza
  TemaFesta "1" --> "0..*" Aluguel : tema
  TemaFesta "1" o-- "1..*" ItemTema : compostoPor
  Aluguel "1" --> "1" Endereco : local
```
---

## Exercício 03 — Cursos de aperfeiçoamento

### Casos de uso

**Ator:** Dono da empresa.

```mermaid
flowchart LR
  G[Gestor]
  G --> UC1[Cadastrar professor]
  G --> UC2[Cadastrar curso]
  G --> UC3[Vincular professor ao curso]
  G --> UC4[Cadastrar aluno]
  G --> UC5[Abrir turma]
  G --> UC6[Matricular aluno em turma]
  G --> UC7[Registrar pagamento na matrícula]
  G --> UC8[Consultar cursos / turmas / matrículas]

  UC6 -.->|inclui| UC4
  UC6 -.->|inclui| UC5
```

### Diagrama de classes

```mermaid
classDiagram
  class Professor {
    +String nome
    +String telefoneCelular
    +Decimal valorHoraAula
  }

  class Curso {
    +Date dataInicio
    +Date dataTermino
    +Time horarioInicio
    +Time horarioTermino
    +Integer cargaHoraria
    +String conteudoProgramatico
    +Decimal valorCurso
  }

  class Turma {
    +String identificador
  }

  class Aluno {
    +String nome
    +String rg
    +String cpf
    +Date dataNascimento
    +String enderecoCompleto
    +String telefonesContato
  }

  class Matricula {
    +Date dataMatricula
    +Decimal valorPago
  }

  Curso "1" --> "1" Professor : ministradoPor
  Curso "1" *-- "1..*" Turma
  Turma "1" o-- "0..*" Matricula
  Aluno "1" o-- "0..*" Matricula
```
---