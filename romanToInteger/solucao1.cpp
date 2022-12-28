#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
    int res = 0;
    unordered_map<char,int> map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    // Inicializa o total com o valor do primeiro algarismo
    res = map[s[0]];

    // Percorre o vetor de algarismos romanos
    for(int i = 1; i < s.size(); i++){
        // Verifica se o algarismo atual é maior ou menor do que o algarismo anterior
        if(map[s[i]] > map[s[i-1]]){
            // Se o algarismo atual for maior, significa que ele deve ser subtraído do total
            // usando o valor do algarismo anterior como referência
            res += map[s[i]] - 2 * map[s[i-1]];
        }
        else{
            // Se o algarismo atual for menor ou igual, adiciona o valor do algarismo atual ao total
            res += map[s[i]];
        }
    }

    return res;
    }
};