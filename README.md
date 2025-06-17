# 🍔 Gerenciador de Hamburgueria

Trabalho acadêmico — Desenvolvimento de um sistema em C para gerenciamento de pedidos de uma hamburgueria, com cadastro validado, consultas e geração de estatísticas.

---

## 📝 Sobre o Projeto

Este projeto consiste na modelagem e implementação de um gerenciador de hamburgueria. O sistema controla as vendas, analisa o perfil dos consumidores e permite consultas detalhadas baseadas nos pedidos realizados.

---

## 🚀 Funcionalidades

### 1. Cadastro de Pedidos

- Cadastro de exatamente **4 pedidos**.  
- Cada pedido contém:  
  - Valor total da venda (não pode ser negativo nem maior que 1000).  
  - Quantidade de itens vendidos.  
  - Sexo do cliente (apenas 'm', 'f' ou 'n').  
  - Código do pedido (uma letra de A até G).  

- Validações:  
  - Impede o cadastro de valores inválidos e informa o erro.  
  - Impede o cadastro se o sexo ou código forem inválidos e informa o erro.  
  - Confirma o cadastro com mensagem de sucesso caso não ocorra erro.  

### 2. Menu Principal

Após o cadastro dos 4 pedidos, o programa exibe um menu com as opções:  

- Pesquisar pedidos por código.  
- Ver informações de todos os pedidos cadastrados.  
- Encerrar o programa.  

### 3. Pesquisa de Pedidos

- Solicita o código para pesquisa.  
- Exibe todos os pedidos com aquele código, mostrando:  
  - Valor do pedido.  
  - Quantidade de itens vendidos.  
  - Sexo do cliente.  
- Se não encontrar nenhum pedido, informa o usuário.  
- Após a exibição, pergunta se deseja retornar ao menu principal ou encerrar.  

### 4. Informações de Todos os Pedidos

- Solicita um valor para filtrar a quantidade de pedidos abaixo desse valor.  
- Exibe as seguintes informações:  
  - Quantidade de pedidos abaixo do valor informado.  
  - Quantidade de pedidos acima de R$35.  
  - Quantidade de compradores homens.  
  - Valor total comprado pelas mulheres.  
  - Valor médio dos pedidos.  
  - Valor do pedido mais caro.  
  - Valor do pedido mais barato.  
  - Quantidade total de itens vendidos.  
  - Quantidade de itens comprados por clientes que não informaram sexo.  
  - Código de pedido mais vendido (em caso de empate, exibe qualquer um dos códigos mais vendidos).  
- Pergunta se deseja retornar ao menu principal ou encerrar o programa.  

---

## ⚙️ Tecnologias Utilizadas

- Linguagem: **C**  
- Estruturas de dados simples (vetores).  
- Validação de entrada de dados.  
- Loop e controle de fluxo para menus interativos.  

---

## 💻 Execução

Compile e execute o código em um ambiente C (como Dev-C++, Code::Blocks ou terminal com GCC).

---

## 📋 Observações

- O programa garante que todas as entradas são validadas antes do cadastro.  
- O menu é exibido repetidamente até o usuário optar por encerrar o programa.  
- Mensagens claras de erro e sucesso são apresentadas para facilitar o uso.  

---
