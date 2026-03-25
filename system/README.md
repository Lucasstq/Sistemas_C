# Airline Reservation System (C)

Sistema simples de reserva de passagens aéreas desenvolvido em C, baseado em um exercício clássico do livro *C: How to Program*.

## Sobre o projeto

Este projeto simula o sistema de reservas de uma pequena companhia aérea com um único avião de 10 assentos, divididos em duas classes:

* 🥇 Primeira Classe (assentos 1–5)
* 💺 Classe Econômica (assentos 6–10)

O sistema permite que o usuário escolha a classe desejada e automaticamente aloca um assento disponível.

Caso a classe escolhida esteja cheia, o sistema oferece a opção de realocação para a outra classe.

---

## Conceitos aplicados

* Arrays unidimensionais
* Controle de fluxo (`if`, `else`, `while`)
* Manipulação de índices
* Simulação de sistema real
* Lógica de fallback (troca de classe)

---

## Funcionamento

1. O usuário escolhe a classe:

   * `1` → Primeira Classe
   * `2` → Econômica

2. O sistema:

   * Reserva automaticamente um assento disponível
   * Exibe o bilhete com número do assento

3. Se a classe estiver cheia:

   * O sistema pergunta se o usuário aceita mudar de classe

4. Se ambas estiverem cheias:

   * Exibe: `"Próximo voo em 3 horas"`

---

## Exemplo de uso

```
Digite 1 para Primeira Classe
Digite 2 para Econômica

> 1

Bilhete para primeira classe, assento: 1
```

---

## Tecnologias

* Linguagem C
* Compilador GCC

---

## Como executar

```bash
gcc main.c -o program
./program
```

---

## Melhorias futuras

* [ ] Separar lógica em funções
* [ ] Adicionar validação de entrada
* [ ] Criar versão com interface gráfica

---

## Autor

Lucas Emanuel

