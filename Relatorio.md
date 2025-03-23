# Relatório Desafio Tema 2

- **Cadastro de Cartas**: O programa solicita os dados de duas cartas e armazena em uma estrutura (`struct`).
    
- **Cálculo de Atributos**: Densidade populacional e PIB per capita são calculados automaticamente.
    
- **Exibição de Cartas**: Os dados das cartas são exibidos de maneira organizada.
    
- **Comparação**: O atributo pré-definido (população) é comparado, e a carta com o maior valor vence.
    
- **Resultado**: Exibe a carta vencedora com base no atributo escolhido.
	
-  Escolher quantos estados serão cadastrados (entre 1 e 8).
    
- Definir quantas cartas cada estado terá (máximo 4 por estado).
    
- Cadastrar e exibir todas as cartas mantendo a estrutura original.
	 
- **Nome do estado armazenado**: Agora cada carta tem um campo `estadoNome`, permitindo que o usuário informe o nome real do estado, enquanto a lógica continua usando as letras (`A` a `H`).  
	
-  **Quantidade dinâmica de estados e cartas**: O usuário pode escolher até **8 estados** e até **4 cartas por estado**.  
	
-  **Cadastro organizado por estado**: O código mantém a organização dos estados e permite o cadastro das cartas dentro deles.  
	
-  **Comparação entre as primeiras duas cartas cadastradas** (como exemplo).
Escolha de dois atributos: O jogador escolhe dois atributos para comparação.

- Menus dinâmicos: Após a escolha do primeiro atributo, o segundo atributo não pode ser o mesmo.

- Comparação múltipla: Compara as cartas com base em dois atributos escolhidos, exibindo os valores de cada carta.

- Soma dos atributos: A soma dos valores de ambos os atributos de cada carta é calculada e usada para determinar o vencedor.

- Tratamento de empates: Caso as somas sejam iguais, o programa exibirá "Empate!".

- Operador ternário: Utilizado para simplificar a comparação de quem venceu em cada atributo.