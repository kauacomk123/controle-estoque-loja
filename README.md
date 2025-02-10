# Sistema de Controle de Estoque de Loja
--------------------------------------------------------------
## Este é um simples programa em C que simula o controle de estoque de uma loja. Ele permite adicionar e remover produtos de estoque, além de visualizar o estoque atual dos itens. O programa mantém o controle de três tipos de produtos: Camisas, Calças e Sapatos.
--------------------------------------------------------------
## Funcionalidades
O programa oferece as seguintes opções:

1.Adicionar Produtos: Permite adicionar uma quantidade específica de camisas, calças ou sapatos ao estoque.

2.Remover Produtos: Permite remover uma quantidade específica de camisas, calças ou sapatos do estoque (se houver quantidade suficiente disponível).

3.Ver Estoque: Exibe a quantidade atual de camisas, calças e sapatos disponíveis no estoque.

## Como Usar

1.Compile o código com um compilador C. Por exemplo, se você estiver utilizando o GCC, use o seguinte comando:

gcc -o controle_estoque controle_estoque.c

2.Execute o progama compilado:
./controle_estoque

3.O programa exibirá um menu com as opções:

1): Adicionar produtos ao estoque.
2): Remover produtos do estoque.
3): Visualizar o estoque atual.
4): Sair do programa.

4.Digite o número correspondente à opção desejada e siga as instruções na tela.
### Exemplo de Uso

produtos vendidos na loja
escolha uma opcao
1 adcionar produtos
2 remover produtos
3 ver estoque
digite 4 para sair
opcao: 1
Escolha o produto para adicionar:
1 - Camisa
2 - Calça
3 - Sapato
Produto: 1
Quantidade a adicionar: 5

produtos vendidos na loja
escolha uma opcao
1 adcionar produtos
2 remover produtos
3 ver estoque
digite 4 para sair
opcao: 3

Estoque atual:
Camisa: 15
Calça: 10
Sapato: 10

### Como Funciona
1.Adicionar Produtos: Quando o usuário escolhe a opção para adicionar produtos, o programa pede para selecionar o tipo de produto (Camisa, Calça ou Sapato) e a quantidade a ser adicionada ao estoque. O estoque é atualizado e a quantidade dos produtos é aumentada.

2.Remover Produtos: Quando o usuário escolhe a opção para remover produtos, o programa pede para selecionar o tipo de produto (Camisa, Calça ou Sapato) e a quantidade a ser removida. Caso a quantidade disponível seja suficiente, o estoque será atualizado, e os produtos serão removidos. Caso contrário, o programa informará que a quantidade é inválida ou que o estoque não tem o número solicitado de itens.

3.Ver Estoque: Exibe as quantidades atuais de Camisas, Calças e Sapatos no estoque.

##Autor
Desenvolvido por Kauã Santana


