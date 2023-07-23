class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> valueOfIndex ;
        for(int i =0 ; i<nums.size(); i++)
        {
            int remaining = target - nums[i];
            if(valueOfIndex.find(remaining) != valueOfIndex.end())
                    return {valueOfIndex[remaining], i};
            valueOfIndex[nums[i]] = i;
        }
        
        return {};
        
    }
};