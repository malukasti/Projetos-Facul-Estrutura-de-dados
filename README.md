# 📚 Lista Encadeada e Pilha Dinâmica em C

Repositório desenvolvido como material de estudo e referência para implementação de **estruturas de dados dinâmicas em linguagem C**, com foco em **Lista Encadeada** e **Pilha Dinâmica**.

A proposta deste projeto é servir como um guia para entender não apenas como utilizar essas estruturas, mas também como elas são construídas internamente utilizando **ponteiros, alocação dinâmica de memória e nós encadeados**.

## 🎯 Objetivo

Este projeto tem como objetivo apresentar, de forma prática, os principais conceitos envolvidos na implementação de:

* 🔗 Lista Encadeada
* 📚 Pilha Dinâmica
* 🧩 Estruturas de nós
* 👉 Manipulação de ponteiros
* 💾 Alocação e liberação dinâmica de memória
* 🔄 Inserção e remoção de elementos
* 🔍 Percorrimento e consulta das estruturas

O código foi desenvolvido durante os estudos da disciplina de **Estruturas de Dados**, utilizando a linguagem C.

## 🧠 Conceitos abordados

### Lista Encadeada

Uma lista encadeada é uma estrutura dinâmica composta por nós, onde cada nó armazena um elemento e um ponteiro para o próximo nó da sequência.

Representação simplificada:

```text
+-------+------+    +-------+------+    +-------+------+
| Dado  |  *---|--->| Dado  |  *---|--->| Dado  | NULL |
+-------+------+    +-------+------+    +-------+------+
```

Diferentemente de um vetor, os elementos não precisam ocupar posições consecutivas na memória.

A implementação permite trabalhar com operações como:

* Inserção de elementos
* Remoção de elementos
* Busca
* Percorrimento
* Verificação da lista
* Liberação da memória

### Pilha Dinâmica

A pilha segue o princípio **LIFO (Last In, First Out)**, ou seja, o último elemento inserido é o primeiro a ser removido.

Exemplo:

```text
        +-------+
        |   3   | ← Topo
        +-------+
        |   2   |
        +-------+
        |   1   |
        +-------+
```

As principais operações de uma pilha são:

* `push` — adiciona um elemento
* `pop` — remove o elemento do topo
* `top` — consulta o elemento do topo
* Verificação de pilha vazia
* Liberação da estrutura

## 📁 Estrutura do projeto

Os arquivos são organizados de forma a separar as estruturas e suas implementações, facilitando o estudo e a reutilização do código.

```text
.
├── LLSE.h
│
├── stacknode.h
│
└── README.md
```

> A estrutura acima representa a organização conceitual do projeto. Os nomes e diretórios podem variar conforme a versão do repositório.

## ⚙️ Tecnologias

* **Linguagem:** C
* **Conceitos:** Estruturas de Dados, Ponteiros e Alocação Dinâmica
* **Compilador:** GCC
* **Ambiente:** Linux / VS Code

## 🚀 Compilação

Caso o projeto possua um arquivo principal (`main.c`), ele pode ser compilado utilizando:

```bash
gcc main.c -o programa
```

E executado com:

```bash
./programa
```

Dependendo da organização dos arquivos, pode ser necessário incluir os arquivos `.c` correspondentes:

```bash
gcc main.c lista.c pilha.c -o programa
```

## 📖 Para que este repositório serve?

Este repositório foi criado principalmente como **material de estudo e consulta**.

A intenção é facilitar o entendimento de como estruturas de dados dinâmicas funcionam em C, permitindo consultar o código e utilizá-lo como base para exercícios e novos projetos.

É especialmente útil para quem está começando a estudar:

```text
C
 ↓
Ponteiros
 ↓
Structs
 ↓
Alocação dinâmica
 ↓
Nós encadeados
 ↓
Lista Encadeada
 ↓
Pilha Dinâmica
```

## 🎓 Contexto acadêmico

Projeto desenvolvido durante a graduação em **Ciência da Computação**, como parte dos estudos relacionados a estruturas de dados e programação em linguagem C.

O código possui finalidade predominantemente **educacional**, podendo ser utilizado como referência para estudos, exercícios e implementação de outras estruturas de dados.

## 👨‍💻 Autor

**Ryan Michel Silvério da Silva**

Estudante de Ciência da Computação.

---

⭐ Se este repositório foi útil para seus estudos, considere deixar uma estrela!
