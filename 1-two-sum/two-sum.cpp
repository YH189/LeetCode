class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_indes;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(num_to_indes.find(complement)!= num_to_indes.end()){
                return {num_to_indes[complement], i};
            }
            num_to_indes[nums[i]] = i;
        }
        return{};
    }
};