#include <iostream> 
#include <vector> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        bool found = false;
        vector<int> solution;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && nums[i] + nums[j] == target){
                    solution.push_back(i);
                    solution.push_back(j);
                    found = true;
                    break;
                }
            }
            if(found) break;
        }

        if(found) return solution;
        else return vector<int>();
    }
};