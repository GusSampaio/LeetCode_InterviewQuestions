# Two Sum

Dado um array de números inteiros e um alvo inteiro, retorne os índices dos dois números de forma que eles somem ao alvo.

Você pode supor que cada entrada teria exatamente uma solução e não pode usar o mesmo elemento duas vezes.

Você pode retornar a resposta em qualquer ordem.

Exemplo:
```
Entrada: nums = [2,7,11,15], target = 9
Saída: [0,1]
Explicação: nums[0] + nums[1] == 9, então retornamos estes índices [0, 1].
```

## Resolução 'Brute Force'
Numa resolução trivial, percorreríamos o vetor 'nums' comparando elementos par a par e checando quando a soma deles resultasse no número alvo (target).

[Resolução Brute Force](https://github.com/GusSampaio/LeetCode_InterviewQuestions/blob/main/twoSum/solucao1.cpp)

Note que, desta maneira, o algoritmo é O(N^2). Há alguma maneira de melhorar esta complexidade de tempo?

## Resolução Linear
Nesta resolução precisamos usar um outro tipo de estrutura, um mapa. 
Neste mapa guardamos sempre o complemento (target - nums[i]) de maneira tal que, quando este complemento já existir no mapa, temos nosso resultado.

Tomemos como exemplo o caso que nos foi dado anteriormente.

-> Número atual: 2 (Posição 0)

    -> Complemento entre 9 e 2 (7).

    -> A chave 7 está presente no mapa? Não

    -> Guardamos 0 na posição 2 do mapa.


-> Número atual: 7 (Posição 1)

    -> Complemento entre 9 e 7 (2).

    -> A chave 2 está presente no mapa? Sim

    -> Retornamos a o elemento presente nesta chave (0) e a posição atual (1).


Outro exemplo:
```
Entrada: nums = [3,2,4], target = 6
Saída: [1,2]
```

-> Número atual: 3 (Posição 0)

    -> Complemento entre 6 e 3 (3).

    -> A chave 3 está presente no mapa? Não

    -> Guardamos 0 na posição 3 do mapa.


-> Número atual: 2 (Posição 1)

    -> Complemento entre 6 e 2 (4).

    -> A chave 4 está presente no mapa? Não

    -> Guardamos 1 na posição 2 do mapa.


-> Número atual: 4 (Posição 2)

    -> Complemento entre 6 e 4 (2).

    -> A chave 2 está presente no mapa? Sim

    -> Retornamos a o elemento presente nesta chave (1) e a posição atual (2).

[Resolução Linear](https://github.com/GusSampaio/LeetCode_InterviewQuestions/blob/main/twoSum/solucao2.cpp)

Perceba que, ao usar o mapa, o tempo de execução é reduzido mas o espaço de armazenamento necessário aumenta.
