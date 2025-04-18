#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        //mapeando arr2
        unordered_map<int,int> my_map;
        for(int i=0; i<arr2.size(); i++){
            my_map[arr2[i]] = 0;
        }
        
        vector<int> not_in_arr2;
        vector<int> output;
        output.reserve(arr1.size()); //evitando alocações desnecessárias
        
        //mapeando array1 considerando array2 
        for(int i=0; i<arr1.size(); i++){
            if (my_map.find(arr1[i]) != my_map.end()){
                my_map[arr1[i]] += 1;
            } 
            else{
                not_in_arr2.push_back(arr1[i]); //adicionando caso em que array1 possui elementos não presentes no array2
            }
        }

        //adicionando array2 na saída 
        for(int i=0; i<arr2.size(); i++){
            for(int j=0; j<my_map[arr2[i]]; j++){
                output.push_back(arr2[i]);
            }
        }

        //ordenar not_in_arr2 em ordem crescente
        sort(not_in_arr2.begin(), not_in_arr2.end());

        //adicionando not_in_arr2 na saída
        for(int i=0; i<not_in_arr2.size(); i++){
            output.push_back(not_in_arr2[i]);
        }

        return output;
    }
};
