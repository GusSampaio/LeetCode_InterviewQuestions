class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> my_map;
        for(int i = 0; i<nums.size(); i++){
            if(my_map.count(nums[i])>0){
                my_map[nums[i]] += 1;
            }
            else{
                my_map[nums[i]] = 1;
            }
        }

        int result = 0;
        for(auto it : my_map){
            result += ((it.second * (it.second - 1)))/2;
        }
        return result;
    }
};
