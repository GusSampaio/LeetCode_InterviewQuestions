# Roman To Integer

Os algarismos romanos são representados por sete símbolos diferentes: I, V, X, L, C, D e M.

```
Símbolo      Valor
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

Por exemplo, 2 é escrito como II em algarismo romano, apenas dois somados. 12 é escrito como XII, que é simplesmente X + II. O número 27 é escrito como XXVII, que é XX + V + II.

Os algarismos romanos geralmente são escritos do maior para o menor, da esquerda para a direita. No entanto, o numeral para quatro não é IIII. Em vez disso, o número quatro é escrito como IV. Como o um vem antes do cinco, nós o subtraímos, resultando em quatro. O mesmo princípio se aplica ao número nove, que é escrito como IX. Existem seis instâncias em que a subtração é usada:

I pode ser colocado antes de V (5) e X (10) para formar 4 e 9.
X pode ser colocado antes de L (50) e C (100) para fazer 40 e 90.
C pode ser colocado antes de D (500) e M (1000) para fazer 400 e 900.

Dado um numeral romano, converta-o para um número inteiro.

## Solução trivial
Uma possível solução trivial seria percorrer o vetor elemento por elemento e com *vários* condicionais checar se o próximo elemento é uma das condições citadas acima. Esta solução pode ser implementada em O(N) porém pode não ser muito 'elegante'.

## Solução elegantemente trivial
Nesta abordagem um pouco mais sutil, podemos checar se o elemento atual é maior que o elemento anterior.

Caso seja, significa que ele deve ser subtraído do total usando o valor do algarismo anterior como referência. Caso contrário, significa que ele deve ser adicionado ao total.

[Resolução](https://github.com/GusSampaio/LeetCode_InterviewQuestions/blob/main/romanToInteger/solucao1.cpp)