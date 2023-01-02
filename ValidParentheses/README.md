# Valid Parentheses
Dada uma string s contendo apenas os caracteres '(', ')', '{', '}', '[' e ']', determine se a string de entrada é válida.

Uma string de entrada é válida se:

Os colchetes abertos devem ser fechados pelo mesmo tipo de colchetes.
Os colchetes abertos devem ser fechados na ordem correta.
Cada colchete fechado tem um colchete aberto correspondente do mesmo tipo.

Exemplo 1:
```
Entrada: s = "()[]{}"
Saída: true
```

Exemplo 2:
```
Entrada: s = "(]"
Saída: false
```

## Observações
* 1 <= s.comprimento <= 10^4
* s consiste apenas em caracteres '()[]{}'.

## Solução
Uma solução válida para resolução do problema seria criar um mapa de pares, onde cada 'char' '({[' mapeie seu correspodente direto.

Feito isso, criamos uma outra string auxiliar que terá a função de guardar os itens analizados e sempre checar se o item atual está numa posição válida.

A implementação do código acima segue em: [Resolução ](https://github.com/GusSampaio/LeetCode_InterviewQuestions/blob/main/ValidParentheses/solucao1.cpp)
