# Estrutura de Dados (Prof. Sakaue)

Repositório com exercícios e implementações de **estruturas de dados e algoritmos**, escritos principalmente em **C**. Cada pasta contém um exercício ou estrutura independente, organizado por tema.

## Sumário

- [Conteúdo](#conteúdo)
- [Como compilar e executar](#como-compilar-e-executar)
- [Estrutura do repositório](#estrutura-do-repositório)
- [Conceitos praticados](#conceitos-praticados)

## Conteúdo

### Fundamentos de C

| Pasta | Tema |
|-------|------|
| `ponteiros` | Ponteiros e ponteiros de ponteiro |
| `struct` | Definição e uso de `struct` |
| `alocacaoDinamica` | `malloc`, `free` e gerenciamento de memória |
| `imprimir-10` | Exercício introdutório de laços |

### Arrays e busca

| Pasta | Tema |
|-------|------|
| `soma-elementos-array` | Soma dos elementos de um vetor |
| `impares-pares-array` | Separação de ímpares e pares |
| `encontrar-pares` | Localização de elementos pares |
| `maiorMenor` | Maior e menor valor de um vetor |
| `busca-binaria` | Busca binária em vetor ordenado |

### Recursão

| Pasta | Tema |
|-------|------|
| `maior-recursiva` | Maior elemento de forma recursiva |
| `somar-elementos-recursao` | Soma de elementos com recursão |

### Strings

| Pasta | Tema |
|-------|------|
| `palindromo` | Verificação de palíndromos |
| `validador-palindromo` | Validador de palíndromos |
| `buscar-vogal` | Busca de vogais em texto |
| `encontrarVogal` | Localização de vogais em texto |

### Ordenação

| Pasta | Tema |
|-------|------|
| `insertionSort` | Insertion Sort |
| `selectionSort` | Selection Sort |
| `inserir-e-reordenar` | Inserção seguida de reordenação |

### Listas encadeadas

| Pasta | Tema |
|-------|------|
| `lista` | Lista encadeada básica |
| `insercaoComCabeca` | Inserção com nó cabeça |
| `insercaoNoFim` | Inserção no fim da lista |
| `contarNosListaEncadeada` | Contagem de nós |
| `encontrarElementoListaEncadeada` | Busca de elemento na lista |
| `transformarVetorEmListaEncadeada` | Conversão de vetor em lista |
| `classeLinkedListJavaEmC` | Simulação de uma `LinkedList` estilo Java em C |

### Pilhas e filas

| Pasta | Tema |
|-------|------|
| `pilhaHistorico` | Pilha aplicada a um histórico de navegação |
| `pilhaHistoricoWeb` | Versão web do histórico com pilha |
| `filaAcougue` | Fila aplicada a um cenário de atendimento (açougue) |

### Árvores

| Pasta | Tema |
|-------|------|
| `arvore` | Árvore binária de busca: inserção, busca, remoção e percurso em ordem |

### Outros

| Pasta | Tema |
|-------|------|
| `output` | Saídas geradas na compilação/execução |

## Como compilar e executar

Pré-requisito: um compilador C, como o `gcc`.

```bash
# clonar o repositório
git clone https://github.com/vncssd/estrutura-de-dados-sakaue.git
cd estrutura-de-dados-sakaue

# compilar um exercício (exemplo: árvore)
gcc arvore/main.c -o output/arvore -Wall -Wextra

# executar
./output/arvore
```

> Ajuste o nome do arquivo `.c` conforme o conteúdo de cada pasta.

## Estrutura do repositório

```
estrutura-de-dados-sakaue/
├── alocacaoDinamica/
├── arvore/
├── busca-binaria/
├── ...
├── output/
└── README.md
```

Cada pasta é independente e pode ser compilada separadamente.

## Conceitos praticados

- Ponteiros e ponteiros para ponteiros
- Alocação dinâmica de memória
- Recursão
- Algoritmos de busca e ordenação
- Listas encadeadas
- Pilhas e filas
- Árvores binárias de busca

## Autor

[vncssd](https://github.com/vncssd)
