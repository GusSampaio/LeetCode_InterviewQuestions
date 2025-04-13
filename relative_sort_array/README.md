# Relative Sort Array

Dados 2 arrays (arr1 e arr2), considere que os elementos do arr2 são distintos e todos os elementos de arr2 estão em arr1.

Sorteie os elementos de arr1 considerando que a ordem dos itens no arr1 seja a mesma que a do arr2. Elementos que não aparecem no arr2 devem ser realocados para o final do arr1 em ordem ascendente.

Exemplo 1:
> Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
> 
> Output: [2,2,2,1,4,3,3,9,6,7,19]

Exemplo 2:
> Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
> 
> Output: [22,28,8,6,17,44]

---

## Solução considerando somente o tempo

1. Primeiro, mapeia-se `arr2` em um dicionário. Esse dicionário serve para **identificar rapidamente quais elementos de `arr1` precisam manter a ordem específica definida em `arr2`**, além de armazenar a **contagem de ocorrências** desses elementos.

2. Em seguida, percorre-se `arr1` uma vez, e para cada elemento:
   - Se ele estiver presente no dicionário (ou seja, também em `arr2`), incrementa-se sua contagem.
   - Caso contrário, ele é armazenado separadamente para posterior ordenação.

3. Depois, para reconstruir a saída ordenada, o algoritmo:
   - Insere no vetor de saída todos os elementos de `arr2`, na ordem original, repetindo conforme suas contagens no dicionário.
   - Em seguida, ordena os elementos que não pertencem a `arr2` em ordem crescente e os adiciona ao final da saída.

4. O tempo de execução depende principalmente de:
   - O tempo de busca e inserção no dicionário (`O(1)` no caso do `unordered_map`, `O(log n)` com `map`),
   - O custo da ordenação dos elementos não presentes em `arr2` (`O(k log k)`),
   - E do tempo linear de construção do vetor de saída.

---
